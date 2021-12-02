
#include <SoftwareSerial.h>

SoftwareSerial Serial1(10, 11); //10连接模块TX，11连接模块RX

unsigned char order[4] = {0xAA, 0x06, 0x00, 0xB0}; //下一曲

void setup()
{
  //Serial.begin(115200);
  Serial1.begin(9600);
  volume(0x02);   //音量设置0x00-0x1E
  playmode(0x01); //单曲循环
}

void loop()
{
  play(0x01);   //指定播放:0x01-文件0001
  delay(10000); // add
  play(0x02);
  delay(10000); // addloop
  play(0x03);
  delay(10000); // bata
  play(0x04);
  delay(10000); // deal
  play(0x05);
  delay(10000); // loop
  play(0x06);
  delay(10000); // dominate push
  play(0x07);
  delay(10000); // spider
  play(0x08);
  delay(10000); // decideup
  play(0x09);
  delay(10000); // dominate UP
}

void play(unsigned char Track)
{
  //起始码，指令类型，数据长度，数据1－数据n，和检验
  unsigned char play[6] = {0xAA, 0x07, 0x02, 0x00, Track, Track + 0xB3};
  Serial1.write(play, 6);
}

void volume(unsigned char vol)
{
  unsigned char volume[5] = {0xAA, 0x13, 0x01, vol, vol + 0xBE};
  Serial1.write(volume, 5);
}

void playmode(unsigned char mode)
// 0x00全盘循环 0x01单曲循环 0x02单曲停止 0x03全盘随机 0x04目录循环 0x05目录随机 0x06目录顺序 0x07顺序播放
{
  unsigned char Mode[5] = {0xAA, 0x18, 0x01, mode, mode + 0xC3};
  Serial1.write(Mode, 5);
}
