#include "FastLED.h"

#define NUM_LEDS 64
#define DATA_PIN 9
#define LED_TYPE WS2812
#define COLOR_ORDER GRB
#define KRED CRGB(253, 80, 19)
#define KBLACK CRGB(0, 0, 0)
uint8_t max_bright = 60;

CRGB leds[NUM_LEDS];

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  delay(1000);
  LEDS.addLeds<LED_TYPE, DATA_PIN, COLOR_ORDER>(leds, NUM_LEDS);
  FastLED.setBrightness(max_bright);
}

void loop()
{
}