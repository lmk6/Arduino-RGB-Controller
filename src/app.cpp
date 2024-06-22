#include "../include/app.h"
#include "../include/RGB_controller.h"
#include "../include/single_segment_controller.h"

void AppSetup() {
    SetupPins();
    SetupSegment();
}

void AppLoop() {
    int32_t mode = RGBsModeCheck();
    DisplayDigit(mode);
}