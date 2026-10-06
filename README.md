# T-Embed CC1101 and CC1101 Plus — firmware guide

Practical install, multi-firmware, and update notes for both LilyGO boards:

- **T-Embed CC1101** (original, CC1101 + PN532, no onboard nRF24)
- **T-Embed CC1101 Plus** (same board family, plus onboard nRF24L01)

This repo does not ship firmware binaries. It points at the official flashers and explains how the pieces fit together so you are not reflashing from scratch every time you want a different app.

Use this only on hardware you own, on systems you are allowed to test, and inside the radio rules where you are. In Norway / the EEA that means sticking to legal ISM use (commonly 433.92 MHz and 868 MHz for Sub-GHz, 13.56 MHz NFC on your own tags, IR on your own remotes). Do not jam, do not touch networks or tags you do not own.

## Pick a path

| Goal | Do this |
| --- | --- |
| One firmware, simplest | [Single firmware](docs/03-single-firmware.md) |
| Bruce + Flipper port + anything else, switch without a PC | [Multi-firmware](docs/04-multi-firmware.md) |
| Which board you actually have | [Hardware](docs/01-hardware.md) |
| SD card, USB disk mode, file layout | [SD card](docs/02-sd-card.md) |
| Update launcher or a slot without wiping the other | [Updates](docs/05-updates.md) |
| Black screen, no port, settings vanish, wrong radio | [Troubleshooting](docs/06-troubleshooting.md) |

## What “multiple firmware” means here

The ESP32-S3 has 16 MB of flash. A launcher is flashed once and owns boot. Apps live in flash slots (and their files live on the microSD). On a normal reset you land back in the launcher, pick a slot, and that app runs until you reboot.

Two launchers are worth knowing:

| Launcher | Best for | Slots | Install apps from |
| --- | --- | --- | --- |
| [bmorcelli/Launcher](https://github.com/bmorcelli/Launcher) | Catalog, OTA, lots of boards already supported | Several, device dependent | Online catalog, SD, WebUI |
| [loznoc/dualboot](https://github.com/loznoc/dualboot) | T-Embed-first UI, themes, always returns home | 3 | SD card or its Wi-Fi portal |

You run one launcher, not both. Flashing the other replaces it. App `.bin` files on the SD card survive if you do not format the card.

## 60-second version

1. Charge the board. Use a USB-C **data** cable, not a charge-only lead.
2. Format a microSD to **FAT32**. 8–32 GB is the painless size.
3. On a desktop, open Chrome or Edge.
4. Flash a launcher from its web page (links in [multi-firmware](docs/04-multi-firmware.md)), or flash Bruce alone from [bruce.computer](https://bruce.computer/) / the Bruce releases.
5. Copy the app `.bin` files onto the card (or pull them from the launcher catalog).
6. On the device: Install → pick the file → pick a slot → name it.
7. Reboot to get back to the launcher. That is the whole trick.

## Official sources

- Hardware: [Xinyuan-LilyGO/T-Embed-CC1101](https://github.com/Xinyuan-LilyGO/T-Embed-CC1101)
- Bruce: [BruceDevices/firmware](https://github.com/BruceDevices/firmware) · web flasher on [bruce.computer](https://bruce.computer/)
- Launcher (bmorcelli): [github.com/bmorcelli/Launcher](https://github.com/bmorcelli/Launcher) · [web tools](https://bmorcelli.github.io/Launcher/)
- Dual-boot launcher (loznoc): [github.com/loznoc/dualboot](https://github.com/loznoc/dualboot) · [web flasher](https://loznoc.github.io/dualboot/)
- Flipper-style port: Sor3nt ESP32 port (needs the matching `sdcard` asset pack, not just the `.bin`)
- Willy Firmware V3: [h-RAT/Willy_Firmware_V3_T-Embed_CC1101](https://github.com/h-RAT/Willy_Firmware_V3_T-Embed_CC1101) — explicit CC1101 and Plus builds

Firmware versions move. Trust the project’s own release page over any version number written in a guide.
