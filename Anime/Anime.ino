#include "FastLED.h"
#define NUM_LEDS 64 //灯珠数量
#define DATA_PIN 13 //将灯条的数据口接到13引脚
#define LED_TYPE WS2812
#define COLOR_ORDER GRB
uint8_t max_bright = 60; //设置最大亮度为60，保护视力人人有责

int i;

CRGB leds[NUM_LEDS];

void setup()
{
    Serial.begin(9600);
    delay(100);
    LEDS.addLeds<LED_TYPE, DATA_PIN, COLOR_ORDER>(leds, NUM_LEDS);
    FastLED.setBrightness(max_bright);
}

void loop()
{
    //Put your anime here
}