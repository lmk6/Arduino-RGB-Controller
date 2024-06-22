#include <Arduino.h>
#include "../include/app.h"

void setup() {
  Serial.begin(115200);
  AppSetup();
}

void loop() {
  AppLoop();
}
