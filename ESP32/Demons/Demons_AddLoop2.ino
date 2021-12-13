int Demons_AddLoop2()
{
    for (j = 0; j <= 50; j++)
    {
        leds[0] = CRGB(237, 235, 63);
        leds[1] = CRGB(237, 236, 61);
        leds[2] = CRGB(239, 235, 61);
        leds[3] = CRGB(0, 222, 106);
        leds[4] = CRGB(2, 220, 108);
        leds[5] = CRGB(239, 235, 61);
        leds[6] = CRGB(239, 235, 61);
        leds[7] = CRGB(239, 235, 61);
        leds[8] = CRGB(237, 236, 61);
        leds[15] = CRGB(240, 234, 61);
        leds[16] = CRGB(239, 235, 61);
        leds[23] = CRGB(239, 235, 61);
        leds[24] = CRGB(2, 221, 106);
        leds[27] = CRGB(80, 62, 253);
        leds[28] = CRGB(80, 62, 253);
        leds[31] = CRGB(2, 221, 106);
        leds[32] = CRGB(2, 221, 106);
        leds[35] = CRGB(80, 62, 253);
        leds[36] = CRGB(80, 62, 253);
        leds[39] = CRGB(2, 221, 106);
        leds[40] = CRGB(239, 235, 61);
        leds[47] = CRGB(239, 235, 61);
        leds[48] = CRGB(239, 235, 61);
        leds[55] = CRGB(239, 235, 61);
        leds[56] = CRGB(239, 235, 61);
        leds[57] = CRGB(239, 235, 61);
        leds[58] = CRGB(239, 235, 61);
        leds[59] = CRGB(2, 221, 106);
        leds[60] = CRGB(2, 221, 106);
        leds[61] = CRGB(239, 235, 61);
        leds[62] = CRGB(239, 235, 61);
        leds[63] = CRGB(239, 235, 61);
        FastLED.show();
        for (i = 0; i <= 4; i++)
        {
            if (button_state == 1)
            {
                return 0;
            }
            else
            {
                delay(40);
            }
        }

        leds[9] = CRGB(239, 235, 61);
        leds[10] = CRGB(239, 235, 61);
        leds[13] = CRGB(240, 234, 61);
        leds[14] = CRGB(239, 235, 61);
        leds[17] = CRGB(239, 235, 61);
        leds[22] = CRGB(239, 235, 61);
        leds[25] = CRGB(2, 221, 106);
        leds[30] = CRGB(2, 221, 106);
        leds[33] = CRGB(2, 221, 106);
        leds[38] = CRGB(2, 221, 106);
        leds[41] = CRGB(239, 235, 61);
        leds[46] = CRGB(239, 235, 61);
        leds[49] = CRGB(239, 235, 61);
        leds[50] = CRGB(239, 235, 61);
        leds[53] = CRGB(239, 235, 61);
        leds[54] = CRGB(239, 235, 61);
        FastLED.show();
        if (button_state == 1)
        {
            return 0;
        }
        else
        {
            delay(60);
        }

        leds[0] = CRGB(81, 61, 252);
        leds[1] = CRGB(80, 62, 253);
        leds[2] = CRGB(78, 62, 255);
        leds[3] = CRGB(80, 61, 255);
        leds[4] = CRGB(80, 62, 253);
        leds[5] = CRGB(80, 62, 253);
        leds[6] = CRGB(80, 61, 255);
        leds[7] = CRGB(80, 62, 253);
        leds[8] = CRGB(78, 63, 253);
        leds[11] = CRGB(2, 220, 108);
        leds[12] = CRGB(4, 220, 104);
        leds[15] = CRGB(80, 62, 253);
        leds[16] = CRGB(80, 62, 253);
        leds[23] = CRGB(80, 62, 253);
        leds[24] = CRGB(80, 62, 253);
        leds[31] = CRGB(80, 62, 253);
        leds[32] = CRGB(80, 62, 253);
        leds[39] = CRGB(80, 62, 253);
        leds[40] = CRGB(80, 62, 253);
        leds[47] = CRGB(80, 62, 253);
        leds[48] = CRGB(80, 62, 253);
        leds[51] = CRGB(2, 221, 106);
        leds[52] = CRGB(2, 221, 106);
        leds[55] = CRGB(80, 62, 253);
        leds[56] = CRGB(80, 62, 253);
        leds[57] = CRGB(80, 62, 253);
        leds[58] = CRGB(80, 62, 253);
        leds[59] = CRGB(80, 62, 253);
        leds[60] = CRGB(80, 62, 253);
        leds[61] = CRGB(80, 62, 253);
        leds[62] = CRGB(80, 62, 253);
        leds[63] = CRGB(80, 62, 253);
        FastLED.show();
        for (i = 0; i <= 4; i++)
        {
            if (button_state == 1)
            {
                return 0;
            }
            else
            {
                delay(40);
            }
        }

        leds[9] = CRGB(82, 61, 255);
        leds[10] = CRGB(80, 62, 253);
        leds[11] = CRGB(82, 62, 253);
        leds[12] = CRGB(80, 62, 253);
        leds[13] = CRGB(80, 62, 251);
        leds[14] = CRGB(80, 62, 253);
        leds[17] = CRGB(80, 62, 253);
        leds[18] = CRGB(239, 235, 61);
        leds[19] = CRGB(2, 221, 106);
        leds[20] = CRGB(2, 221, 106);
        leds[21] = CRGB(239, 235, 61);
        leds[22] = CRGB(80, 62, 253);
        leds[25] = CRGB(80, 62, 253);
        leds[26] = CRGB(2, 221, 106);
        leds[29] = CRGB(2, 221, 106);
        leds[30] = CRGB(80, 62, 253);
        leds[33] = CRGB(80, 62, 253);
        leds[34] = CRGB(2, 221, 106);
        leds[37] = CRGB(2, 221, 106);
        leds[38] = CRGB(80, 62, 253);
        leds[41] = CRGB(80, 62, 253);
        leds[42] = CRGB(239, 235, 61);
        leds[43] = CRGB(2, 221, 106);
        leds[44] = CRGB(2, 221, 106);
        leds[45] = CRGB(239, 235, 61);
        leds[46] = CRGB(80, 62, 253);
        leds[49] = CRGB(80, 62, 253);
        leds[50] = CRGB(80, 62, 253);
        leds[51] = CRGB(80, 62, 253);
        leds[52] = CRGB(80, 62, 253);
        leds[53] = CRGB(80, 62, 253);
        leds[54] = CRGB(80, 62, 253);
        FastLED.show();
        for (i = 0; i <= 4; i++)
        {
            if (button_state == 1)
            {
                return 0;
            }
            else
            {
                delay(40);
            }
        }

        leds[18] = CRGB(80, 62, 253);
        leds[19] = CRGB(80, 62, 253);
        leds[20] = CRGB(80, 62, 253);
        leds[21] = CRGB(80, 62, 253);
        leds[26] = CRGB(80, 62, 253);
        leds[27] = CRGB(239, 235, 61);
        leds[28] = CRGB(239, 235, 61);
        leds[29] = CRGB(80, 62, 253);
        leds[34] = CRGB(80, 62, 253);
        leds[35] = CRGB(239, 235, 61);
        leds[36] = CRGB(239, 235, 61);
        leds[37] = CRGB(80, 62, 253);
        leds[42] = CRGB(80, 62, 253);
        leds[43] = CRGB(80, 62, 253);
        leds[44] = CRGB(80, 62, 253);
        leds[45] = CRGB(80, 62, 253);
        FastLED.show();
        for (i = 0; i <= 4; i++)
        {
            if (button_state == 1)
            {
                return 0;
            }
            else
            {
                delay(40);
            }
        }
        if (henshin_state == 0)
        {
            return 0;
        }
    }
}
