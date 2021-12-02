#include "FastLED.h"

#define NUM_LEDS 64 //灯珠数量
#define DATA_PIN 9  //数据引脚
#define LED_TYPE WS2812
#define COLOR_ORDER GRB
uint8_t max_bright = 60;     //设置最大亮度为60
const byte interruptPin = 2; //按键引脚，用于中断
int i, j;
int button_state = 0; //传递按钮信号
unsigned char order[4] = {0xAA, 0x06, 0x00, 0xB0};
CRGB leds[NUM_LEDS];

void setup()
{
    Serial.begin(9600);
    Serial1.begin(9600);
    delay(1000);
    LEDS.addLeds<LED_TYPE, DATA_PIN, COLOR_ORDER>(leds, NUM_LEDS);
    FastLED.setBrightness(max_bright);
    pinMode(interruptPin, INPUT_PULLUP);
    attachInterrupt(digitalPinToInterrupt(interruptPin), Set_Open, CHANGE);
}

void loop()
{
    if (button_state == 1) //检测到按键，触发启动动画
    {
        Demons_Add();
        button_state = 0; //按键信号复位
        Demons_AddLoop(); //在检测到按键前循环LOOP动画100次

        if (button_state == 1) //如果100次内没有按键，跳过剩余部分
        {
            Demons_AddPush();
            button_state = 0;
            Demons_AddLoop2(); //在检测到按键前循环LOOP2动画50次
        }

        if (button_state == 1) //如果50次内没有按键，跳过剩余部分
        {
            Demons_DominateUP();
            Demons_Bata();
            button_state = 0;
        }
    }
    EVERY_N_MILLISECONDS(30)
    {
        fadeToBlackBy(leds, NUM_LEDS, 15);
    }
    FastLED.show();
}

void Set_Open()
{
    button_state = 1;
}