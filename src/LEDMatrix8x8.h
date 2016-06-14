/*
 * SimpleSD - A tool for working with SD module for Arduino
 * By Vasyl Prystoynyy
 */

#ifndef __LEDMatrix8x8_H__
#define __LEDMatrix8x8_H__

#include <Arduino.h>


//Class for working with SD module.
class LEDMatrix8x8 {
private:
        const static int ZEILEN_PIN_COUNT;
        const static int SPALTEN_PIN_COUNT;
        int zeilen[8];
        int spalten[8];
public:
        LEDMatrix8x8(int zeilen[8], int spalten[8]);
        void RenderSymbols(char symbol);
};
#endif
