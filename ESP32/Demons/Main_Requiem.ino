int REQUIEM()
{
    Demons_PushTwice();
    button_state = 0;
    while (button_state == 0)
    {
        Demons_More();
    }
    Demons_PushTwice();
    Demons_Spider();
    Demons_Bata();
    Demons_Eye(1000);
    Demons_Requiem();
    button_state = 0;
}