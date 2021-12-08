int REQUIEM()
{
    playmusic(5, 0x01);
    Demons_PushTwice();
    delay(300);
    playmusic(1, 0x07);
    delay(800);
    button_state = 0;
    playmode(0x01);
    playmusic(2, 0x03);
    while (button_state == 0)
    {
        Demons_More();
    }
    playmode(0x02);
    playmusic(5, 0x01);
    Demons_PushTwice();
    Demons_ShowAdd();
    playmusic(1, 0x08);
    Demons_Eye(1000);
    Demons_Requiem();
    button_state = 0;
    for (i = 0; i < 4; i++)
    {
        ADDED[i] = 0;
    }
    ADDcount = 0;
}