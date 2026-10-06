# Updates

Three different things get updated, and they are not the same button.

| Thing | What changes | What you keep |
| --- | --- | --- |
| Launcher | The menu you boot into | Slots and SD, if you do not erase flash |
| An app slot | Bruce, Flipper port, Willy, … | Other slots, launcher settings |
| Files on the card | Captures, FAPs, IR, themes | Flash untouched |

## Update the launcher

### loznoc dual-boot

On a device that already runs it: Settings → Power → Flash, so it reboots into download mode, then use the web flasher again.

The web flasher writes `0x0`, `0x8000`, and `0x10000` and leaves NVS alone, so the PIN, theme, and slot names stay. Writing the single `launcher.bin` at `0x0` with esptool fills `0x9000–0x10000` with `0xFF` and resets those settings. App slots themselves start at `0x1A0000` and are not part of a launcher update.

A power-cycle on a fresh device cancels download mode. If the port never shows up, you are not in download mode — go through the menu path, or hold the right button combo from the LilyGO docs while plugging in USB.

### bmorcelli Launcher

Flash the new Launcher build from [bmorcelli.github.io/Launcher](https://bmorcelli.github.io/Launcher/) the same way you flashed the first one. Do not tick full erase if you want installed apps to remain — erase is for a dirty board, not a version bump. After it boots, `OTA → Check for Updates` only looks at catalog firmware you downloaded, not at the launcher itself.

## Update an app inside a slot

1. Download the new `.bin` (Bruce release, Willy release, …).
2. Copy it to the card, or pull it from the catalog.
3. Install it into the **same slot**. That overwrites that slot only.
4. Boot it. Bruce will keep LittleFS config if the partition table still has the `spiffs` / LittleFS region. Card files are untouched.

On bmorcelli, `OTA → Check for Updates` compares `downloaded.json` with LauncherHub and can fetch every newer file, then you install the new file into the slot. `[Update All]` downloads; it does not silently replace a running slot until you install.

## The Bruce-forgets-settings fix

Only if the launcher is a loznoc build from before v1.1.

Those builds had no LittleFS partition, so Bruce wrote config into a hole and lost it on the next boot. Fix is the partition table only, 3 KB, not a full reflash:

```bash
esptool --chip esp32s3 --port /dev/ttyACM0 write-flash 0x8000 partitions.bin
```

`partitions.bin` is `docs/partitions.bin` in the loznoc repo. Enter download mode first. First Bruce boot after this formats the new filesystem and writes defaults — set Bruce settings once more and they stick. Current loznoc images already include this table; do not paste an old table over a new launcher.

## Update files only

USB disk mode, or pull the card, or the Wi-Fi portal. Eject before reboot. Replacing `sdcard` assets for the Flipper port is this kind of update: no esptool involved.

## Starting over

Full erase, then launcher, then slots:

```bash
esptool --chip esp32s3 --port /dev/ttyACM0 erase-flash
```

Then the web flasher. This is the right move after a bad partition table, a half-written image, or a board that boots to black and never enumerates. It does not touch the SD card.

## Version hygiene

- Write the version you installed in the slot name (`Bruce 1.16.1`). Future you will not remember.
- Do not mix a new app image with an old partition table from a different launcher. If a new launcher release says the table changed, flash the launcher the way that release says, not just the app.
- Beta Bruce builds are fine in a spare slot. Do not overwrite your known-good slot with a beta first.
