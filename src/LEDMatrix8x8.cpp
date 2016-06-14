#include "LEDMatrix8x8.h"



const int LEDMatrix8x8::SPALTEN_PIN_COUNT = 8;
const int LEDMatrix8x8::ZEILEN_PIN_COUNT = 8;


LEDMatrix8x8::LEDMatrix8x8(int zeilen[8], int spalten[8]){
        for(int i = 0; i < this->SPALTEN_PIN_COUNT; i++) {
                this->spalten[i] = spalten[i];
                pinMode(this->spalten[i], OUTPUT);
                digitalWrite(this->spalten[i], LOW);
        }
        for(int i =0; i< this->ZEILEN_PIN_COUNT; i++) {
                this->zeilen[i] = zeilen[i];
                pinMode(this->zeilen[i], OUTPUT);
                digitalWrite(this->zeilen[i], LOW);
        }
}

void LEDMatrix8x8::RenderSymbols(char symbol){
        //render
}
