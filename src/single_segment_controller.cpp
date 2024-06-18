#include<Arduino.h>
#include "../include/single_segment_controller.h"
#include "SevSeg.h"

SevSeg sevseg;

byte segmentPins[] = {
        A_PIN,
        B_PIN,
        C_PIN,
        D_PIN,
        E_PIN,
        F_PIN,
        G_PIN,
        DP_PIN
    };

void SetupSegment() {
    byte numDigits = 1;
    bool resistorsOnSegments = true;
    byte digitPins[] = {};
    byte hardwareConfig = COMMON_CATHODE;
    sevseg.begin(hardwareConfig, numDigits, digitPins, segmentPins, resistorsOnSegments);
    sevseg.setBrightness(90);
}

void DisplayDigit(int32_t digit) {
    sevseg.setNumber(digit);
    sevseg.refreshDisplay();
}
