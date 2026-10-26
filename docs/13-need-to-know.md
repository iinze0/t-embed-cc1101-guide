# Need to know

Short version of everything that matters on day one.

## The board

Plus is the original plus an nRF24. External antenna (K268-01) if you do not already own one. Internal only if you want it smaller and will not open the shell. A plain T-Embed has no CC1101. Details: [hardware](01-hardware.md). Where to buy: [buy](08-buy.md).

## Power

1300 mAh pack, charge current at or under about 600 mA. Click the encoder to wake. Hold it to power off on most builds. A charge-only USB-C cable is the usual reason the flasher sees no port.

## Card

FAT32, 16 or 32 GB, a real brand, bought locally. The slot is SPI. A fast camera card does nothing. Two cards: one in the device, one with your `.bin` files. [Extras](10-extras.md).

## Radios and antennas

CC1101 is Sub-GHz, not LoRa. Wi-Fi and Bluetooth share the ESP32 antenna. nRF24 is Plus-only and its own radio. SMA male into the shell's SMA female. RP-SMA does not connect. Band and size picks: [antennas](11-antennas.md). Regional bands: [frequencies](16-frequencies.md).

Set the band before you transmit. Match your country.

## Firmware

One launcher, then apps in slots. bmorcelli if you want the catalog. loznoc if you want three named slots on this screen. Bruce in slot 1, Flipper port in slot 2 (needs its sdcard pack), spare in slot 3. [Index](09-firmware-index.md).

Software extras (themes, apps, libraries): [software extras](14-software-extras.md).  
Where to find menus and common tasks: [finding features](15-finding-features.md).

Reboot returns to the launcher. If it does not, the app was flashed over the launcher. [Updates](05-updates.md).

## Your own app

PlatformIO, ESP32-S3, 16 MB, PSRAM, USB CDC on boot. Install `firmware.bin` into a slot. Do not write the factory image at `0x0` unless you mean to erase the launcher. [Own firmware](12-own-firmware.md). Starter: [examples/hello](../examples/hello).

## When it breaks

Black screen: wrong board target, or a raw app written at `0x0`. No port: cable or CDC. Bruce forgets settings: launcher partition table has no LittleFS. Sub-GHz silent: wrong band, wrong whip, or Plus binary on a non-Plus. [Troubleshooting](06-troubleshooting.md).

## Legal

Own hardware only. Unauthorised access is illegal almost everywhere. See [LEGAL.md](../LEGAL.md).
