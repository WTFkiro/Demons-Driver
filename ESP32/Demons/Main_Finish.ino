int Finish()
{
    Demons_More();
    button_state = 0;
    while (button_state == 0)
    {
        Demons_More();
    }
    Demons_Eye(1000);
    Demons_Finish();
    button_state = 4;
}