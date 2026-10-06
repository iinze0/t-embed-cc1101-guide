# Everything you can run on a T-Embed

One list. Launchers first, then apps. All of these are ESP32-S3 builds. A binary for another board does not belong in a slot.

Install path is [from this repo](00-from-this-repo.md). Multi-boot detail is [multi-firmware](04-multi-firmware.md). What those menus are allowed to touch is [capabilities](07-capabilities-and-limits.md) and [LEGAL.md](../LEGAL.md).

## Launchers (pick one)

| Firmware | Boards | What it is | Get it |
| --- | --- | --- | --- |
| bmorcelli Launcher | CC1101 and Plus (same device entry unless the flasher has grown a Plus row) | Catalog, OTA, USB disk, WebUI. Usual multi-boot answer. | https://bmorcelli.github.io/Launcher/ · https://github.com/bmorcelli/Launcher |
| loznoc dual-boot | CC1101, used on Plus the same way | 3 named slots, themes, PIN, Wi-Fi portal. Always returns home. | https://loznoc.github.io/dualboot/ · https://github.com/loznoc/dualboot |

Flashing a second launcher replaces the first. Slot apps on the SD card stay.

## Apps

| Firmware | CC1101 | Plus | Need besides the .bin | Get it |
| --- | --- | --- | --- | --- |
| Bruce | Yes | Yes, Plus asset if the release has one | FAT32 card if you want captures kept | https://bruce.computer/ · https://github.com/BruceDevices/firmware/releases |
| Willy V3 | Yes | Yes, separate Plus build, nRF24 only there | Card optional | https://github.com/h-RAT/Willy_Firmware_V3_T-Embed_CC1101 |
| Flipper-style port (Sor3nt) | Yes | Same T-Embed target | **sdcard pack unpacked**. The .bin alone boots an empty UI. | Project releases. Search Sor3nt ESP32 Flipper port. File has been shipped as `furi_esp32.bin`. |
| CapibaraZero | Yes, from 0.5.1 | Same family; confirm the asset name | Their flash layout. Repo has been archived; 0.5.2 is the last tagged line. | https://github.com/CapibaraZero/fw/releases · https://capibarazero.com/docs/esp32_s3/boards/LilyGo_T_Embed_CC1101/ |
| ESP32 Bit Pirate | Yes | Yes, separate manifest | Web flasher picks the board | https://geo-tp.github.io/ESP32-Bit-Pirate/boards/t-embed-cc1101/ |
| LilyGO factory demo | Yes | Yes | Nothing | https://github.com/Xinyuan-LilyGO/T-Embed-CC1101 |

Capibara and Bit Pirate go in a launcher slot the same way Bruce does, if the image fits (loznoc slots are about 4.5 MB). If it does not fit, it is a single-firmware flash, not a slot.

Marauder-style and other ESP32-S3 images only work if that project ships a T-Embed target. A generic CYD or M5 binary will not drive this screen or the CC1101.

## A sensible set

| Slot | Put this here |
| --- | --- |
| 1 | Bruce, current stable |
| 2 | Flipper port, with the sdcard pack on the card |
| 3 | Willy Plus build, or Bit Pirate, or empty |

Launcher is not a slot. It owns boot.

## What is not a firmware for this board

- Meshtastic, MeshCore, anything SX1262 / LoRa. The radio is a CC1101.
- Flipper Zero official firmware. Different CPU. The Sor3nt port is the thing that runs here.
- A “preflashed” image from a marketplace seller. Flash from the links above.
