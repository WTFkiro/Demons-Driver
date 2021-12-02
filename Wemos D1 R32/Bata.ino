#include "FastLED.h"
#include <SoftwareSerial.h>

#define NUM_LEDS 64 //灯珠数量
#define DATA_PIN 13 //数据引脚
#define LED_TYPE WS2812
#define COLOR_ORDER GRB
uint8_t max_bright = 60;      //设置最大亮度为60
const byte interruptPin = 26; //按键引脚，用于中断
int i, j;
int button_state = 0;          //传递按钮信号
SoftwareSerial Serial1(5, 23); //10连接模块TX，11连接模块RX
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
    volume(0x02);    //音量设置0x00-0x1E
    musicloop(0x02); //0x01:单次播放 0x02:单曲循环
}

void loop()
{
    if (button_state == 1) //检测到按键，触发启动动画
    {
        play(0x01);
        Demons_Add();
        button_state = 0; //按键信号复位

        musicloop(0x01); //循环播放待机音
        play(0x02);
        Demons_AddLoop(); //在检测到按键前循环LOOP动画100次

        if (button_state == 1) //如果100次内没有按键，跳过剩余部分
        {
            play(0x06);
            Demons_AddPush();
            button_state = 0;

            play(0x02);
            Demons_AddLoop2(); //在检测到按键前循环LOOP2动画50次
        }

        if (button_state == 1) //如果50次内没有按键，跳过剩余部分
        {
            musicloop(0x02);
            play(0x09);
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

void play(unsigned char Track)
{
    //起始码-指令类型-数据长度（n）-数据1－数据n－和检验
    unsigned char play[6] = {0xAA, 0x07, 0x02, 0x00, Track, Track + 0xB3}; //0xB3=0xAA+0x07+0x02+0x00,即最后一位为校验和
    Serial1.write(play, 6);
}
void musicloop(unsigned char Model)
{
    unsigned char Loop[5] = {0xAA, 0x18, 0x01, Model, Model + 0xC3};
    Serial1.write(Loop, 5);
}
void volume(unsigned char vol)
{
    unsigned char volume[5] = {0xAA, 0x13, 0x01, vol, vol + 0xBE}; //0xBE=0xAA+0x13+0x01,即最后一位为校验和
    Serial1.write(volume, 5);
}
