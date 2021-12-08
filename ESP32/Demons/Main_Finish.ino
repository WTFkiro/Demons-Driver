int FINISH()
{
    playmusic(5, 0x01);
    Demons_PushTwice();
    delay(500);
    playmusic(1, 0x07);
    delay(500);
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
    playmusic(1, 0x06);
    Demons_Eye(1000);
    Demons_Finish();
    button_state = 4;
}