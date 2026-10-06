# Antennas, by band and by size

Pick the band first, then how big you want it. The shell kit is only the hole. These are the whips.

The jack on the LilyGO external shell is **SMA female**. The whip must be **SMA male**. RP-SMA threads on and does not connect. IPEX / U.FL is inside the board; you only need a pigtail if you are not using LilyGO's shell.

A bigger antenna is better only if it is cut for that band. A 20 cm whip on 868 or 915 is a real step up from the stub. A listing that says 12 dBi on a finger-length duck is marketing. No amplifiers.

One jack, one band. CC1101 takes 433, 868, or 915, and you swap the whip when you change band. The 2.4 GHz jack, if the board has one, is Wi-Fi / BLE or nRF24. Do not put a 2.4 GHz whip on the Sub-GHz jack.

| Size | Length | On this device |
| --- | --- | --- |
| Small | about 4–6 cm | Pocket. Worst range. Fine if the other end is in the same room. |
| Medium | about 10–12 cm | The one to buy. Fits a bag, close to a quarter wave at 868/915. |
| Long | about 20–21 cm | Bench and outdoor. Best of the three. Snags a pocket and tips the board on a table. |

Shell, only if the board is the internal-antenna version: [lilygo.cc](https://lilygo.cc/products/t-embed-series-shell) · [AliExpress kit](https://www.aliexpress.com/item/1005012301045696.html). About $11. Some listings are the case only.

## 868 MHz — Europe, UK, EEA

| Size | Get this | Link |
| --- | --- | --- |
| Small | Short SMA-male stub, same family as the kit whip | [868 variant, 4-pack](https://www.aliexpress.com/item/1005006673760959.html) |
| Medium | ~11 cm SMA male | [868 MHz SMA male, 10–12 cm](https://www.aliexpress.com/w/wholesale-868mhz-sma-male-antenna.html) |
| Long | 20 cm half-wave whip, SMA male | [MTools 20 cm 868](https://shop.mtoolstec.com/product/868mhz-20cm-whip-antenna) · [AliExpress 20 cm 868](https://www.aliexpress.com/w/wholesale-868mhz-20cm-sma-antenna.html) |

## 915 MHz — USA, Canada, Australia, New Zealand

| Size | Get this | Link |
| --- | --- | --- |
| Small | Short SMA-male stub | [915 variant, 4-pack](https://www.aliexpress.com/item/1005006673760959.html) |
| Medium | ~11 cm SMA male | [915 MHz SMA male](https://www.aliexpress.com/w/wholesale-915mhz-sma-male-antenna.html) |
| Long | 20 cm half-wave whip, SMA male | [MTools 20 cm 915](https://shop.mtoolstec.com/product/915mhz-20cm-whip-antenna) · [AliExpress 20 cm 915](https://www.aliexpress.com/w/wholesale-915mhz-20cm-sma-antenna.html) |

A whip sold as "868/915" is a compromise. If you only use one band, buy that band.

## 433.92 MHz — only if you use 433

A quarter wave at 433 is about 17 cm, so "small" is already a compromise.

| Size | Get this | Link |
| --- | --- | --- |
| Small | Short rubber SMA male. Pocket, poor match. | [433 variant](https://www.aliexpress.com/item/1005004730589896.html) |
| Medium | ~17 cm, the right everyday length | [433 MHz 17 cm SMA male](https://www.aliexpress.com/w/wholesale-433mhz-sma-male-antenna.html) |
| Long | ~21 cm whip | [433 MHz SMA male whip](https://www.aliexpress.com/w/wholesale-433mhz-21cm-sma-antenna.html) |

## 2.4 GHz — the other jack only

Quarter wave is about 3 cm, so small is actually the correct length. Longer is for a desk, not for gain.

| Size | Get this | Link |
| --- | --- | --- |
| Small | 3–5 cm stub, SMA male | [2.4G variant](https://www.aliexpress.com/item/1005004730589896.html) |
| Medium | ~10 cm SMA male. Confirm the listing says SMA male, not RP-SMA. | [2.4 GHz SMA male](https://www.aliexpress.com/item/1005005672147757.html) |
| Long | Magnetic-base whip on a cable. Desk only. The board does not want a cable in a pocket. | [2.4 GHz SMA male with cable](https://www.aliexpress.com/w/wholesale-2.4ghz-sma-male-antenna.html) |

## What not to click

- RP-SMA, unless you have checked the jack.
- "12 dBi" panel antennas and car mounts as a daily carry.
- One whip for every band.
- Anything sold as a jammer antenna or a power amplifier.
