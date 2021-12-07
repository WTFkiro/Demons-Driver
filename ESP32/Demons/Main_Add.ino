int ADD()
{
    playmusic(1, 0x02);
    Demons_Add();
    button_state = 0; //按键信号复位

    playmode(0x01); //循环播放待机音
    playmusic(2, 0x02);
    Demons_AddLoop(); //在检测到按键前循环LOOP动画100次

    if (button_state == 1) //如果100次内没有按键，跳过剩余部分
    {
        playmusic(5, 0x02);
        Demons_AddPush();
        button_state = 0;

        playmusic(2, 0x02);
        Demons_AddLoop2(); //在检测到按键前循环LOOP2动画50次
    }

    if (button_state == 1) //如果50次内没有按键，跳过剩余部分
    {
        playmode(0x02);
        playmusic(1, 0x04);
        Demons_DominateUP();
        playmusic(3, 0x02);
        Demons_Bata();
        playmusic(1, 0x05);
        button_state = 6;
    }
}