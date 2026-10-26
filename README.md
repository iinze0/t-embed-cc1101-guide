# T-Embed CC1101 / Plus — firmware guide

The practical guide for the LilyGO **T-Embed CC1101** and **T-Embed CC1101 Plus**.  
Install, multi-boot, antennas, remote control, and writing your own firmware.

[![License](https://img.shields.io/badge/license-MIT-blue)](LICENSE) 
[![Live site](https://img.shields.io/badge/live-iinze0.github.io-black)](https://iinze0.github.io/)

> **Own hardware only.** Unauthorised access is illegal almost everywhere. Read [LEGAL.md](LEGAL.md) before the first transmit.

---

## Start here — full setup in order

Do these once. Everything else is optional after this.

1. **Read the rules** — [LEGAL.md](LEGAL.md). Own hardware only.
2. **Know your board** — Plus has the nRF24. External antenna is easier to swap. [Hardware](docs/01-hardware.md) · [Buy](docs/08-buy.md)
3. **Prepare the card** — FAT32, 8–32 GB. Insert before first launcher boot. [SD card](docs/02-sd-card.md)
4. **Flash one launcher** (not both):
   - [loznoc dual-boot](https://loznoc.github.io/dualboot/) — 3 slots, themes, best remote
   - [bmorcelli Launcher](https://bmorcelli.github.io/Launcher/) — catalog + OTA
5. **Put apps in slots** — copy `.bin` files to the card, then on the device: Install → file → slot → name.  
   Suggested: 1 Bruce, 2 Flipper port (needs sdcard pack), 3 spare. [Firmware index](docs/09-firmware-index.md)
6. **Set the band** — before any transmit. [Frequencies](docs/16-frequencies.md) · [Antennas](docs/11-antennas.md)
7. **Try the remote** — screen mirror and wheel control. [Remote](docs/remote.html) (or the live site)

Full written order: [docs/00-from-this-repo.md](docs/00-from-this-repo.md)

---

## Boards

| Board | Radios | Notes |
| --- | --- | --- |
| T-Embed CC1101 | ESP32-S3 + CC1101 + PN532 | No onboard nRF24 |
| T-Embed CC1101 Plus | Same + onboard nRF24L01 | nRF24 only on Plus builds |

## How multi-firmware works

The ESP32-S3 has 16 MB flash. A launcher is flashed once and owns boot. Apps live in flash slots; their files live on the microSD. Normal reset returns to the launcher.

| Launcher | Best for | Slots | Install from |
| --- | --- | --- | --- |
| [bmorcelli/Launcher](https://github.com/bmorcelli/Launcher) | Catalog, OTA, many boards | Several | Online catalog, SD, WebUI |
| [loznoc/dualboot](https://github.com/loznoc/dualboot) | T-Embed UI, themes, always home | 3 | SD or Wi-Fi portal |

Flash only one launcher. App `.bin` files on the card survive.

---

## All docs

| Goal | Page |
| --- | --- |
| Short version of everything | [Need to know](docs/13-need-to-know.md) |
| Full setup order | [From this repo](docs/00-from-this-repo.md) |
| What runs on the board | [Firmware index](docs/09-firmware-index.md) |
| Multi-boot detail | [Multi-firmware](docs/04-multi-firmware.md) |
| Single firmware | [Single firmware](docs/03-single-firmware.md) |
| Write your own app | [Own firmware](docs/12-own-firmware.md) · [starter](examples/hello) |
| Buy the board | [Buy](docs/08-buy.md) |
| Antennas | [Antennas](docs/11-antennas.md) |
| Frequencies by region | [Frequencies](docs/16-frequencies.md) |
| SD card and extras | [Extras](docs/10-extras.md) |
| Themes, packs, collections | [Software extras](docs/14-software-extras.md) |
| Menu maps | [Finding features](docs/15-finding-features.md) |
| Hardware differences | [Hardware](docs/01-hardware.md) |
| Updates | [Updates](docs/05-updates.md) |
| Troubleshooting | [Troubleshooting](docs/06-troubleshooting.md) |
| Legal (worldwide) | [LEGAL.md](LEGAL.md) |

---

## Official sources

- Hardware: [Xinyuan-LilyGO/T-Embed-CC1101](https://github.com/Xinyuan-LilyGO/T-Embed-CC1101)
- Buy: [lilygo.cc Plus](https://lilygo.cc/products/t-embed-cc1101-plus)
- Bruce: [BruceDevices/firmware](https://github.com/BruceDevices/firmware) · [bruce.computer](https://bruce.computer/)
- bmorcelli Launcher: [github.com/bmorcelli/Launcher](https://github.com/bmorcelli/Launcher)
- loznoc dual-boot: [github.com/loznoc/dualboot](https://github.com/loznoc/dualboot)
- Flipper-style port: Sor3nt ESP32 port (needs matching `sdcard` pack)
- Willy V3: [h-RAT/Willy_Firmware_V3_T-Embed_CC1101](https://github.com/h-RAT/Willy_Firmware_V3_T-Embed_CC1101)

Firmware versions move. Trust the project’s release page over any number in a guide.

**Live site:** https://iinze0.github.io/
