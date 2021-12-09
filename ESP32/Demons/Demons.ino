#include <SoftwareSerial.h>
#include "FastLED.h"

#define NUM_LEDS 64 //灯珠数量
#define DATA_PIN 13 //数据引脚
#define KEY 25
#define S1 17
#define S2 16
#define LED_TYPE WS2812
#define COLOR_ORDER GRB

SoftwareSerial MySerial(18, 19); //19连接模块TX，18连接模块RX
uint8_t max_bright = 30;         //设置最大亮度为50
const byte StampPin = 14;        //盖章按键引脚
const byte LinePin = 27;         //台词按键引脚
const byte FunctionPin = 26;
int i, j, k;   //循环变量
int count = 0; //旋钮模块计数
int S1Last;
int S2Last;
int S1number;
int button_state = 0; //传递按钮信号
int NowAnimal = 0;
double ADDED[4] = {0, 0, 0, 0};
int ADDcount = 0;
int played = 0;
unsigned char order[4] = {0xAA, 0x06, 0x00, 0xB0};
CRGB leds[NUM_LEDS]; //初始化灯带

void setup()
{
  Serial.begin(115200);
  MySerial.begin(9600);
  delay(1000);
  LEDS.addLeds<LED_TYPE, DATA_PIN, COLOR_ORDER>(leds, NUM_LEDS);
  FastLED.setBrightness(max_bright);
  pinMode(StampPin, INPUT_PULLUP);
  pinMode(LinePin, INPUT_PULLUP);
  pinMode(FunctionPin, INPUT_PULLUP);
  pinMode(S1, INPUT);
  pinMode(S2, INPUT);
  pinMode(KEY, INPUT);
  attachInterrupt(digitalPinToInterrupt(StampPin), Set_Open, CHANGE);
  attachInterrupt(digitalPinToInterrupt(LinePin), LINE, CHANGE);
  attachInterrupt(digitalPinToInterrupt(FunctionPin), Set_Open, CHANGE);
  attachInterrupt(digitalPinToInterrupt(S1), ANIMAL, CHANGE);
  attachInterrupt(digitalPinToInterrupt(KEY), GOADD, CHANGE);
  volume(0x07);       //音量设置
  playmode(0x02);     //0x01:单曲循环 0x02:单次播放
  playmusic(1, 0x00); //开机音效
  Demons_Eye(1000);
  S1Last = digitalRead(S1);
  S2Last = digitalRead(S2);
}

void loop()
{
  if (button_state == 1)
  {
    DEAL(); //变身动画封装函数
  }
  if (button_state == 3)
  {
    FINISH(); //必杀动画封装函数
  }
  if (button_state == 5)
  {
    ADD(); //印章追加动画封装函数
  }
  if (button_state == 7)
  {
    REQUIEM(); //镇魂曲必杀动画封装函数
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
  else if (button_state == 2)
  {
    button_state = 3;
  }
  else if (button_state == 4)
  {
    button_state = 5;
  }
  else if (button_state == 6)
  {
    button_state = 7;
  }
  else
  {
    button_state = 0;
  }
}
void VolumeSet()
{
  S1number = digitalRead(S1);
  if (S1number != S1Last)
  {
    if (digitalRead(S2) != S1number)
    {
      volume_add();
    }
    else
    {
      volume_decrease();
    }
    Serial.println(count);
    S1Last = S1number;
  }
}

void RESET()
{
  count = 0;
}

void ANIMAL() //通过旋钮模块选择印章
{
  S1number = digitalRead(S1);
  if (S1number != S1Last)
  {
    if (digitalRead(S2) != S1number)
    {
      count++;
    }
    else
    {
      count--;
    }
    Serial.println(count);
    S1Last = S1number;
    if (count < 10)
    {
      NowAnimal = 1;
    }
    else if (count < 20)
    {
      NowAnimal = 2;
    }
    else if (count < 30)
    {
      NowAnimal = 3;
    }
    else if (count < 40)
    {
      NowAnimal = 4;
    }
    else
    {
      count = 0;
      NowAnimal = 1;
    }
    if (played != NowAnimal)
    {
      insertmusic(NowAnimal);
      played = NowAnimal;
    }
  }
}

void GOADD()
{
  if (button_state != 5)
  {
    button_state = 5;
  }
  else
  {
    button_state = 7;
  }
}

void LINE()
{
  playmusic(6, 0x01);
}