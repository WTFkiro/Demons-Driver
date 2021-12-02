#include <SoftwareSerial.h>
#include "FastLED.h"

#define NUM_LEDS 64 //灯珠数量
#define DATA_PIN 13 //数据引脚
#define LED_TYPE WS2812
#define COLOR_ORDER GRB

SoftwareSerial MySerial(18, 19); //18连接模块TX，19连接模块RX
uint8_t max_bright = 50;         //设置最大亮度为50
const byte interruptPin = 26;    //按键引脚，用于中断
int i, j, k;                     //循环变量
int button_state = 0;            //传递按钮信号
unsigned char order[4] = {0xAA, 0x06, 0x00, 0xB0};

CRGB leds[NUM_LEDS]; //初始化灯带

void setup()
{
  MySerial.begin(9600);
  delay(1000);
  LEDS.addLeds<LED_TYPE, DATA_PIN, COLOR_ORDER>(leds, NUM_LEDS);
  FastLED.setBrightness(max_bright);
  pinMode(interruptPin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(interruptPin), Set_Open, CHANGE);
  volume(0x03);   //音量设置0x00-0x1E
  playmode(0x01); //0x01:单曲循环 0x02:单次播放
  looptime(0xCC);
}

void loop()
{
  if (button_state == 1)
  {
    DEAL(); //变身动画封装函数
  }
  if (button_state == 3)
  {
    Finish(); //必杀动画封装函数
  }
  if (button_state == 5)
  {
    ADD(); //印章追加动画封装函数
  }
  EVERY_N_MILLISECONDS(30)
  {
    fadeToBlackBy(leds, NUM_LEDS, 15);
  }
  FastLED.show();
}

void Set_Open()
{
  if (button_state == 0)
  {
    button_state = 1;
  }
  if (button_state == 2)
  {
    button_state = 3;
  }
  if (button_state == 4)
  {
    button_state = 5;
  }
}
