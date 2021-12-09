void Demons_Eye(int model, int Eye)
{
    leds[0] = CRGB(0, 0, 0);
    leds[1] = CRGB(0, 0, 0);
    leds[2] = CRGB(0, 0, 0);
    leds[3] = CRGB(0, 0, 0);
    leds[4] = CRGB(0, 0, 0);
    leds[5] = CRGB(0, 0, 0);
    leds[6] = CRGB(0, 0, 0);
    leds[7] = CRGB(0, 0, 0);
    leds[8] = CRGB(104, 18, 154);
    leds[9] = CRGB(0, 0, 0);
    leds[10] = CRGB(0, 0, 0);
    leds[11] = CRGB(0, 0, 0);
    leds[12] = CRGB(0, 0, 0);
    leds[13] = CRGB(0, 0, 0);
    leds[14] = CRGB(0, 0, 0);
    leds[15] = CRGB(104, 18, 156);
    leds[16] = CRGB(156, 60, 213);
    leds[17] = CRGB(104, 18, 156);
    leds[18] = CRGB(0, 0, 0);
    leds[19] = CRGB(0, 0, 0);
    leds[20] = CRGB(0, 0, 0);
    leds[21] = CRGB(0, 0, 0);
    leds[22] = CRGB(104, 18, 156);
    leds[23] = CRGB(156, 60, 213);
    leds[24] = CRGB(106, 17, 156);
    leds[25] = CRGB(158, 58, 215);
    leds[26] = CRGB(0, 0, 0);
    leds[27] = CRGB(0, 0, 0);
    leds[28] = CRGB(0, 0, 0);
    leds[29] = CRGB(0, 0, 0);
    leds[30] = CRGB(156, 60, 213);
    leds[31] = CRGB(104, 18, 156);
    leds[32] = CRGB(0, 0, 0);
    leds[33] = CRGB(156, 60, 213);
    leds[34] = CRGB(156, 60, 213);
    leds[35] = CRGB(0, 0, 0);
    leds[36] = CRGB(0, 0, 0);
    leds[37] = CRGB(158, 59, 213);
    leds[38] = CRGB(156, 60, 213);
    leds[39] = CRGB(0, 0, 0);
    leds[40] = CRGB(0, 0, 0);
    leds[41] = CRGB(0, 0, 0);
    leds[42] = CRGB(104, 18, 156);
    leds[43] = CRGB(0, 0, 0);
    leds[44] = CRGB(0, 0, 0);
    leds[45] = CRGB(104, 18, 156);
    for (i = 46; i <= 63; i++)
    {
        leds[i] = CRGB(0, 0, 0);
    }
    FastLED.show();
    delay(80);
    for (i = 0; i <= 5; i++)
    {
        FastLED.setBrightness(50 - 10 * i);
        FastLED.show();
        delay(20);
    }
    for (i = 0; i <= 5; i++)
    {
        FastLED.setBrightness(10 * i);
        FastLED.show();
        delay(20);
    }
    leds[16] = CRGB(188, 128, 226);
    leds[23] = CRGB(188, 128, 226);
    leds[25] = CRGB(188, 128, 226);
    leds[30] = CRGB(188, 128, 226);
    leds[33] = CRGB(188, 128, 226);
    leds[34] = CRGB(188, 128, 226);
    leds[37] = CRGB(188, 128, 226);
    leds[38] = CRGB(188, 128, 226);
    FastLED.show();
    delay(45);
    leds[0] = CRGB(72, 10, 109);
    leds[7] = CRGB(72, 10, 109);
    leds[26] = CRGB(72, 10, 109);
    leds[29] = CRGB(74, 10, 109);
    leds[32] = CRGB(72, 10, 109);
    leds[39] = CRGB(72, 10, 109);
    FastLED.show();
    delay(45);
    leds[0] = CRGB(106, 17, 156);
    leds[7] = CRGB(106, 17, 156);
    leds[26] = CRGB(104, 18, 156);
    leds[29] = CRGB(104, 18, 156);
    leds[32] = CRGB(106, 17, 156);
    leds[39] = CRGB(104, 18, 156);
    FastLED.show();
    delay(Eye);
    if (model == 0)
    {
        leds[0] = CRGB(74, 12, 111);
        leds[7] = CRGB(74, 12, 111);
        leds[26] = CRGB(74, 12, 111);
        leds[29] = CRGB(74, 12, 111);
        leds[32] = CRGB(74, 12, 111);
        leds[39] = CRGB(74, 12, 111);
        FastLED.show();
        delay(45);
        leds[0] = CRGB(0, 0, 0);
        leds[7] = CRGB(0, 0, 0);
        leds[26] = CRGB(0, 0, 0);
        leds[29] = CRGB(0, 0, 0);
        leds[32] = CRGB(0, 0, 0);
        leds[39] = CRGB(0, 0, 0);
        FastLED.show();
        delay(45);
        FastLED.show();
        delay(45);
        FastLED.show();
        delay(45);
    }
    if (model == 1)
    {
        for (i = 0; i < 4; i++)
        {
            FastLED.setBrightness(30 - 10 * i);
            FastLED.show();
            delay(20);
        }
        for (i = 0; i < 4; i++)
        {
            FastLED.setBrightness(10 * i);
            FastLED.show();
            delay(20);
        }
        leds[0] = CRGB(74, 12, 111);
        leds[7] = CRGB(74, 12, 111);
        leds[26] = CRGB(74, 12, 111);
        leds[29] = CRGB(74, 12, 111);
        leds[32] = CRGB(74, 12, 111);
        leds[39] = CRGB(74, 12, 111);
        FastLED.show();
        delay(70);
        for (i = 0; i < 4; i++)
        {
            FastLED.setBrightness(30 - 10 * i);
            FastLED.show();
            delay(17);
        }
        for (i = 0; i < 4; i++)
        {
            FastLED.setBrightness(8 * i);
            FastLED.show();
            delay(17);
        }
        leds[0] = CRGB(0, 0, 0);
        leds[7] = CRGB(0, 0, 0);
        leds[26] = CRGB(0, 0, 0);
        leds[29] = CRGB(0, 0, 0);
        leds[32] = CRGB(0, 0, 0);
        leds[39] = CRGB(0, 0, 0);
        FastLED.show();
        delay(50);
        for (i = 0; i < 4; i++)
        {
            FastLED.setBrightness(24 - 8 * i);
            FastLED.show();
            delay(13);
        }
        for (i = 0; i < 4; i++)
        {
            FastLED.setBrightness(5 * i);
            FastLED.show();
            delay(13);
        }
        leds[8] = CRGB(0, 0, 0);
        leds[15] = CRGB(0, 0, 0);
        leds[17] = CRGB(0, 0, 0);
        leds[22] = CRGB(0, 0, 0);
        leds[24] = CRGB(0, 0, 0);
        leds[31] = CRGB(0, 0, 0);
        leds[42] = CRGB(0, 0, 0);
        leds[45] = CRGB(0, 0, 0);
        FastLED.show();
        delay(40);
        FastLED.setBrightness(0);
        FastLED.show();
        delay(40);
        FastLED.setBrightness(10);
        FastLED.show();
        delay(40);
        FastLED.setBrightness(max_bright);
    }
}