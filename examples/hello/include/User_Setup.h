// TFT_eSPI setup for LilyGO T-Embed CC1101 / Plus.
// ST7789 170x320, column offset 35.
// Drop this where TFT_eSPI expects User_Setup.h, or set
// -DUSER_SETUP_LOADED and include it from build_flags.

#define ST7789_DRIVER
#define TFT_WIDTH  170
#define TFT_HEIGHT 320

#define TFT_MOSI 9
#define TFT_SCLK 11
#define TFT_CS   41
#define TFT_DC   16
#define TFT_RST  -1
#define TFT_BL   21
#define TFT_BACKLIGHT_ON HIGH

#define TFT_RGB_ORDER TFT_BGR
#define SPI_FREQUENCY 40000000

#define LOAD_GLCD
#define LOAD_FONT2
#define LOAD_FONT4
