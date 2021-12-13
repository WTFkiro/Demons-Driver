int DEAL()
{
  henshin_state = 1;
  playmusic(1, 0x01);
  Demons_Deal();
  button_state = 0; //按键信号复位
  playmode(0x01);
  playmusic(2, 0x01);
  while (button_state == 0)
  {
    Demons_Loop(); //在检测到按键前循环LOOP动画
  }
  playmode(0x02);
  playmusic(1, 0x03);
  Demons_DecideUP(); //跳出循环，变身动画
  Demons_Spider();
  button_state = 2;
}