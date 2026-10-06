# Antennas, by radio and by size

Four radios, not one "2.4 GHz" bucket.

| Radio | Band | Jack |
| --- | --- | --- |
| CC1101 Sub-GHz | 433, 868, or 915 | Its own SMA. Swap the whip when you change band. |
| Wi-Fi | 2.4 GHz only. This ESP32-S3 has no 5 GHz. | The ESP32 antenna. |
| Bluetooth / BLE | 2.4 GHz, same chip as Wi-Fi | Same ESP32 antenna as Wi-Fi. One whip serves both. |
| nRF24 | 2.4 GHz, Plus only | Its own radio. Not the Wi-Fi whip, and not the CC1101 whip. |

The jack on the LilyGO external shell is **SMA female**. The whip must be **SMA male**. RP-SMA threads on and does not connect. IPEX / U.FL is inside the board; you only need a pigtail if you are not using LilyGO's shell.

A bigger antenna is better only if it is cut for that radio. A listing that says 12 dBi on a finger-length duck is marketing. No amplifiers.

| Size | Length | On this device |
| --- | --- | --- |
| Small | about 4–6 cm | Pocket. Worst range. Fine if the other end is in the same room. |
| Medium | about 10–12 cm | The one to buy for Sub-GHz. |
| Long | about 20–21 cm | Bench and outdoor. Snags a pocket and tips the board on a table. |

Shell, only if the board is the internal-antenna version: [lilygo.cc](https://lilygo.cc/products/t-embed-series-shell) · [AliExpress kit](https://www.aliexpress.com/item/1005012301045696.html). About $11. Some listings are the case only.

## Sub-GHz — CC1101

### 868 MHz — Europe, UK, EEA

| Size | Get this | Link |
| --- | --- | --- |
| Small | Short SMA-male stub | [868 variant, 4-pack](https://www.aliexpress.com/item/1005006673760959.html) |
| Medium | ~11 cm SMA male | [868 MHz SMA male](https://www.aliexpress.com/w/wholesale-868mhz-sma-male-antenna.html) |
| Long | 20 cm half-wave, SMA male | [MTools 20 cm 868](https://shop.mtoolstec.com/product/868mhz-20cm-whip-antenna) · [AliExpress 20 cm 868](https://www.aliexpress.com/w/wholesale-868mhz-20cm-sma-antenna.html) |

### 915 MHz — USA, Canada, Australia, New Zealand

| Size | Get this | Link |
| --- | --- | --- |
| Small | Short SMA-male stub | [915 variant, 4-pack](https://www.aliexpress.com/item/1005006673760959.html) |
| Medium | ~11 cm SMA male | [915 MHz SMA male](https://www.aliexpress.com/w/wholesale-915mhz-sma-male-antenna.html) |
| Long | 20 cm half-wave, SMA male | [MTools 20 cm 915](https://shop.mtoolstec.com/product/915mhz-20cm-whip-antenna) · [AliExpress 20 cm 915](https://www.aliexpress.com/w/wholesale-915mhz-20cm-sma-antenna.html) |

A whip sold as "868/915" is a compromise. If you only use one band, buy that band.

### 433.92 MHz — only if you use 433

A quarter wave at 433 is about 17 cm, so small is already a compromise.

| Size | Get this | Link |
| --- | --- | --- |
| Small | Short rubber SMA male | [433 variant](https://www.aliexpress.com/item/1005004730589896.html) |
| Medium | ~17 cm | [433 MHz SMA male](https://www.aliexpress.com/w/wholesale-433mhz-sma-male-antenna.html) |
| Long | ~21 cm | [433 MHz 21 cm SMA](https://www.aliexpress.com/w/wholesale-433mhz-21cm-sma-antenna.html) |

## Wi-Fi — ESP32-S3, 2.4 GHz

This is the Wi-Fi antenna. Quarter wave at 2.4 GHz is about 3 cm, so small is the correct length. There is no 5 GHz radio on this board, so a "dual-band Wi-Fi" whip does nothing extra.

| Size | Get this | Link |
| --- | --- | --- |
| Small | 3–5 cm Wi-Fi stub, SMA male | [2.4G Wi-Fi variant](https://www.aliexpress.com/item/1005004730589896.html) |
| Medium | ~10 cm, SMA male. Listing must say SMA male, not RP-SMA. | [Wi-Fi SMA male](https://www.aliexpress.com/item/1005005672147757.html) |
| Long | Magnetic-base Wi-Fi whip on a cable. Desk only. | [Wi-Fi SMA male with cable](https://www.aliexpress.com/w/wholesale-2.4ghz-wifi-sma-male-antenna.html) |

## Bluetooth — same ESP32 antenna as Wi-Fi

BLE 5 on this board does not have its own jack. The Bluetooth antenna is the Wi-Fi antenna. Buy one whip from the Wi-Fi table and both radios use it. A second "Bluetooth antenna" only makes sense if you have brought a second SMA out of the shell.

If you want the listing titled for Bluetooth anyway, same sizes, same connector:

| Size | Get this | Link |
| --- | --- | --- |
| Small | 3–5 cm BLE stub, SMA male | [Bluetooth 2.4 GHz SMA male](https://www.aliexpress.com/w/wholesale-bluetooth-antenna-sma-male.html) |
| Medium | ~10 cm SMA male | [BLE SMA male whip](https://www.aliexpress.com/w/wholesale-2.4ghz-bluetooth-sma-antenna.html) |
| Long | Cable whip, desk only | [Bluetooth antenna SMA male cable](https://www.aliexpress.com/w/wholesale-bluetooth-2.4ghz-sma-male-antenna.html) |

## nRF24 — Plus only, its own 2.4 GHz radio

Not Wi-Fi, not Bluetooth, not the CC1101. The Plus has an nRF24 on the board. If that path is still on a chip antenna, an external whip means a pigtail from its IPEX, not the ESP32 jack.

| Size | Get this | Link |
| --- | --- | --- |
| Small | 3–5 cm, the right length for 2.4 GHz | [nRF24 2.4 GHz SMA](https://www.aliexpress.com/w/wholesale-nrf24l01-antenna-sma.html) |
| Medium | ~10 cm SMA male | [2.4 GHz SMA male](https://www.aliexpress.com/item/1005005672147757.html) |
| Long | Cable, desk only | [2.4 GHz SMA male with cable](https://www.aliexpress.com/w/wholesale-2.4ghz-sma-male-antenna.html) |

## What not to click

- RP-SMA, unless you have checked the jack.
- A 5 GHz or "Wi-Fi 6E" whip. This board cannot use it.
- One whip for Sub-GHz and Wi-Fi.
- "12 dBi" panel antennas as a daily carry.
- Anything sold as a jammer antenna or a power amplifier.
