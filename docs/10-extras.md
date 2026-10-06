# SD card and everything else

The box is the board, the shell, the battery, and a leaflet. No card, and the cable in the bag is often charge-only. Prices checked 6 October 2026.

Same affiliate rule as the board page: links are clean. Append your own AliExpress portal tag if you have one. Do not change the item id.

## Buy this

| Thing | Get | Skip | Where |
| --- | --- | --- | --- |
| microSD | 16 or 32 GB, Class 10 / U1 / A1, SanDisk, Samsung, or Kingston | No-name AliExpress packs, 64 GB and up, "Endurance" camera cards | Norway. See below. |
| USB-C cable | A cable you have already used to copy files to a phone | The short lead in the LilyGO bag, until you have proved it enumerates a serial port | One you own, or Kjell / Clas Ohlson / Elkjøp |
| 868 MHz SMA whip | Only if the external-antenna box did not include one | 915 MHz whip | Kit on the [buy page](08-buy.md), or a radio shop |
| Shell kit | Only if your board is the internal-antenna version | Drilling the stock shell | [AliExpress 1005012301045696](https://www.aliexpress.com/item/1005012301045696.html) · [lilygo.cc shell](https://lilygo.cc/products/t-embed-series-shell) |

## SD card

The slot is SPI, not a camera bus. A 170 MB/s SanDisk Extreme does nothing here except cost more. Clas Ohlson had that Extreme GO line at 429.90 NOK. Wrong card for this board.

What works:

- 16 GB or 32 GB. microSDHC, so it can be FAT32 without a fight.
- Brand: SanDisk, Samsung EVO, Kingston Canvas Select. A no-name card is the usual "card not detected" after a week.
- Format FAT32, allocation 32 KB, before it goes in the slot. exFAT mounts on the phone and not on the ESP32.
- 8 GB is enough for Bruce captures and a few `.bin` files. 32 GB is the ceiling that is still painless. 64 GB and above ship as exFAT and need a PC tool (Rufus, guiformat, `mkfs.vfat`). SPI reads get slower as the card gets bigger, for no benefit.

Norway, cheap end, from price-comparison listings around this date: Intenso or PNY 16–32 GB Class 10 about 90–130 NOK. Verbatim 32 GB around 99 NOK. Buy that at Komplett, Elkjøp, Power, or Clas Ohlson and you have it the same day. AliExpress saves almost nothing once postage is in, and a fake SanDisk is common there.

Two cards is the only extra worth having: one in the device, one on the desk with the firmware `.bin` files and the Flipper-port sdcard pack already unpacked. Label them.

A USB card reader (any UHS-I reader, about 80–150 NOK locally) is the fallback when the launcher's USB disk mode sulks. Not required if USB mode works.

## Cable and power

USB-C data, not charge-only. Test: plug it into a phone and see if the PC mounts storage. If the phone only charges, the lead is useless for flashing.

The pack in the unit is a 3.7 V 1300 mAh Li-Po. LilyGO's own note is to keep charge current at or under about 600 mA. A random "2000 mAh upgrade" from AliExpress is a swollen-cell lottery and often the wrong connector. Replace like for like only if the stock pack is puffed. Do not charge it loose on a hobby charger at 1 A.

## Nice, not needed

| Extra | Why | Where |
| --- | --- | --- |
| NTAG213 / NTAG215 cards and stickers | Your own NFC targets. PN532 is 13.56 MHz ISO14443. It will not read 125 kHz or ISO15693. | Kjell, AliExpress, a locksmith supplier. Buy blank tags. Do not buy a "cloned badge" listing. |
| Qwiic / STEMMA QT cable | The two expansion ports. Useful later, useless on day one. | Adafruit, LilyGO, AliExpress |
| Lanyard | The shell has a hole. Cheap, and the encoder is happier when the board is not dropped. | Anywhere |
| Spare 868 and 433 whips | One whip is one band. | Same place as the shell kit |

## Do not buy

- A second board "because it comes with Bruce". Flash takes ten minutes and the shop image is old.
- An amplifier, a "10 W 433" module, or a jammer accessory. That is how a lab toy becomes an NKOM case.
- A 915 MHz whip for use in Norway.
- A plain T-Embed (no CC1101) as a spare. Different board.
- Screen protectors cut for a phone. The window is a small clear panel; a film usually just traps dust in the shell.

Board and antenna sources stay on the [buy page](08-buy.md).
