#include <Arduino.h>
#include "../include/RGB_controller.h"
#include "../include/single_segment_controller.h"

void setup() {
  Serial.begin(115200);
  SetupPins();
  SetupSegment();
}

void loop() {
  action_loop();
  DisplayDigit(8);
}
