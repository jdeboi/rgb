// rgb
// daisy-chainable lighting module
// http://github.com/mcous/rgb
//
// copyright 2013 michael cousins
// shared under the terms of the gpl v3 licence

// includes (only ones necessary for header file)
#include "TLC5940.h"

// global objects
TLC5940 driver;

// function prototypes
void rgb(uint16_t r, uint16_t g, uint16_t b);
void cosineVal(uint8_t* v, uint16_t t);