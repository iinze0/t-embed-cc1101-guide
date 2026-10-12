# How to find anything on the firmwares

Menu names change between versions. The map below is the usual layout on a T-Embed CC1101 Plus as of late 2026. When a name differs, look in the same group (radio, storage, settings).

## Bmorcelli Launcher

| Want | Where |
| --- | --- |
| Install a `.bin` from the card | SD menu |
| Install from the online catalog | OTA |
| Web interface (files, control, OTA) | WUI |
| USB disk mode | USB (when available) |
| Partition / slot tools | PMan |
| Themes, boot behaviour, shortcuts | CFG |
| Fast-boot an installed app | Boot screen (press a number or tap the card) |

Normal reset returns to the launcher. Hold the encoder or use the side button according to the on-screen prompt.

## Bruce

Main menu groups (exact labels can vary with theme and version):

| Want | Menu group | Typical items |
| --- | --- | --- |
| Wi-Fi tools | Wi-Fi | Scan, deauth (own network only), portal, sniffer |
| Bluetooth | BLE | Scan, spam, beacon |
| Sub-GHz (CC1101) | RF / Sub-GHz | Read, record RAW, replay, spectrum, custom `.sub` |
| nRF24 (Plus only) | NRF | Spectrum, raw, jammer (own devices) |
| NFC / RFID | RFID | Read, emulate, dump |
| Infrared | IR | Read, replay, TV-B-Gone, databases |
| Files and captures | Files | Browser, copy, delete |
| JavaScript | Interpreter | Run scripts, App Store |
| BadUSB | Others or BadUSB | Keyboard scripts |
| Settings, themes, LEDs | Config | UI Theme, colours, startup app, Wi-Fi credentials |
| Clock, QR, games, etc. | Others / Clock | — |

Tips:
- Themes and App Store live under Config.
- Captures usually land on the SD card in folders the radio menus create.
- Hold the encoder (or the power gesture shown on screen) for deep sleep.

## Flipper-style port (Sor3nt)

The desktop / main menu is organised more like a Flipper Zero.

| Want | Where |
| --- | --- |
| Sub-GHz | Sub-GHz app |
| NFC | NFC app |
| Infrared | Infrared app |
| BadUSB | Bad USB |
| File browser / captures | Archive |
| Games and extra apps | Apps (or the Apps menu) |
| Wi-Fi tools | Wi-Fi app (or desktop services) |
| Settings, update, interface | Settings |
| Dolphin animations | Settings → Desktop / Dolphin |
| USB mass storage | USB Storage (when enabled) |
| Web file server | Wi-Fi app or desktop menu |
| Firmware update | Settings → Update Firmware (needs Wi-Fi) or qT-Embed |

The Archive app is the place to browse `.sub`, NFC, IR, BadUSB, and other saved files.  
Without the `sdcard.zip` contents on the card most of these apps stay empty.

## Willy V3

Willy follows a similar multi-tool layout to Bruce. Look in:
- RF / Sub-GHz for the CC1101
- NRF (Plus builds) for 2.4 GHz
- RFID for the PN532
- IR for infrared
- Config for settings

Use the Plus binary on a Plus board if you want nRF24 menus.

## Common tasks across all of them

| Task | Bruce | Flipper port | Notes |
| --- | --- | --- | --- |
| Capture a Sub-GHz remote | RF → Read / Record RAW | Sub-GHz → Read | Save to SD; replay only your own |
| Read an NFC tag | RFID | NFC | 13.56 MHz only |
| Learn an IR remote | IR → Read | Infrared | — |
| Run a BadUSB script | Others / BadUSB | Bad USB | Machine you own |
| Change the look | Config → UI Theme | Settings → Interface / Dolphin | — |
| Copy files to the card | Files menu, WebUI, or USB disk | Archive, Web filesystem, or USB storage | FAT32 card |
| Update the firmware | Launcher OTA or Bruce flasher | Settings → Update or qT-Embed | — |

## When you cannot find it

1. Check you are on the Plus binary if you are looking for nRF24.
2. Confirm the SD card is mounted (Files / Archive shows content).
3. Reboot after copying large packs (Flipper sdcard, theme folders).
4. Look in Config / Settings for hidden or optional items.
5. Check the project’s GitHub releases and Discord for version-specific menu changes.

Menu maps go out of date. The groups above stay stable even when individual labels move.
