# What to buy, and where it is cheapest

Prices below were checked 6 October 2026. They move with currency, VAT, and shipping. The shop name matters more than the sticker: buy the board from LilyGO, not a random store using their photo.

No affiliate code is baked in. Every AliExpress link is the clean item URL. If you have an AliExpress portal or Admitad code, append your tracking to these same URLs. Do not swap the item id.

## Best thing to get

**T-Embed CC1101 Plus, external-antenna version (K268-01), transparent or black.**

Plus is the original board plus an onboard nRF24. Firmware that cares (Bruce, Willy, Bit Pirate) only exposes that radio on the Plus build. The original CC1101 is fine if you already own it and do not care about nRF24. Do not buy a plain T-Embed with no CC1101.

External antenna (K268-01) is the one to order if you do not already have the board. You can change whips without opening the shell. Internal (K268) is smaller in a pocket and a bit cheaper, and LilyGO tells you not to crack that case open later — IR and the flex are easy to kill. If you already have an internal unit, buy their shell kit instead of a second board.

Match the Sub-GHz whip to the legal ISM plan where you are. One whip is one band. Wi-Fi, BLE, and nRF24 are 2.4 GHz and are not the CC1101 antenna.

| Region | Sub-GHz whip to order | Do not order |
| --- | --- | --- |
| Europe, UK, Norway, most of Africa and Asia on the EU plan | 868 MHz. 433.92 MHz only as a second whip if you use that band. | 915 MHz as your only antenna |
| USA, Canada, Australia, New Zealand, much of South America | 915 MHz. 433 MHz only if you actually use it under local rules. | 868 MHz as your only antenna |
| Japan | Check the local Sub-GHz plan before you buy. 915 is not automatic. | A random "LoRa 915" whip assumed to be legal |

315 MHz shows up in the CC1101 table and on some older remotes. It is not a general-purpose band. Do not buy a 315 whip unless you already know you need it.

## Board

| Where | What | Price seen | Why this one |
| --- | --- | --- | --- |
| [lilygo.cc Plus](https://lilygo.cc/products/t-embed-cc1101-plus) | Official, internal and external | From about $54.64 before shipping | Lowest board price worldwide. DHL or FedEx 7–10 days, standard 10–25. Overseas warehouse in Germany, the US, or Canada is faster when that warehouse has stock. They charge product + shipping; import VAT, GST, or duty is on you unless checkout says otherwise. |
| [AliExpress, LilyGO official store, item 1005007967599411](https://www.aliexpress.com/item/1005007967599411.html) | Same board. Variant picker says T-Embed or T-Embed PLUS | About €72 with EU VAT on the listing checked. US, UK, AU, and NO checkouts differ. | Often the easiest landed price, because AliExpress collects VAT/GST in a lot of countries at checkout. Seller must be **lilygo Official Store**. Pick PLUS, then external antenna if the variant list has it. |
| Local reseller (DigiKey-style makers, regional LilyGO dealers) | Same board, shelf stock | Usually $70–100 equivalent | Pay this when you want it this week. Chip Depot in Switzerland was CHF 79.80 for the external Plus. Fine for speed, bad as the default. |
| Anyone else on AliExpress (JY TEC, Cricket Electronics, "K268" at $105) | Same photo, worse price | $90–105 | Skip. Same factory board, extra margin, slower argument if it arrives dead. |

Collection page if you want the old CC1101 next to Plus: [lilygo.cc/collections/t-embed-series](https://lilygo.cc/collections/t-embed-series).

Landed cost is board + shipping + tax. In the EU and UK, AliExpress usually shows VAT in the price. In the US under the de minimis line, lilygo.cc plus cheap shipping often wins. In countries that tax all imports (Norway VOEC, Australia GST, Switzerland), compare the AliExpress tax-included total with lilygo.cc plus the post office bill.

## Antennas and shell

| What | Where | Price seen | Note |
| --- | --- | --- | --- |
| External shell + antenna kit, for an internal-antenna board | [lilygo.cc shell](https://lilygo.cc/products/t-embed-series-shell) and [AliExpress item 1005012301045696](https://www.aliexpress.com/item/1005012301045696.html) | About $11 | LilyGO's own upgrade. Transparent or black. This is the supported way. A random SMA drilled into the stock shell is how the IR window dies. |
| 868 MHz SMA-male whip | The kit, or any radio shop | Cheap | Europe and anyone on the 868 plan. |
| 915 MHz SMA-male whip | Same | Cheap | US, Canada, Australia, New Zealand. |
| 433 MHz SMA-male whip | Same, separate antenna | Cheap | Only if you use 433.92. One whip cannot be both. |
| 2.4 GHz stub | Only if that connector is the nRF24 or Wi-Fi external port on your version | Cheap | Do not screw a 2.4 GHz whip onto the CC1101 jack. |

LilyGO's upgrade video is on their channel; the shell product is the one they point at. NFC is a coil on the board, not the SMA jack. Changing the Sub-GHz whip does not move NFC.

## Small stuff

Card, cable, battery, tags: [extras](10-extras.md).

Firmware is free. Do not pay a shop for a "preflashed Bruce" unit. Flash it yourself from [the index](09-firmware-index.md).

## Order that makes sense

1. Plus, external antenna, from whichever of lilygo.cc or the AliExpress official store is cheaper after shipping and tax to your country.
2. A whip for your region's Sub-GHz plan, if the box did not include one you trust.
3. A 16 or 32 GB card from a local shop.
4. Shell kit only if the board you already have is the internal-antenna version.
