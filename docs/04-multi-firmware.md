# Multi-firmware

Flash one launcher. Then install apps into slots from the card. Normal reset returns to the launcher.

## Launchers

- [bmorcelli Launcher](https://bmorcelli.github.io/Launcher/) — catalog and OTA. Pick LilyGO T-Embed CC1101. WebUI after it boots.
- [loznoc dual-boot](https://loznoc.github.io/dualboot/) — three named slots, themes, remote on the device. Does not include Bruce.

Flash exactly one. The second erase replaces the first.

## Apps to put in slots

- Bruce — [releases](https://github.com/BruceDevices/firmware/releases) or [bruce.computer](https://bruce.computer/). CC1101 asset; Plus asset if listed.
- Willy V3 — [releases](https://github.com/h-RAT/Willy_Firmware_V3_T-Embed_CC1101/releases). Plus build for nRF24.
- Flipper-style port — Sor3nt ESP32 port. Needs the matching `sdcard.zip` unpacked on the card root.
- Your own PlatformIO builds — use `firmware.bin`, not the factory image. See [own firmware](12-own-firmware.md).

## Suggested layout

| Slot | App | Why |
| --- | --- | --- |
| 1 | Bruce | Daily driver |
| 2 | Flipper port | Needs the SD asset pack |
| 3 | Spare | Willy, test build, or empty |

Full order is on [setup order](00-from-this-repo.md).
