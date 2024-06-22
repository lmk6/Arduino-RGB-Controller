#ifndef RGB_CONTROLLER_H
#define RGB_CONTROLLER_H

#include <stdint.h>

#define GREEN 3
#define BLUE 6
#define RED 5
#define BTN 2

void SetupPins();
int32_t RGBsModeCheck();
#endif