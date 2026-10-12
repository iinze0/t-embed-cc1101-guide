# Software extras — themes, apps, libraries, and SD packs

Hardware extras are on the [extras](10-extras.md) page. This page is the software side for Bruce and the Flipper-style port (Sor3nt). All of it lives on the FAT32 card.

## Bruce

### Themes
Themes change icons, colours, borders, labels, LED effects, and the boot animation.

- Place the theme folder (the `.json` plus its images) in `/Themes/` on the SD card or in LittleFS.
- Apply: **Config → UI Theme** → choose the filesystem → select the `.json`.
- Recommended image height for the T-Embed screen is about 140 px. Keep images small.
- Boot GIF and sound can be set in the same `.json`.

Community sources (check the Bruce Discord theme channel for the newest):
- [anonimoKali/Bruce-Themes](https://github.com/anonimoKali/Bruce-Themes) — many T-Embed-optimised packs
- [Ghoststrats/GhostStrats-Bruce-Themes](https://github.com/Ghoststrats/GhostStrats-Bruce-Themes)
- Official theme builder is linked from the Bruce wiki

### Apps and JavaScript scripts
Bruce runs `.js` scripts from the interpreter.

- Install the App Store once: **Config → Install App Store** (needs Wi-Fi).
- Then open it from **JS Interpreter → Tools → App Store**.
- Manual install: put `.js` files in `/BruceJS/<Category>/` (or the path the App Store uses).
- Example categories: Tools, Games, Infrared, RF, Utilities, Wi-Fi.

Only run scripts whose source you can read. The official App Store is the safe starting point.

### Libraries and captures
Put these on the card so the menus can find them:
- IR databases (IRDB and community packs) — usually under an `infrared` folder
- Sub-GHz `.sub` signal libraries
- BadUSB / Ducky scripts
- Evil-portal HTML templates
- Example packs ship in the Bruce repository under `sd_files`

## Flipper-style port (Sor3nt)

The `.bin` alone boots an empty interface. You need the matching asset pack.

1. Download the latest `sdcard.zip` from the project releases.
2. Extract **the contents** (not the zip folder itself) to the **root** of a FAT32 card.
3. Insert the card and reboot.

That pack supplies:
- App assets and plugins
- Universal IR databases
- Dolphin (idle) animations
- BadUSB layouts and example scripts (`/ext/badusb/`)
- Other required files

Extra things you can add yourself:
- More BadUSB scripts in `/ext/badusb/`
- Custom dolphin animations
- Your own captured `.sub`, NFC, and IR files (the Archive app organises them)

Desktop companion: [qT-Embed](https://github.com/Sor3nt/qT-Embed) for remote screen, SD management, and updates.

## Community packs (UberGuidoZ and similar)

Large Flipper Zero community repositories contain BadUSB scripts, Sub-GHz `.sub` files, IR codes, and more. Most of the useful files work on the T-Embed.

**Main source:** [UberGuidoZ/Flipper](https://github.com/UberGuidoZ/Flipper)

### What works

| Content | Flipper port | Bruce | Where to put it |
| --- | --- | --- | --- |
| BadUSB / Ducky scripts (`.txt`) | Yes | Yes | Flipper: `/ext/badusb/` · Bruce: BadUSB folder or Files |
| Sub-GHz `.sub` files | Yes (most raw) | Yes | Any folder; open from Sub-GHz / RF menu |
| IR files | Often | Often | Try infrared folder or open via Archive / Files |
| Official Flipper `.fap` apps | No | No | ARM apps do not run on ESP32 |
| NFC dumps | Limited | Limited | Format support differs |

### How to add them
1. Download the folders or files you want from the repo (or a mirror).
2. Copy to the SD card:
   - BadUSB scripts → `/ext/badusb/` (Flipper port) or the BadUSB location Bruce uses
   - `.sub` files → any folder (Archive / Files will see them)
3. Reboot.
4. Open the matching app (Bad USB, Sub-GHz, Archive, Infrared, RF).

Other useful collections:
- Large Sub-GHz databases (search “FlipperZero-Subghz-DB”)
- Official IRDB for infrared codes

Only use signals and scripts on devices, remotes, tags, and networks you own or have permission to test.

## Shared / both firmwares

| What | Where it helps | How |
| --- | --- | --- |
| External antennas | Range on CC1101 and 2.4 GHz | See [antennas](11-antennas.md) |
| Second SD card | Keep `.bin` files and the Flipper pack ready | Label them |
| USB card reader | When USB disk mode is awkward | Any UHS-I reader |
| Community Discords | Newest themes, scripts, signal packs | Bruce Discord and the Flipper-ESP32 Discord |

## Quick install paths

- **Themes (Bruce)**: SD reader → `/Themes/` → Config → UI Theme
- **App Store (Bruce)**: Wi-Fi → Config → Install App Store → JS Interpreter → Tools
- **Flipper SD pack**: download `sdcard.zip` → extract to card root → insert → reboot
- **Signal / IR libraries**: drop into the folders the firmware already looks in (Archive, Files, or the specific radio menu)
- **Community packs**: download from UberGuidoZ/Flipper → copy BadUSB / `.sub` / IR to the card → reboot

Reboot after large copies. Some menus only rescan the card on boot.

Legal reminder: own tags, own remotes, own networks. See [LEGAL.md](../LEGAL.md).
