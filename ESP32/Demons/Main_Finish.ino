int FINISH()
{
    henshin_state = 2;
    playmusic(5, 0x06);
    Demons_Eye(0, 700);
    playmusic(1, 0x09);
    Demons_Eye(0, 400);
    button_state = 0;
    playmode(0x01);
    playmusic(2, 0x03);
    Demons_More();
    playmode(0x02);
    playmusic(5, 0x05);
    Demons_PushTwice();
    playmusic(1, 0x06);
    Demons_Eye(0, 1000);
    Demons_Finish();
    button_state = 4;
}