# Multiple firmware on one device

You flash a launcher once. The launcher owns the bootloader path, so a normal reset always returns to it. Each app is written into its own flash slot. The SD card holds the `.bin` you install from, plus whatever that app wants (captures, FAPs, IR files).

```text
power on
  → custom bootloader
    → launcher UI
      → you pick slot 2
        → Bruce runs
          → you reboot
            → launcher UI again
```

You cannot get “stuck” in Bruce unless the bootloader itself was overwritten. A power-cycle is the way home.

## Choose a launcher

### bmorcelli Launcher

- Site: [bmorcelli.github.io/Launcher](https://bmorcelli.github.io/Launcher/)
- Repo: [bmorcelli/Launcher](https://github.com/bmorcelli/Launcher)
- Pick **LilyGO T-Embed CC1101** in the flasher. Plus uses that same device entry unless the page has grown a Plus row — read the device list on the day you flash.
- Why this one: online catalog, install straight from Wi-Fi, `OTA → Check for Updates`, WebUI, USB disk mode. Already the usual answer on the LilyGO sub.
- Version line as of September 2026 was 2.9.x. Flash current, not a random fork build.

### loznoc dual-boot

- Site: [loznoc.github.io/dualboot](https://loznoc.github.io/dualboot/)
- Repo: [loznoc/dualboot](https://github.com/loznoc/dualboot)
- Why this one: built for this screen (320×170), three named slots with icons, themes, boot animation, PIN, Wi-Fi portal with a screen mirror. Bruce and the Flipper port are not inside the launcher image — you add them after.
- Pre-1.1 builds shipped a partition table with no LittleFS area, so Bruce looked like it forgot settings. Current builds fixed that. If you already flashed an old one, see [updates](05-updates.md).

Flashing either launcher erases the app area. Copy anything you care about off the device first. The SD card is not erased by a flash.

## Install the launcher

1. FAT32 card inserted.
2. Desktop Chrome or Edge, data cable, board on.
3. Open the launcher web flasher. Click Install. Pick the port.
4. Wait until it reboots into the launcher. First boot can sit on a logo for a few seconds while it mounts the card.

Manual loznoc path (the published image is a full image, so offset `0x0`):

```bash
esptool --chip esp32s3 --port /dev/ttyACM0 write-flash 0x0 launcher.bin
```

That full image also resets launcher settings (PIN, theme, slot names), because it rewrites the NVS gap. The web updater writes the pieces around NVS and keeps settings. Prefer the web updater after the first install.

## Put apps in slots

1. Download the `.bin` for **this board** from the project’s releases.
2. Copy it to the card root. USB disk mode is the least annoying way.
3. On the launcher: Install → file → slot → name.
4. Boot the slot once to confirm, then reboot to confirm you land back in the launcher.

bmorcelli can skip the copy step: `OTA` → catalog → install. It records downloads in `downloaded.json` so later update checks know what you have.

### Binaries that are known to work in a slot

| App | Where | Plus note |
| --- | --- | --- |
| Bruce | [BruceDevices/firmware](https://github.com/BruceDevices/firmware) releases, asset with `lilygo-t-embed-cc1101` in the name | Use a Plus asset if one is published; otherwise the CC1101 asset. nRF24 menus need the Plus build. |
| Flipper port | Sor3nt ESP32 port releases (`furi_esp32.bin` or the current name) | Same T-Embed target. Unpack `sdcard.zip` or the UI is empty. |
| Willy V3 | [h-RAT/Willy_Firmware_V3_T-Embed_CC1101](https://github.com/h-RAT/Willy_Firmware_V3_T-Embed_CC1101) | Separate Plus build. Do not cross-flash. |
| Capibara, Marauder-style builds, your own PlatformIO app | That project’s release, ESP32-S3, 16 MB flash | Must use this board’s pins. A generic ESP32-S3 Marauder image will not drive the CC1101. |

Three slots on loznoc (about 4.5 MB each, apps start at `0x1A0000`). A single image bigger than the slot will be refused — that is the launcher protecting the next slot, not a bad cable.

## Suggested layout

| Slot | App | Why |
| --- | --- | --- |
| 1 | Bruce | Daily driver, CC1101 + NFC + IR + Wi-Fi |
| 2 | Flipper port | UI you already know, needs the SD asset pack |
| 3 | Spare | Willy, a test build, or empty |

Names and icons can be changed later. On loznoc that is Settings → Icons. On bmorcelli it is the app manager / CFG.

## What not to do

- Do not flash a second launcher into a slot. A launcher expects to own `0x0` and the partition table. Inside a slot it either boot-loops or boots and then cannot see the other slots.
- Do not install a binary built for T-Embed (no CC1101), CYD, or M5Stack. Wrong display pins look like a black screen or a torn image.
- Do not format the card after installing if the app keeps its databases there. The flash slot will still boot; the app will look blank.
