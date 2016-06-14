#include "../src/LEDMatrix8x8.h"
#include <LEDMatrix8x8.h>

/*
 *  Render symbols by LED Matrix module
 */

const int zeilen[8] = {10,18,9,13,2,8,3,6};
const int spalten[8] = {19,4,5,11,7,12,17,16};

void setup()
{
        LEDMatrix8x8 ledMatrix = LEDMatrix8x8(zeilen, spalten);
        ledMatrix.RenderSymbols('A');
}

void loop()
{
}
