# hello

Screen and side button only. No CC1101, no Wi-Fi.

```bash
pio run
```

Install `.pio/build/tembed-cc1101/firmware.bin` into a launcher slot. Flashing the factory image at offset 0 replaces the launcher.

TFT_eSPI reads `User_Setup.h` from its own library folder unless you point `build_flags` at [include/User_Setup.h](include/User_Setup.h). If the panel stays black, backlight is GPIO 21 and the column offset is 35. Full notes: [own firmware](../../docs/12-own-firmware.md).
