# Hardware: CC1101 vs CC1101 Plus

Both boards are the same idea: an ESP32-S3 handheld with a colour screen, a rotary encoder, a battery, and radios. Flash size and display match. The firmware target does not.

## Shared

| Part | Both boards |
| --- | --- |
| MCU | ESP32-S3, dual-core, Wi-Fi + BLE 5 |
| Flash / PSRAM | 16 MB / 8 MB |
| Display | 1.9 inch ST7789, 170×320 |
| Controls | Rotary encoder + side button |
| Sub-GHz | CC1101, bands roughly 300–348, 387–464, 779–928 MHz |
| NFC | PN532 at 13.56 MHz (ISO14443). Not ISO15693. |
| IR | Transmit and receive |
| Storage | microSD (SPI, CS on GPIO 13) |
| Audio | Speaker + microphone |
| Power | 3.7 V pack, about 1300 mAh, BQ25896 charger + fuel gauge |
| LED | WS2812 |
| Expansion | Qwiic-style ports |

CC1101 band is selected in software with `SW0` / `SW1` (GPIOs 48 and 47 on the stock LilyGO map): 315, 434, or 868/915. The chip can tune all of those. Your regulator cannot. Set the frequency to a band that is legal where you are standing, and stay inside that band's power and duty-cycle limits.

| Where you are | Use | Leave alone |
| --- | --- | --- |
| Europe, UK, Norway, EEA | 433.92 or 868 MHz | 915 MHz |
| USA, Canada | 915 MHz, and 433 only if the part allows it | 868 as a default |
| Australia, New Zealand | 915 MHz plan | Assuming EU 868 is fine |

LilyGO's own note on charge current: keep it at or under about half the pack capacity (they call out 600 mA as the ceiling for this pack).

## The actual difference

| | T-Embed CC1101 | T-Embed CC1101 Plus |
| --- | --- | --- |
| Onboard nRF24L01 (2.4 GHz) | No | Yes |
| nRF24 via the expansion header | Yes, if you wire a module | Already fitted; header pins are shared with that radio |
| Firmware label to pick | `t-embed-cc1101` / "CC1101" | `t-embed-cc1101-plus` / "Plus" when the project ships one |

Plus is not a faster CC1101. It is the same Sub-GHz radio plus a 2.4 GHz nRF24. Bruce, Willy, and Bit Pirate only expose nRF24 menus when that radio is actually there and the build was compiled for it.

Pin maps are **not** identical. Bruce's board headers put nRF24 CE/CS on different GPIOs for the Plus build than for an expansion module on the original. Flashing a Plus binary on a non-Plus (or the other way around) often boots, then Sub-GHz or nRF24 silently does nothing. If a project only publishes one T-Embed CC1101 binary, that is usually the one both boards run, and nRF24 is a Plus extra inside that build — read that project's release notes before assuming.

## How to tell the boards apart

- Product print / seller listing: "Plus" vs plain CC1101.
- Plus has the nRF24 populated on the RF area. Original does not.
- Antenna version is a separate choice (internal PCB antenna vs external SMA). Both original and Plus have been sold both ways. External is the one you want if you swap antennas; internal is cleaner in a pocket.
- A plain T-Embed (no CC1101 at all) is a third board. Do not flash the CC1101 target onto it and expect a radio.

## Antennas

Match the antenna to the band you actually use.

- Sub-GHz: 868 MHz whip on the European plan, 915 MHz whip on the US / AU / NZ plan, 433 MHz only if you stay on 433.92. A whip for the wrong band is just a bad antenna.
- nRF24 and Wi-Fi/BLE are both 2.4 GHz, but they are different radios with different connectors. Do not tie them to one antenna.
- The onboard Wi-Fi antenna (or the 2.4 GHz external, if that is the version you bought) is not the CC1101 antenna.

Swapping to a matched external antenna is normal. Amplifiers and out-of-band use are how people get in trouble with the local regulator (FCC, Ofcom, NKOM, BNetzA, ACMA, and the rest). This guide does not cover that.

## What a firmware can and cannot drive

| Interface | Original | Plus |
| --- | --- | --- |
| CC1101 Sub-GHz | Yes | Yes |
| PN532 NFC | Yes | Yes |
| IR | Yes | Yes |
| Wi-Fi / BLE | Yes | Yes |
| nRF24 | Only with an add-on module and a build that knows the pins | Yes, on the Plus build |
| LoRa / SX1262 / Meshtastic | No | No |

The CC1101 is a transceiver, not a LoRa radio. Meshtastic firmware does not belong on this board.
