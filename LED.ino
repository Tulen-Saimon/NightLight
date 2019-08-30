void one_color_all(int cred, int cgrn, int cblu) {       //-SET ALL LEDS TO ONE COLOR
  for (int i = 0 ; i < LED_COUNT; i++ ) {
    leds[i].setRGB( cred, cgrn, cblu);
  }  
}

void one_color_all_HSV(int cred, int cgrn, int cblu) {       //-SET ALL LEDS TO ONE COLOR
  for (int i = 0 ; i < LED_COUNT; i++ ) {
    leds[i] = CHSV( cred, cgrn, cblu);
  }
}




void one_color_allHSV(int ahue) {    //-SET ALL LEDS TO ONE COLOR (HSV)
  for (int i = 0 ; i < LED_COUNT; i++ ) {
    leds[i] = CHSV(ahue, thissat, 255);
  }
}

void change_mode(int newmode, int webhue) {
  thissat = 255;
  switch (newmode) {
    case 0: thishue = webhue; one_color_all_HSV(thishue, thissat, max_bright); LEDS.show(); break; //---ALL OFF
    case 1: one_color_all(255, 255, 255); LEDS.show(); break; //---ALL ON
    case 2: thisdelay = 20; break;                      //---STRIP RAINBOW FADE
    case 3: thisdelay = 150; thisstep = 2; break;       //---RAINBOW LOOP
    case 4: thisdelay = 20; break;                      //---RANDOM BURST
    case 5: thisdelay = 20; thishue = webhue; break;         //---CYLON v1
    case 6: thisdelay = 40; thishue = webhue; break;         //---CYLON v2
    case 7: thisdelay = 40; thishue = webhue; break;         //---POLICE LIGHTS SINGLE
    case 8: thisdelay = 40; thishue = webhue; break;         //---POLICE LIGHTS SOLID
    case 9: thishue = webhue; break;         //---STRIP FLICKER
    case 10: thisdelay = 150; thishue = webhue; break;        //---PULSE COLOR BRIGHTNESS
    case 11: thisdelay = 50; thishue = webhue; break;        //---PULSE COLOR SATURATION
    case 12: thisdelay = 60; thishue = webhue; break;      //---VERTICAL SOMETHING
    case 13: thisdelay = 100; thishue = webhue; break;                    //---CELL AUTO - RULE 30 (RED)
    case 14: thishue = webhue; break;
    case 15: thisdelay = 80; break;                     //---MARCH RWB COLORS
    case 16: thisdelay = 60; thishue = webhue; break;       //---RADIATION SYMBOL
    case 17: thisdelay = 60; thishue = webhue; break;
    //---PLACEHOLDER FOR COLOR LOOP VAR DELAY VARS
    case 19: thisdelay = 35; thishue = webhue; break;      //---SIN WAVE BRIGHTNESS
    case 20: thisdelay = 100; thishue = webhue; break;       //---POP LEFT/RIGHT
    case 21: thisdelay = 100; thishue = webhue; break;     //---QUADRATIC BRIGHTNESS CURVE
    //---PLACEHOLDER FOR FLAME VARS
    case 23: thisdelay = 50; thisstep = 15; break;      //---VERITCAL RAINBOW
    case 24: thisdelay = 50; break;                     //---PACMAN
    case 25: thisdelay = 35; break;                     //---RANDOM COLOR POP
    case 26: thisdelay = 25; thishue = webhue; break;        //---EMERGECNY STROBE
    case 27: thisdelay = 25; thishue = webhue; break;        //---RGB PROPELLER
    case 28: thisdelay = 100; thishue = webhue; break;       //---KITT
    case 29: thisdelay = 50; thishue = webhue; break;       //---MATRIX RAIN
    case 30: thisdelay = 5; break;                      //---NEW RAINBOW LOOP
    case 31: thisdelay = 100; break;                    //---MARCH STRIP NOW CCW
    case 32: thisdelay = 100; break;                    //---MARCH STRIP NOW CCW
    case 33: thisdelay = 50; thishue = webhue; break;                    // colorWipe
    case 34: thisdelay = 50; break;                     // CylonBounce
    case 35: thisdelay = 15; break;                     // Fire
    case 36: thisdelay = 50; break;                     // NewKITT
    case 37: thisdelay = 20; break;                     // rainbowCycle
    case 38: thisdelay = 10; break;                     // rainbowTwinkle
    case 39: thisdelay = 50; break;                     // RunningLights
    case 40: thisdelay = 0; break;                      // Sparkle
    case 41: thisdelay = 20; break;                     // SnowSparkle
    case 42: thisdelay = 50; break;                     // theaterChase
    case 43: thisdelay = 50; break;                     // theaterChaseRainbow
    case 44: thisdelay = 100; break;                    // Strobe

    case 99: one_color_all(10, 0, 0); LEDS.show(); break; //---ALL OFF
    case 100: one_color_all(0, 0, 0); LEDS.show(); break; //---ALL OFF
    case 101: one_color_all(255, 0, 0); LEDS.show(); break; //---ALL RED
    case 102: one_color_all(0, 255, 0); LEDS.show(); break; //---ALL GREEN
    case 103: one_color_all(0, 0, 255); LEDS.show(); break; //---ALL BLUE
    case 104: one_color_all(255, 255, 0); LEDS.show(); break; //---ALL COLOR X
    case 105: one_color_all(0, 255, 255); LEDS.show(); break; //---ALL COLOR Y
    case 106: one_color_all(255, 0, 255); LEDS.show(); break; //---ALL COLOR Z
  }
  //bouncedirection = 0;
  //one_color_all(0, 0, 0);
  ledMode = newmode;
}
