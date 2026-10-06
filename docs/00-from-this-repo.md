# Do the whole setup from this repo

You do not need a second guide. Firmware binaries stay on the project that builds them (license and size). This page is the order of operations.

## 0. Read [LEGAL.md](../LEGAL.md)

If the thing you want to open, copy, or knock off the air is not yours, stop. The rest of this page is install only.

## 1. Identify the board

[Hardware](01-hardware.md). Plus has the nRF24 fitted. Original does not. Antenna version (internal or SMA) is a separate choice.

## 2. Card

[SD card](02-sd-card.md). FAT32, 8–32 GB, inserted before first launcher boot.

## 3. Pick one install

Single app, no switching: [single firmware](03-single-firmware.md).

More than one app: [multi-firmware](04-multi-firmware.md). Flash exactly one of these, not both:

- bmorcelli Launcher — https://bmorcelli.github.io/Launcher/
- loznoc dual-boot — https://loznoc.github.io/dualboot/

Browser: desktop Chrome or Edge. Cable: USB-C data. Board charges while plugged in; click the encoder if the screen is dark.

## 4. Apps to put in slots

Download the matching asset from the project, copy to the card root, install into a slot from the launcher.

- Bruce — https://github.com/BruceDevices/firmware/releases — asset name contains `lilygo-t-embed-cc1101`. Web flasher: https://bruce.computer/
- Willy V3 — https://github.com/h-RAT/Willy_Firmware_V3_T-Embed_CC1101 — Plus asset only on a Plus board
- Flipper-style port — Sor3nt ESP32 port releases, plus that project's sdcard pack unpacked on the card
- Factory demo, if you need a known-good image — https://github.com/Xinyuan-LilyGO/T-Embed-CC1101

Suggested slots: 1 Bruce, 2 Flipper port, 3 spare. Name the slot with the version.

## 5. First boot of an app

Set Sub-GHz to 868 or 433.92 before any transmit. 915 is the wrong plan in Norway. Confirm the encoder works in the launcher before you blame the app.

## 6. Later

[Updates](05-updates.md) for launcher vs slot vs card files. [Troubleshooting](06-troubleshooting.md) if the port never appears or the screen stays black.

## What you still do on the device, not in git

Slot install, USB disk mode, and OTA catalog installs happen on the launcher UI. This repo cannot push a `.bin` into your board. The web flashers above are the button that does.
