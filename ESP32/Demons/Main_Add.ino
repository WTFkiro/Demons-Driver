int ADD()
{
    henshin_state = 3;
    playmusic(1, 0x02);
    Demons_Add();
    if (button_state == 7)
    {
        return 0;
    }
    button_state = 0; //按键信号复位
    playmode(0x01);   //循环播放待机音
    playmusic(2, 0x02);
    Demons_AddLoop(); //在检测到按键前循环LOOP动画100次

    if (button_state == 1) //如果100次内没有按键，跳过剩余部分
    {
        playmusic(5, 0x06);
        Demons_AddPush();
        button_state = 0;

        playmusic(2, 0x02);
        Demons_AddLoop2(); //在检测到按键前循环LOOP2动画50次
    }

    if (button_state == 1) //如果50次内没有按键，跳过剩余部分
    {
        playmode(0x02);
        playmusic(1, 0x04);
        Demons_Eye(0, 800);
        Demons_DominateUP();
        if (ADDcount < 4)
        {
            ADDED[ADDcount] = NowAnimal;
            ADDcount++;
        }
        if (NowAnimal == 1)
        {
            playmusic(3, 0x01);
            Demons_Spider2();
        }
        else if (NowAnimal == 2)
        {
            playmusic(3, 0x02);
            Demons_Bata();
        }
        else if (NowAnimal == 3)
        {
            playmusic(3, 0x03);
            Demons_Lex();
        }
        else if (NowAnimal == 4)
        {
            playmusic(3, 0x04);
            Demons_Lion();
        }
        button_state = 6;
    }
}