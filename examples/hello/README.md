# hello — minimal T-Embed example

Screen and side button only. No CC1101, no Wi-Fi.

## Build

```bash
pio run
```

Output: `.pio/build/tembed-cc1101/firmware.bin`

## Install

Copy the `.bin` to the SD card and install it into a launcher slot.  
**Do not** flash the factory image at offset `0x0` unless you want to replace the launcher.

## Display notes

- Panel: 320×170 ST7789
- Backlight: GPIO 21
- Column offset: 35 on many boards
- `User_Setup.h` is in `include/`. Point TFT_eSPI at it via `build_flags` if the panel stays black.

Full notes: [own firmware](../../docs/12-own-firmware.md).
