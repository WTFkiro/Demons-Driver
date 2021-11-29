#include "FastLED.h"
#define NUM_LEDS 64 //灯珠数量
#define DATA_PIN 9  //数据引脚
#define LED_TYPE WS2812
#define COLOR_ORDER GRB
uint8_t max_bright = 60;     //设置最大亮度为60
const byte interruptPin = 2; //按键引脚，用于中断
int i;
int button_state = 0; //传递按钮信号

CRGB leds[NUM_LEDS];

void setup()
{
  Serial.begin(9600);
  delay(1000);
  LEDS.addLeds<LED_TYPE, DATA_PIN, COLOR_ORDER>(leds, NUM_LEDS);
  FastLED.setBrightness(max_bright);
  pinMode(interruptPin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(interruptPin), blink, CHANGE);
}

void loop()
{
  if (button_state == 1) //检测到按键，触发启动动画
  {
    Demons_Deal();
    button_state = 0; //按键信号复位
    while (button_state == 0)
    {
      Demons_Loop(); //在检测到按键前循环LOOP动画
    }
    Demons_DecideUP(); //跳出循环，变身动画
    Demons_Spider();
    button_state = 0;
  }
  EVERY_N_MILLISECONDS(30)
  {
    fadeToBlackBy(leds, NUM_LEDS, 10);
  }
  FastLED.show();
}

void blink()
{
  button_state = 1;
}
