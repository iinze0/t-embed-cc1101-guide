# Firmware index

One list. Launchers first, then apps. All of these are ESP32-S3 builds. A binary for another board does not belong in a slot.

Install path is [from this repo](00-from-this-repo.md). Multi-boot detail is [multi-firmware](04-multi-firmware.md). What those menus are allowed to touch is [capabilities](07-capabilities-and-limits.md) and [LEGAL.md](../LEGAL.md).

## Launchers (pick one)

| Firmware | Boards | What it is | Get it |
| --- | --- | --- | --- |
| bmorcelli Launcher | CC1101 and Plus | Catalog, OTA, USB disk, WebUI | [flasher](https://bmorcelli.github.io/Launcher/) · [repo](https://github.com/bmorcelli/Launcher) |
| loznoc dual-boot | CC1101 / Plus | 3 named slots, themes, PIN, Wi-Fi portal | [flasher](https://loznoc.github.io/dualboot/) · [repo](https://github.com/loznoc/dualboot) |

Flash only one. Slot apps on the SD card stay.

## Apps

| Firmware | CC1101 | Plus | Need besides the .bin | Get it |
| --- | --- | --- | --- | --- |
| Bruce | Yes | Yes (Plus asset if listed) | FAT32 card for captures | [bruce.computer](https://bruce.computer/) · [releases](https://github.com/BruceDevices/firmware/releases) |
| Willy V3 | Yes | Yes (separate Plus build) | Card optional | [releases](https://github.com/h-RAT/Willy_Firmware_V3_T-Embed_CC1101) |
| Flipper-style port (Sor3nt) | Yes | Same target | **sdcard pack unpacked** | Project releases. Search Sor3nt ESP32 Flipper port. |
| CapibaraZero | Yes (from 0.5.1) | Confirm asset | Their flash layout | [releases](https://github.com/CapibaraZero/fw/releases) |
| ESP32 Bit Pirate | Yes | Yes | Web flasher | [board page](https://geo-tp.github.io/ESP32-Bit-Pirate/boards/t-embed-cc1101/) |
| LilyGO factory demo | Yes | Yes | Nothing | [LilyGO repo](https://github.com/Xinyuan-LilyGO/T-Embed-CC1101) |

Capibara and Bit Pirate go in a launcher slot if the image fits (loznoc slots ~4.5 MB). Otherwise single-firmware flash.

## Suggested layout

| Slot | App |
| --- | --- |
| 1 | Bruce (current stable) |
| 2 | Flipper port + sdcard pack |
| 3 | Willy Plus, Bit Pirate, or empty |

Launcher is not a slot. It owns boot.

## What is not a firmware for this board

- Meshtastic / MeshCore / SX1262 — this radio is a CC1101, not LoRa.
- Official Flipper Zero firmware — different CPU. The Sor3nt port is the one that runs here.
- A “preflashed” image from a marketplace seller. Flash from the links above.
