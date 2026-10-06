# Antennas, one link each

The shell kit is the case and the SMA hole. It is not the antenna you want long-term. Buy the shell only if your board is the internal-antenna version. If you already have the external version (K268-01), skip the shell and buy the whip for the band you use.

The jack on the LilyGO external shell is **SMA female**. The whip must be **SMA male**. RP-SMA (the connector on a lot of Wi-Fi routers, pin reversed) will thread on and not connect. IPEX / U.FL is the connector on the board inside the shell. You only need a pigtail if you are not using LilyGO's shell.

A "better" antenna here means a whip cut for one band, 50 ohm, SMA male. A longer matched whip beats the short stub in the kit. Listings that say 10 dBi or 12 dBi on a finger-length rubber duck are lying. Do not buy an amplifier.

One jack, one band. The CC1101 jack takes 433, 868, or 915, and you swap the whip when you change band. The 2.4 GHz jack, if your version has one, is Wi-Fi / BLE or the nRF24 path. Do not put a 2.4 GHz whip on the Sub-GHz jack.

## Shell, only if you need the hole

| What | Link |
| --- | --- |
| LilyGO shell, official | https://lilygo.cc/products/t-embed-series-shell |
| Same kit, AliExpress official store | https://www.aliexpress.com/item/1005012301045696.html |

About $11. Transparent or black. Case only on some listings — read the title. If it does not say antenna, it does not include one.

## Sub-GHz, CC1101 jack

Buy the one row that matches where you transmit. A second whip is for a second band, not a spare of the same one.

| Band | Where it is the right one | Link |
| --- | --- | --- |
| 868 MHz | Europe, UK, EEA | [4-pack, pick the 868 MHz variant](https://www.aliexpress.com/item/1005006673760959.html) |
| 915 MHz | USA, Canada, Australia, New Zealand | [Same listing, pick the 915 MHz variant](https://www.aliexpress.com/item/1005006673760959.html) |
| 433.92 MHz | Only if you actually use 433 | [Pick the 433 MHz variant](https://www.aliexpress.com/item/1005004730589896.html) |

Those are SMA-male whips sold for CC1101 / LoRa modules. About $2–8. Search fallback if a listing dies: [868 MHz SMA male](https://www.aliexpress.com/w/wholesale-868mhz-sma-male-antenna.html), [915 MHz SMA male](https://www.aliexpress.com/w/wholesale-915mhz-sma-male-antenna.html), [433 MHz SMA male](https://www.aliexpress.com/w/wholesale-433mhz-sma-male-antenna.html).

## 2.4 GHz, the other jack

Only if the board has a separate 2.4 GHz SMA. Wi-Fi, BLE, and nRF24 are all 2.4 GHz, but they are not the same connector as the CC1101.

| Band | Link |
| --- | --- |
| 2.4 GHz SMA male | [Pick the 2.4G variant](https://www.aliexpress.com/item/1005004730589896.html) |
| Search fallback | [2.4 GHz SMA male antenna](https://www.aliexpress.com/w/wholesale-2.4ghz-sma-male-antenna.html) |

## What not to click

- A whip labelled 868/915 as if one length covers both well. It is a compromise. Buy the band you use.
- RP-SMA, unless the listing is a pigtail you have checked against the jack.
- "12 dBi" panel antennas and magnetic car mounts. Too big for the shell, and the gain number is marketing.
- Anything sold as a jammer antenna or a power amplifier.
