int REQUIEM()
{
    henshin_state = 4;
    playmusic(1, 0x07);
    Demons_PushTwice();
    delay(800);
    button_state = 0;
    playmode(0x01);
    playmusic(2, 0x03);
    Demons_More();
    playmode(0x02);
    playmusic(5, 0x05);
    Demons_PushTwice();
    Demons_ShowAdd();
    playmusic(1, 0x08);
    Demons_Eye(0, 1000);
    Demons_Requiem();
    button_state = 0;
    for (i = 0; i < 4; i++) //超必杀结束清空所有增强
    {
        ADDED[i] = 0;
    }
    ADDcount = 0;
    NowAnimal = 0;
}