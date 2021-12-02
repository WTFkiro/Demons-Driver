// 0x01  add
// 0x02  addloop
// 0x03  bata
// 0x04  deal
// 0x05  loop
// 0x06  dominate push
// 0x07  spider
// 0x08  decideup
// 0x09  dominate UP

void play(unsigned char Track)
{
    //起始码-指令类型-数据长度（n）-数据1－数据n－和检验
    unsigned char play[6] = {0xAA, 0x07, 0x02, 0x00, Track, Track + 0xB3}; //0xB3=0xAA+0x07+0x02+0x00,即最后一位为校验和
    MySerial.write(play, 6);
}

void playmode(unsigned char mode)
// 0x00全盘循环 0x01单曲循环 0x02单曲停止 0x03全盘随机 0x04目录循环 0x05目录随机 0x06目录顺序 0x07顺序播放
{
    unsigned char Mode[5] = {0xAA, 0x18, 0x01, mode, mode + 0xC3};
    Serial.write(Mode, 5);
}

void looptime(unsigned char loop)
{
    unsigned char Mode[5] = {0xAA, 0x19, 0x02, loop, loop + 0xC3};
    Serial.write(Mode, 5);
}

void volume(unsigned char vol)
{
    unsigned char volume[5] = {0xAA, 0x13, 0x01, vol, vol + 0xBE}; //0xBE=0xAA+0x13+0x01,即最后一位为校验和
    MySerial.write(volume, 5);
}