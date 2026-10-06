# SD card

Almost every multi-firmware setup expects a card. The launcher can still boot with no card; you just cannot install anything onto the slots from files.

## Prep

1. 8, 16, or 32 GB microSD. Bigger cards often ship as exFAT. The ESP32 SD library wants **FAT32**.
2. On Windows, FAT32 format of cards over 32 GB needs a third-party tool (Rufus, guiformat). On macOS, Disk Utility → MS-DOS (FAT). On Linux, `mkfs.vfat`.
3. Allocation unit 32 KB is a safe default.
4. Put the card in before you boot the launcher if you want it enumerated on first start.

SPI SD on this board is slow. Do not be surprised if a 4 MB binary takes a few seconds to copy into a slot.

## What goes on the card

```text
/
  bruce-t-embed-cc1101.bin      # app image, any name you like
  furi_esp32.bin
  willy.bin
  /IR
  /RFID
  /subghz
  /Bruce                        # Bruce creates this once it runs
```

Rules that actually matter:

- The launcher installs from a `.bin` in the card root, or from a folder it tells you about. Keep names short, no spaces if a firmware is picky.
- A merged app image (one file, bootloader + partition table + app, or a plain app image the launcher knows how to wrap) is what you want. Loose `bootloader.bin` + `partitions.bin` + `firmware.bin` must be merged first. bmorcelli Launcher can merge catalog multi-part entries for you.
- Flipper-style ports are not done when the `.bin` is flashed. They also need the project’s `sdcard.zip` unpacked to the card root (`/ext` content: databases, FAPs, animations). Without it the UI boots and most apps have nothing to load.
- Bruce stores captures and config partly in flash (LittleFS) and partly on the card. A launcher without a LittleFS partition will look like “Bruce forgets settings”. See [updates](05-updates.md).

## USB disk mode

Both launchers can expose the card as a USB drive so you do not have to pull it.

- loznoc dual-boot: main menu → **USB**. Copy files, then back out so it remounts the card.
- bmorcelli Launcher: **USB** in the main menu.

Use a data cable. If the PC only charges, the port is power-only or the cable is. Eject from the computer before you leave USB mode.

## Wi-Fi drop

loznoc’s launcher can host a page (its own AP, or joined to your network as `tembed.local`) that accepts `.bin` files and theme packs. bmorcelli’s **WUI** is the same idea. Useful when the card is glued in and you do not want to open the shell.
