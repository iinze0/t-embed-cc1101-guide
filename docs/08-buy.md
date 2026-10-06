# What to buy, and where it is cheapest

Prices below were checked 6 October 2026. They move. The shop name matters more than the number: buy the board from LilyGO, not a random store relisting it.

No affiliate code is baked in. This account did not provide one. Every AliExpress link is the clean item URL. If you have an AliExpress portal or Admitad code, append your tracking to these same URLs. Do not swap in a different item id.

## Best thing to get

**T-Embed CC1101 Plus, external-antenna version (K268-01), transparent or black.**

Plus is the original board plus an onboard nRF24. Firmware that cares (Bruce, Willy, Bit Pirate) only exposes that radio on the Plus build. The original CC1101 is fine if you already own it and do not care about nRF24. Do not buy a plain T-Embed with no CC1101.

External antenna (K268-01) is the one to order if you do not already have the board. You can change whips without opening the shell. Internal (K268) is smaller in a pocket and a bit cheaper, and LilyGO tells you not to crack that case open later — IR and the flex are easy to kill. If you already have an internal unit, buy their shell kit instead of a second board.

For Norway, order the 868 MHz Sub-GHz whip, not 915. A 433 MHz whip only if you actually use 433.92. Wi-Fi/BLE and nRF24 are 2.4 GHz and are not the CC1101 antenna.

## Board

| Where | What | Price seen | Why this one |
| --- | --- | --- | --- |
| [lilygo.cc Plus](https://lilygo.cc/products/t-embed-cc1101-plus) | Official, internal and external | From about $54.64 before shipping | Lowest board price. DHL or FedEx 7–10 days, standard 10–25. They do not collect Norwegian VAT. Expect VOEC / fortolling on the way in. Overseas warehouse (DE/US/CA) is faster when it is in stock. |
| [AliExpress, LilyGO official store, item 1005007967599411](https://www.aliexpress.com/item/1005007967599411.html) | Same board, variant picker says T-Embed or T-Embed PLUS | About €72 with EU VAT on the listing checked; Norway checkout can differ | Usually the easiest landed price. Seller must be **lilygo Official Store**. Pick PLUS, then external antenna if the variant list has it. |
| Anyone else on AliExpress (JY TEC, Cricket Electronics, “K268” at $105) | Same photo, worse price | $90–105 | Skip. Same factory board, extra margin, slower argument if it arrives dead. |

Collection page if you want the old CC1101 next to Plus: [lilygo.cc/collections/t-embed-series](https://lilygo.cc/collections/t-embed-series).

Norwegian shops (Chip Depot in Switzerland was CHF 79.80 for the external Plus) are for when you want it this week and will pay for that. AliExpress official or lilygo.cc still wins on price if you can wait.

## Antennas and shell

| What | Where | Price seen | Note |
| --- | --- | --- | --- |
| External shell + antenna kit, for an internal-antenna board | [lilygo.cc shell](https://lilygo.cc/products/t-embed-series-shell) and [AliExpress item 1005012301045696](https://www.aliexpress.com/item/1005012301045696.html) | About $11 / ~54 PLN on the official store listing | LilyGO’s own upgrade. Transparent or black. This is the supported way. A random SMA drilled into the stock shell is how the IR window dies. |
| 868 MHz SMA whip | The kit above, or any 868 MHz SMA-male stub from a radio shop | Kit is the sane default | Norway / EEA band. A 915 MHz whip is the wrong length here. |
| 433 MHz SMA whip | Same shops, separate antenna | Cheap | Only if you use 433.92. One whip cannot be both. |
| 2.4 GHz stub | Only if that connector is the nRF24 / Wi-Fi external port on your version | Cheap | Do not screw a 2.4 GHz whip onto the CC1101 jack. |

LilyGO’s own upgrade video is on their channel; the shell product is the one they point at. NFC is a coil on the board, not the SMA jack. Changing the Sub-GHz whip does not move NFC.

## Small stuff you actually need

| Thing | Where it is cheapest | Note |
| --- | --- | --- |
| microSD, 16 or 32 GB | Clas Ohlson, Elkjøp, any Norwegian shop | Must end up FAT32. A card from AliExpress saves almost nothing and fails more often. |
| USB-C data cable | One you already know works with a phone for file transfer | Charge-only leads are the usual “no serial port”. |
| Spare 1300 mAh pack | Only if the stock one is swollen | Same connector as the board. Do not raise charge current past ~600 mA. |

Firmware is free. Do not pay a shop for a “preflashed Bruce” unit. Flash it yourself from [the index](09-firmware-index.md).

## Order that makes sense

1. Plus, external antenna, from lilygo.cc if the shipped total to Norway beats AliExpress after VAT, otherwise AliExpress official store.
2. 868 MHz whip if the box did not include one you trust.
3. 16 GB card locally.
4. Shell kit only if the board you already have is the internal-antenna version.
