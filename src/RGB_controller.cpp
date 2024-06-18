#include <Arduino.h>
#include "../include/RGB_controller.h"

int mode = 0;

void turn_off();
void turn_white(), turn_red(), turn_blue(), turn_green();

void SetupPins() {
    pinMode(RED, OUTPUT);
    pinMode(BLUE, OUTPUT);
    pinMode(GREEN, OUTPUT);
    
    pinMode(BTN, INPUT_PULLUP);
}

void action_loop() {
    if (digitalRead(BTN) == LOW) {
        mode = mode + 1;
        delay(400);
    }
    if (mode == 0) {
        turn_off();
    }
    if (mode == 1) {
        turn_white();
    }
    if (mode == 2) {
        turn_red();
    }
    if (mode == 3) {
        turn_green();
    }
    if (mode == 4) {
        turn_blue();
    }
    if (mode == 5) {
        mode = 0;
    }
}

void turn_off() {
    analogWrite(BLUE, 0);
    analogWrite(GREEN, 0);
    analogWrite(RED, 0);
}

void turn_white() {
    analogWrite(GREEN, 1);
    analogWrite(BLUE, 1);
    analogWrite(RED, 1);
}

void turn_red() {
    analogWrite(GREEN, 0);
    analogWrite(BLUE, 0);
    analogWrite(RED, 1);
}

void turn_green() {
    analogWrite(GREEN, 1);
    analogWrite(BLUE, 0);
    analogWrite(RED, 0);
}

void turn_blue() {
    analogWrite(GREEN, 0);
    analogWrite(BLUE, 1);
    analogWrite(RED, 0);
}
