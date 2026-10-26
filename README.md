# T-Embed CC1101 / Plus — firmware guide

[![License](https://img.shields.io/badge/license-MIT-blue)](LICENSE) 
[![Live site](https://img.shields.io/badge/live-iinze0.github.io-black)](https://iinze0.github.io/)

Install, multi-boot, antennas, and writing your own firmware for the **LilyGO T-Embed CC1101** and **T-Embed CC1101 Plus**.

- **T-Embed CC1101** — ESP32-S3 + CC1101 + PN532 (no onboard nRF24)
- **T-Embed CC1101 Plus** — same board + onboard nRF24L01

**Live site:** [iinze0.github.io](https://iinze0.github.io/) → [tembed/](https://iinze0.github.io/tembed/)

| Page | What it is |
| --- | --- |
| [Install](https://iinze0.github.io/install.html) | Web flashers (Chrome/Edge + data cable) |
| [Remote](https://iinze0.github.io/remote.html) | Screen mirror + control for loznoc, bmorcelli, Bruce |
| [Guide](https://iinze0.github.io/guide.html) | Full index |
| [Software extras](https://iinze0.github.io/14-software-extras.html) | Themes, packs, collections |
| [Finding features](https://iinze0.github.io/15-finding-features.html) | Menu maps |

> **[LEGAL.md](LEGAL.md)** — read before the first transmit. Own hardware only. Unauthorised access is a crime almost everywhere (Norway: straffeloven §§ 201–205).

## Quick start (60 seconds)

1. Charge the board. Use a **USB-C data cable** (not charge-only).
2. Format a microSD to **FAT32**, 8–32 GB.
3. Desktop Chrome or Edge.
4. Flash **one** launcher:
   - [loznoc dual-boot](https://loznoc.github.io/dualboot/) — 3 slots, themes, best remote
   - [bmorcelli Launcher](https://bmorcelli.github.io/Launcher/) — catalog + OTA
5. Copy app `.bin` files to the card (or pull from the launcher).
6. On the device: **Install → pick file → pick slot → name it**.
7. Reboot returns to the launcher.

## How multi-firmware works

The ESP32-S3 has 16 MB flash. A launcher is flashed once and owns boot. Apps live in flash slots; their files live on the microSD. Normal reset returns to the launcher.

| Launcher | Best for | Slots | Install from |
| --- | --- | --- | --- |
| [bmorcelli/Launcher](https://github.com/bmorcelli/Launcher) | Catalog, OTA, many boards | Several | Online catalog, SD, WebUI |
| [loznoc/dualboot](https://github.com/loznoc/dualboot) | T-Embed UI, themes, always home | 3 | SD or Wi-Fi portal |

Flash only one launcher. The second erase replaces the first. App `.bin` files on the card survive.

## Pick a path

| Goal | Start here |
| --- | --- |
| Flash + remote from phone | [Live site](https://iinze0.github.io/) |
| Short version of everything | [Need to know](docs/13-need-to-know.md) |
| Full setup order | [From this repo](docs/00-from-this-repo.md) |
| Write your own app | [Own firmware](docs/12-own-firmware.md) · [starter](examples/hello) |
| All firmwares | [Firmware index](docs/09-firmware-index.md) |
| Buy the board | [Buy](docs/08-buy.md) |
| Antennas by band | [Antennas](docs/11-antennas.md) |
| Frequencies by region | [Frequencies](docs/16-frequencies.md) |
| SD card / extras | [Extras](docs/10-extras.md) |
| Themes & packs | [Software extras](docs/14-software-extras.md) |
| Menu maps | [Finding features](docs/15-finding-features.md) |
| Hardware differences | [Hardware](docs/01-hardware.md) |
| Troubleshooting | [Troubleshooting](docs/06-troubleshooting.md) |
| Legal | [LEGAL.md](LEGAL.md) |

## Official sources

- Hardware: [Xinyuan-LilyGO/T-Embed-CC1101](https://github.com/Xinyuan-LilyGO/T-Embed-CC1101)
- Buy: [lilygo.cc Plus](https://lilygo.cc/products/t-embed-cc1101-plus)
- Bruce: [BruceDevices/firmware](https://github.com/BruceDevices/firmware) · [bruce.computer](https://bruce.computer/)
- bmorcelli Launcher: [github.com/bmorcelli/Launcher](https://github.com/bmorcelli/Launcher)
- loznoc dual-boot: [github.com/loznoc/dualboot](https://github.com/loznoc/dualboot)
- Flipper-style port: Sor3nt ESP32 port (needs matching `sdcard` pack)
- Willy V3: [h-RAT/Willy_Firmware_V3_T-Embed_CC1101](https://github.com/h-RAT/Willy_Firmware_V3_T-Embed_CC1101)

Firmware versions move. Trust the project’s release page over any number in a guide.
