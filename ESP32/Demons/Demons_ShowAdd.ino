int Demons_ShowAdd()
{
    for (k = 0; k < 4; k++)
    {
        if (ADDED[k] != 0)
        {
            playmusic(4, ADDED[k]);
            if (ADDED[k] == 1)
            {
                showspider();
            }
            if (ADDED[k] == 2)
            {
                showbata();
            }
            if (ADDED[k] == 3)
            {
                showlex();
            }
            if (ADDED[k] == 4)
            {
                showlion();
            }
            delay(1000);
        }
    }
}
void showspider()
{
    fill_solid(leds, 64, CRGB::Black);
    leds[1] = CRGB(0, 0, 255);
    leds[2] = CRGB(0, 0, 0);
    leds[3] = CRGB(0, 0, 0);
    leds[4] = CRGB(0, 0, 0);
    leds[5] = CRGB(0, 0, 0);
    leds[6] = CRGB(0, 0, 255);
    leds[8] = CRGB(0, 0, 255);
    leds[9] = CRGB(0, 0, 0);
    leds[11] = CRGB(153, 98, 208);
    leds[12] = CRGB(155, 97, 210);
    leds[14] = CRGB(0, 0, 0);
    leds[15] = CRGB(0, 0, 255);
    leds[16] = CRGB(0, 0, 255);
    leds[17] = CRGB(0, 0, 0);
    leds[18] = CRGB(220, 0, 0);
    leds[19] = CRGB(220, 0, 0);
    leds[20] = CRGB(220, 0, 0);
    leds[21] = CRGB(220, 0, 0);
    leds[22] = CRGB(0, 0, 0);
    leds[23] = CRGB(0, 0, 255);
    leds[24] = CRGB(0, 0, 0);
    leds[25] = CRGB(0, 0, 255);
    leds[26] = CRGB(151, 96, 206);
    leds[27] = CRGB(155, 98, 208);
    leds[28] = CRGB(155, 97, 210);
    leds[29] = CRGB(154, 98, 211);
    leds[30] = CRGB(40, 17, 216);
    leds[31] = CRGB(0, 0, 0);
    leds[32] = CRGB(0, 0, 255);
    leds[33] = CRGB(0, 0, 0);
    leds[34] = CRGB(0, 0, 2);
    leds[35] = CRGB(220, 0, 0);
    leds[36] = CRGB(220, 0, 0);
    leds[37] = CRGB(0, 0, 0);
    leds[38] = CRGB(0, 0, 0);
    leds[39] = CRGB(0, 0, 255);
    leds[40] = CRGB(0, 0, 0);
    leds[41] = CRGB(0, 0, 255);
    leds[42] = CRGB(252, 252, 52);
    leds[43] = CRGB(153, 97, 210);
    leds[44] = CRGB(155, 97, 210);
    leds[45] = CRGB(252, 252, 52);
    leds[46] = CRGB(0, 0, 255);
    leds[47] = CRGB(0, 0, 0);
    leds[50] = CRGB(0, 0, 255);
    leds[51] = CRGB(1, 0, 0);
    leds[52] = CRGB(0, 0, 0);
    leds[53] = CRGB(0, 0, 255);
    leds[56] = CRGB(0, 0, 255);
    leds[57] = CRGB(0, 0, 0);
    leds[58] = CRGB(0, 0, 255);
    leds[61] = CRGB(0, 0, 255);
    leds[62] = CRGB(0, 0, 0);
    leds[63] = CRGB(0, 0, 255);
    FastLED.show();
}

