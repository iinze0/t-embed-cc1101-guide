// Backlight on, one line of text. No radio.
// Pins are the T-Embed CC1101 map (not the plain T-Embed).

#include <Arduino.h>
#include <TFT_eSPI.h>

static const int PIN_BL = 21;
static const int PIN_SIDE = 6;

TFT_eSPI tft;

void setup() {
    pinMode(PIN_BL, OUTPUT);
    digitalWrite(PIN_BL, HIGH);
    pinMode(PIN_SIDE, INPUT_PULLUP);

    tft.init();
    tft.setRotation(1);
    tft.fillScreen(TFT_BLACK);
    tft.setTextColor(TFT_WHITE, TFT_BLACK);
    tft.setTextDatum(MC_DATUM);
    tft.drawString("hello", tft.width() / 2, tft.height() / 2, 4);
}

void loop() {
    // Side button low means pressed on this board.
    if (digitalRead(PIN_SIDE) == LOW) {
        tft.fillScreen(TFT_BLACK);
        tft.drawString("button", tft.width() / 2, tft.height() / 2, 4);
    }
    delay(50);
}
