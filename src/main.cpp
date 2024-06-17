#include <Arduino.h>
#include "../include/RGB_controller.h"

void setup() {
  Serial.begin(115200);
  setup_pins();
}

void loop() {
  action_loop();
}
