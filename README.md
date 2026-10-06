# T-Embed CC1101 and CC1101 Plus — firmware guide

Install, multi-boot, buying, antennas, and writing your own app for both LilyGO boards:

- **T-Embed CC1101** (CC1101 + PN532, no onboard nRF24)
- **T-Embed CC1101 Plus** (same board, plus onboard nRF24L01)

Start here: [everything worth knowing](docs/13-need-to-know.md). Then [do the setup](docs/00-from-this-repo.md). Binaries stay on the project that builds them. This repo will not host attack steps.

**[LEGAL.md](LEGAL.md) — read it before the first transmit.** A warning banner does not make someone else's fob, badge, car, gate, or Wi-Fi legal. In Norway that is straffeloven §§ 201–205, and it has already meant prison for unauthorised access alone. The same acts are offences almost everywhere else.

## Pick a path

| Goal | Do this |
| --- | --- |
| The short version of all of it | [Need to know](docs/13-need-to-know.md) |
| Whole setup, in order | [From this repo](docs/00-from-this-repo.md) |
| Write your own app and put it in a slot | [Own firmware](docs/12-own-firmware.md) · [starter](examples/hello) |
| Every firmware and both multi-boot options | [Firmware index](docs/09-firmware-index.md) |
| Board, shell, where it is cheapest | [Buy](docs/08-buy.md) |
| Sub-GHz, Wi-Fi, Bluetooth, and nRF24 whips, each in three sizes | [Antennas](docs/11-antennas.md) |
| SD card, cable, battery, tags, what to skip | [Extras](docs/10-extras.md) |
| What the menus are, and what is a crime | [Capabilities and limits](docs/07-capabilities-and-limits.md) |
| One firmware, simplest | [Single firmware](docs/03-single-firmware.md) |
| Bruce + Flipper port + anything else, switch without a PC | [Multi-firmware](docs/04-multi-firmware.md) |
| Which board you actually have | [Hardware](docs/01-hardware.md) |
| SD card, USB disk mode, file layout | [SD card](docs/02-sd-card.md) |
| Update launcher or a slot without wiping the other | [Updates](docs/05-updates.md) |
| Black screen, no port, settings vanish, wrong radio | [Troubleshooting](docs/06-troubleshooting.md) |
| Penalties | [LEGAL.md](LEGAL.md) |

## What “multiple firmware” means here

The ESP32-S3 has 16 MB of flash. A launcher is flashed once and owns boot. Apps live in flash slots (and their files live on the microSD). On a normal reset you land back in the launcher, pick a slot, and that app runs until you reboot.

Two launchers are worth knowing:

| Launcher | Best for | Slots | Install apps from |
| --- | --- | --- | --- |
| [bmorcelli/Launcher](https://github.com/bmorcelli/Launcher) | Catalog, OTA, lots of boards already supported | Several, device dependent | Online catalog, SD, WebUI |
| [loznoc/dualboot](https://github.com/loznoc/dualboot) | T-Embed-first UI, themes, always returns home | 3 | SD card or its Wi-Fi portal |

You run one launcher, not both. Flashing the other replaces it. App `.bin` files on the SD card survive if you do not format the card.

Your own PlatformIO app goes in a slot the same way. Use `firmware.bin`, not the factory image. [Own firmware](docs/12-own-firmware.md).

## 60-second version

1. Charge the board. Use a USB-C **data** cable, not a charge-only lead.
2. Format a microSD to **FAT32**. 8–32 GB is the painless size.
3. On a desktop, open Chrome or Edge.
4. Flash a launcher from its web page (links in [multi-firmware](docs/04-multi-firmware.md)), or flash Bruce alone from [bruce.computer](https://bruce.computer/) / the Bruce releases.
5. Copy the app `.bin` files onto the card (or pull them from the launcher catalog).
6. On the device: Install → pick the file → pick a slot → name it.
7. Reboot to get back to the launcher. That is the whole trick.

## Official sources

- Hardware and examples: [Xinyuan-LilyGO/T-Embed-CC1101](https://github.com/Xinyuan-LilyGO/T-Embed-CC1101)
- Buy: [lilygo.cc Plus](https://lilygo.cc/products/t-embed-cc1101-plus) · [AliExpress official item](https://www.aliexpress.com/item/1005007967599411.html)
- Antennas: [Sub-GHz, Wi-Fi, Bluetooth, nRF24](docs/11-antennas.md)
- Extras: [SD card and the rest](docs/10-extras.md)
- Bruce: [BruceDevices/firmware](https://github.com/BruceDevices/firmware) · web flasher on [bruce.computer](https://bruce.computer/)
- Launcher (bmorcelli): [github.com/bmorcelli/Launcher](https://github.com/bmorcelli/Launcher) · [web tools](https://bmorcelli.github.io/Launcher/)
- Dual-boot launcher (loznoc): [github.com/loznoc/dualboot](https://github.com/loznoc/dualboot) · [web flasher](https://loznoc.github.io/dualboot/)
- Flipper-style port: Sor3nt ESP32 port (needs the matching `sdcard` asset pack, not just the `.bin`)
- Willy Firmware V3: [h-RAT/Willy_Firmware_V3_T-Embed_CC1101](https://github.com/h-RAT/Willy_Firmware_V3_T-Embed_CC1101) — explicit CC1101 and Plus builds

Firmware versions move. Trust the project’s own release page over any version number written in a guide.