void showbata()
{
    fill_solid(leds, 64, CRGB::Black);
    leds[3] = CRGB(0, 255, 0);
    leds[4] = CRGB(0, 255, 0);
    leds[5] = CRGB(0, 255, 0);
    leds[9] = CRGB(0, 255, 0);
    leds[23] = CRGB(0, 255, 0);
    leds[24] = CRGB(255, 0, 0);
    leds[25] = CRGB(0, 255, 0);
    leds[27] = CRGB(0, 255, 0);
    leds[28] = CRGB(0, 255, 0);
    leds[29] = CRGB(0, 255, 0);
    leds[30] = CRGB(0, 255, 0);
    leds[31] = CRGB(0, 255, 0);
    leds[33] = CRGB(255, 255, 0);
    leds[34] = CRGB(255, 255, 0);
    leds[35] = CRGB(255, 255, 0);
    leds[36] = CRGB(0, 255, 0);
    leds[37] = CRGB(0, 255, 0);
    leds[38] = CRGB(0, 255, 0);
    leds[39] = CRGB(255, 255, 0);
    leds[41] = CRGB(255, 255, 0);
    leds[42] = CRGB(255, 255, 0);
    leds[43] = CRGB(255, 255, 0);
    leds[44] = CRGB(0, 255, 0);
    leds[45] = CRGB(0, 255, 0);
    leds[46] = CRGB(0, 255, 0);
    leds[47] = CRGB(0, 255, 0);
    leds[48] = CRGB(0, 255, 0);
    leds[52] = CRGB(0, 255, 0);
    leds[54] = CRGB(0, 255, 0);
    leds[56] = CRGB(0, 255, 0);
    leds[59] = CRGB(0, 255, 0);
    leds[61] = CRGB(0, 255, 0);
    leds[62] = CRGB(0, 255, 0);
    FastLED.show();
}
void showlex()
{
    fill_solid(leds, 64, CRGB::Black);
    leds[1] = CRGB::Black;
    leds[2] = CRGB::Black;
    leds[3] = CRGB::Black;
    leds[4] = CRGB::Black;
    leds[8] = CRGB::Black;
    leds[9] = CRGB::Blue;
    leds[10] = CRGB::Black;
    leds[11] = CRGB::Black;
    leds[12] = CRGB::Black;
    leds[13] = CRGB::Purple;
    leds[14] = CRGB::Green;
    leds[16] = CRGB::Purple;
    leds[17] = CRGB::Purple;
    leds[18] = CRGB::Purple;
    leds[19] = CRGB::Purple;
    leds[20] = CRGB::Purple;
    leds[21] = CRGB::Black;
    leds[23] = CRGB::Blue;
    leds[24] = CRGB::Purple;
    leds[25] = CRGB::Black;
    leds[26] = CRGB::Black;
    leds[27] = CRGB::Black;
    leds[28] = CRGB::Red;
    leds[29] = CRGB::Red;
    leds[30] = CRGB::Red;
    leds[31] = CRGB::Purple;
    leds[32] = CRGB::Purple;
    leds[33] = CRGB::Purple;
    leds[34] = CRGB::Purple;
    leds[35] = CRGB::Blue;
    leds[36] = CRGB::Purple;
    leds[37] = CRGB::Purple;
    leds[38] = CRGB::Blue;
    leds[39] = CRGB::Purple;
    leds[40] = CRGB::Black;
    leds[41] = CRGB::Purple;
    leds[43] = CRGB::Purple;
    leds[44] = CRGB::Purple;
    leds[45] = CRGB::Purple;
    leds[46] = CRGB::Purple;
    leds[48] = CRGB::Purple;
    leds[49] = CRGB::Black;
    leds[52] = CRGB::Purple;
    leds[53] = CRGB::Black;
    leds[54] = CRGB::Purple;
    leds[55] = CRGB::Black;
    leds[57] = CRGB::Black;
    leds[58] = CRGB::Purple;
    leds[59] = CRGB::Black;
    leds[60] = CRGB::Purple;
    leds[61] = CRGB::Purple;
    FastLED.show();
}
void showlion()
{
    fill_solid(leds, 64, CRGB::Black);
    leds[1] = CRGB::OrangeRed;
    leds[2] = CRGB::OrangeRed;
    leds[3] = CRGB::OrangeRed;
    leds[12] = CRGB::OrangeRed;
    leds[13] = CRGB::OrangeRed;
    leds[14] = CRGB::Red;
    leds[15] = CRGB::Yellow;
    leds[16] = CRGB::Yellow;
    leds[17] = CRGB::Yellow;
    leds[18] = CRGB::OrangeRed;
    leds[19] = CRGB::OrangeRed;
    leds[20] = CRGB::OrangeRed;
    leds[22] = CRGB::Yellow;
    leds[24] = CRGB::Yellow;
    leds[27] = CRGB::Yellow;
    leds[28] = CRGB::OrangeRed;
    leds[29] = CRGB::OrangeRed;
    leds[30] = CRGB::OrangeRed;
    leds[32] = CRGB::OrangeRed;
    leds[33] = CRGB::OrangeRed;
    leds[34] = CRGB::Yellow;
    leds[35] = CRGB::Yellow;
    leds[36] = CRGB::Yellow;
    leds[37] = CRGB::Yellow;
    leds[39] = CRGB::Yellow;
    leds[41] = CRGB::Yellow;
    leds[42] = CRGB::Yellow;
    leds[43] = CRGB::Yellow;
    leds[44] = CRGB::Yellow;
    leds[45] = CRGB::Yellow;
    leds[46] = CRGB::Yellow;
    leds[47] = CRGB::Yellow;
    leds[49] = CRGB::Yellow;
    leds[50] = CRGB::Yellow;
    leds[52] = CRGB::Yellow;
    leds[53] = CRGB::Yellow;
    leds[54] = CRGB::Yellow;
    leds[56] = CRGB::Yellow;
    leds[59] = CRGB::Yellow;
    leds[60] = CRGB::Yellow;
    leds[63] = CRGB::Yellow;
    FastLED.show();
}