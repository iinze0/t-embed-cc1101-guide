# Make your own firmware

You do not fork Bruce to blink the screen. A small PlatformIO app, built for this ESP32-S3, installs into a launcher slot the same way Bruce does. LilyGO's own examples live in [Xinyuan-LilyGO/T-Embed-CC1101](https://github.com/Xinyuan-LilyGO/T-Embed-CC1101) and are the pin source of truth. This page is the path from an empty folder to a `.bin` in a slot.

This is your board. The same legal line as the rest of the repo applies the moment the radio transmits: own hardware, own tags, own network. [LEGAL.md](../LEGAL.md).

## What you are building for

| Fact | Value |
| --- | --- |
| Chip | ESP32-S3, 16 MB flash, 8 MB octal PSRAM |
| USB | CDC on boot. The port is the USB-C jack, no UART bridge chip. |
| Display | ST7789, 170×320, column offset 35 |
| Input | Encoder on GPIO 4 and 5, push on 0, side button on 6 |
| I2C | SDA 8, SCL 18. PN532 at 0x24, BQ27220 at 0x55, BQ25896 at 0x6B |
| SD | CS 13, shares SPI with the display (SCK 11, MOSI 9, MISO 10) |
| CC1101 | CS 12, GDO0 3, GDO2 38, band switches 47 and 48 |
| nRF24 | Plus only. Pins differ from an expansion module on the original. Copy them from the Plus header in Bruce, do not guess. |

A plain T-Embed (no CC1101) uses different display and SD pins. Do not copy a non-CC1101 example onto this board. bmorcelli documents the split in the T-Embed environment of [Launcher](https://github.com/bmorcelli/Launcher).

## Tools

1. [VS Code](https://code.visualstudio.com/) and the PlatformIO extension. Python 3 on the PATH.
2. A USB-C data cable.
3. Optional: Arduino IDE 2, board package "ESP32 by Espressif" at 3.x, board "ESP32S3 Dev Module", USB CDC On Boot enabled, flash 16 MB, PSRAM OPI. PlatformIO is the one LilyGO tests.

## Smallest app

The starter in [examples/hello](../examples/hello) brings the backlight up and prints on the ST7789. It does not touch the CC1101.

```bash
cd examples/hello
pio run
pio run -t upload --upload-port /dev/ttyACM0
```

Windows port is `COM5` or whatever Device Manager shows. Linux user needs `dialout`. First upload after a launcher is installed will replace the launcher. Upload to a spare board, or build only and install the app binary into a slot (next section).

`pio run` writes `.pio/build/tembed-cc1101/firmware.bin`. That file is the app. `firmware.factory.bin` next to it is a merged image and will wipe a launcher if you write it at `0x0`.

## Put it in a slot instead of erasing the launcher

1. Build. Copy `firmware.bin` to the card root. Rename it (`hello.bin`) so you can tell revisions apart.
2. Launcher → Install → that file → an empty slot.
3. Boot the slot. Reboot. You should be back in the launcher.

bmorcelli Launcher accepts that app binary directly ([their wiki](https://github.com/bmorcelli/Launcher/wiki/Obtaining-binaries-to-launch)). loznoc slots are about 4.5 MB and start at `0x1A0000`. If the install refuses the file, the image is bigger than the slot. Strip debug, drop unused libraries, or flash it as the only firmware.

Do not install a second launcher into a slot. A launcher expects to own `0x0`.

## Turn on a peripheral, in this order

Copy the working example from LilyGO before you write your own driver. Each one is already wired.

| Want | LilyGO example | Library they pin |
| --- | --- | --- |
| Screen | `display_test` | TFT_eSPI |
| Encoder | `encode_test` | RotaryEncoder |
| CC1101 | their RadioLib example | RadioLib 6.5.0 |
| NFC | PN532 example | Seeed PN532 |
| IR | `infrared_send_test`, `infrared_recv_test` | IRremoteESP8266 |
| LEDs | WS2812 example | FastLED |
| Battery | BQ27220 / BQ25896 | XPowersLib |
| Audio | their audio example | ESP32-audioI2S |

Band select on the CC1101 is GPIO 47 and 48 (`SW1`, `SW0`): 315, 434, or 868/915. Set the legal band for where you are before any transmit. [Hardware](01-hardware.md).

Plus nRF24: start from Bruce's Plus pin header, not from a generic nRF24 tutorial. The original board only has nRF24 if you wired a module onto the expansion port, and those pins are different.

## Settings that matter

```ini
board = esp32-s3-devkitc-1
board_build.arduino.memory_type = qio_opi
board_upload.flash_size = 16MB
build_flags =
    -DBOARD_HAS_PSRAM
    -DARDUINO_USB_MODE=1
    -DARDUINO_USB_CDC_ON_BOOT=1
```

Without CDC-on-boot the board flashes and then never shows a port. Without PSRAM, LVGL and any real UI will not fit. Display column offset is 35; forget it and the text starts off the left edge.

## ESP-IDF, if you outgrow Arduino

Sor3nt's Flipper port is ESP-IDF (they have used 5.4.1). Same chip flags: ESP32-S3, 16 MB, octal PSRAM. You still install the app image into a slot, not a full flash of `bootloader + partition + app`, unless you mean to replace the launcher.

## Ship it to someone else

Tag a release. Attach `firmware.bin` and say which board (CC1101 or Plus) and which launcher slot it fits. Do not attach a merged image without saying it erases the launcher.
