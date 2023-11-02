#include <Arduino.h>
#include <TFT_eSPI.h>

TFT_eSPI tft;

void setup() {
  tft.init();
  tft.setRotation(1);
  
  tft.fillScreen(TFT_BLACK);
  tft.println("Hello, World!");
}

void loop() {
}