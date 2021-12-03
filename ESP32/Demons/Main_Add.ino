int ADD()
{
    play(0x01);
    Demons_Add();
    button_state = 0; //按键信号复位

    playmode(0x02); //循环播放待机音
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
        playmode(0x01);
        play(0x09);
        Demons_DominateUP();
        Demons_Bata();
        button_state = 6;
    }
}