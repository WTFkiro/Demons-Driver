int DEAL()
{
  play(0x04);
  Demons_Deal();
  button_state = 0; //按键信号复位
  playmode(0x02);
  play(0x05);
  while (button_state == 0)
  {
    Demons_Loop(); //在检测到按键前循环LOOP动画
  }
  playmode(0x01);
  play(0x08);
  Demons_DecideUP(); //跳出循环，变身动画
  Demons_Spider();
  button_state = 2;
}