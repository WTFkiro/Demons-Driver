int Demons_Loop()
{
    for (k = 0; k <= 1; k++)
    {
        leds[0] = CRGB(252, 252, 50);
        leds[1] = CRGB(252, 252, 52);
        leds[2] = CRGB(252, 252, 54);
        leds[3] = CRGB(153, 97, 210);
        leds[4] = CRGB(151, 98, 210);
        leds[5] = CRGB(252, 252, 52);
        leds[6] = CRGB(252, 252, 52);
        leds[7] = CRGB(252, 252, 54);
        leds[8] = CRGB(253, 251, 52);
        leds[9] = CRGB(0, 15, 183);
        leds[10] = CRGB(0, 15, 181);
        leds[11] = CRGB(0, 15, 181);
        leds[12] = CRGB(0, 15, 181);
        leds[13] = CRGB(0, 16, 181);
        leds[14] = CRGB(0, 15, 181);
        leds[15] = CRGB(252, 252, 52);
        leds[16] = CRGB(252, 252, 52);
        leds[17] = CRGB(0, 15, 181);
        leds[18] = CRGB(0, 16, 179);
        leds[19] = CRGB(0, 15, 181);
        leds[20] = CRGB(0, 15, 181);
        leds[21] = CRGB(0, 15, 181);
        leds[22] = CRGB(0, 15, 181);
        leds[23] = CRGB(252, 252, 52);
        leds[24] = CRGB(151, 98, 210);
        leds[25] = CRGB(1, 14, 181);
        leds[26] = CRGB(0, 15, 181);
        leds[27] = CRGB(0, 15, 181);
        leds[28] = CRGB(0, 15, 181);
        leds[29] = CRGB(0, 15, 181);
        leds[30] = CRGB(1, 14, 183);
        leds[31] = CRGB(151, 98, 210);
        leds[32] = CRGB(151, 98, 210);
        leds[33] = CRGB(0, 15, 181);
        leds[34] = CRGB(0, 15, 181);
        leds[35] = CRGB(0, 15, 181);
        leds[36] = CRGB(0, 15, 181);
        leds[37] = CRGB(0, 15, 181);
        leds[38] = CRGB(0, 15, 181);
        leds[39] = CRGB(153, 97, 214);
        leds[40] = CRGB(252, 252, 52);
        leds[41] = CRGB(0, 15, 183);
        leds[42] = CRGB(0, 15, 181);
        leds[43] = CRGB(0, 15, 181);
        leds[44] = CRGB(0, 15, 181);
        leds[45] = CRGB(0, 15, 181);
        leds[46] = CRGB(0, 15, 181);
        leds[47] = CRGB(252, 252, 52);
        leds[48] = CRGB(252, 252, 52);
        leds[49] = CRGB(0, 15, 181);
        leds[50] = CRGB(0, 15, 181);
        leds[51] = CRGB(0, 15, 181);
        leds[52] = CRGB(0, 16, 181);
        leds[53] = CRGB(0, 15, 181);
        leds[54] = CRGB(0, 15, 181);
        leds[55] = CRGB(252, 252, 52);
        leds[56] = CRGB(252, 252, 52);
        leds[57] = CRGB(252, 252, 52);
        leds[58] = CRGB(252, 252, 52);
        leds[59] = CRGB(151, 98, 210);
        leds[60] = CRGB(151, 98, 210);
        leds[61] = CRGB(252, 252, 52);
        leds[62] = CRGB(252, 252, 52);
        leds[63] = CRGB(252, 252, 52);
        FastLED.show();
        for (i = 0; i <= 8; i++)
        {
            if (button_state == 1)
            {
                return 0;
            }
            else
            {
                delay(43);
            }
        }
        leds[0] = CRGB(1, 14, 181);
        leds[1] = CRGB(0, 16, 181);
        leds[2] = CRGB(0, 15, 181);
        leds[5] = CRGB(0, 15, 183);
        leds[6] = CRGB(0, 15, 181);
        leds[7] = CRGB(0, 15, 181);
        leds[8] = CRGB(1, 14, 183);
        leds[9] = CRGB(252, 252, 52);
        leds[10] = CRGB(253, 252, 48);
        leds[13] = CRGB(253, 251, 50);
        leds[14] = CRGB(250, 253, 54);
        leds[15] = CRGB(0, 15, 181);
        leds[16] = CRGB(0, 16, 179);
        leds[17] = CRGB(252, 252, 52);
        leds[22] = CRGB(252, 252, 52);
        leds[23] = CRGB(0, 16, 179);
        leds[40] = CRGB(0, 16, 179);
        leds[41] = CRGB(252, 252, 52);
        leds[46] = CRGB(252, 252, 52);
        leds[47] = CRGB(0, 16, 179);
        leds[48] = CRGB(0, 16, 179);
        leds[49] = CRGB(252, 252, 52);
        leds[50] = CRGB(250, 253, 50);
        leds[53] = CRGB(252, 252, 52);
        leds[54] = CRGB(252, 252, 52);
        leds[55] = CRGB(0, 15, 181);
        leds[56] = CRGB(1, 14, 181);
        leds[57] = CRGB(0, 16, 179);
        leds[58] = CRGB(0, 16, 179);
        leds[61] = CRGB(0, 16, 179);
        leds[62] = CRGB(0, 16, 179);
        leds[63] = CRGB(0, 15, 183);
        FastLED.show();
        for (i = 0; i <= 8; i++)
        {
            if (button_state == 1)
            {
                return 0;
            }
            else
            {
                delay(43);
            }
        }
        leds[9] = CRGB(0, 15, 181);
        leds[10] = CRGB(0, 15, 181);
        leds[13] = CRGB(0, 15, 181);
        leds[14] = CRGB(0, 15, 181);
        leds[17] = CRGB(0, 15, 181);
        leds[18] = CRGB(252, 252, 52);
        leds[21] = CRGB(250, 253, 52);
        leds[22] = CRGB(0, 15, 181);
        leds[41] = CRGB(0, 15, 181);
        leds[42] = CRGB(252, 252, 52);
        leds[45] = CRGB(252, 252, 52);
        leds[46] = CRGB(0, 15, 181);
        leds[49] = CRGB(0, 15, 181);
        leds[50] = CRGB(0, 15, 183);
        leds[53] = CRGB(0, 15, 181);
        leds[54] = CRGB(0, 15, 181);
        FastLED.show();
        for (i = 0; i <= 8; i++)
        {
            if (button_state == 1)
            {
                return 0;
            }
            else
            {
                delay(43);
            }
        }
        leds[18] = CRGB(0, 16, 179);
        leds[21] = CRGB(0, 16, 179);
        leds[27] = CRGB(250, 253, 52);
        leds[28] = CRGB(252, 252, 52);
        leds[35] = CRGB(252, 252, 52);
        leds[36] = CRGB(252, 252, 52);
        leds[42] = CRGB(0, 17, 179);
        leds[45] = CRGB(0, 16, 179);
        FastLED.show();
        for (i = 0; i <= 8; i++)
        {
            if (button_state == 1)
            {
                return 0;
            }
            else
            {
                delay(43);
            }
        }
    }
}