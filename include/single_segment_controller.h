#ifndef SIN_SEG
#define SIN_SEG

#include <stdint.h>

#define G_PIN 4
#define F_PIN 7
#define A_PIN 8
#define B_PIN 9
#define E_PIN 10
#define D_PIN 11
#define C_PIN 12
#define DP_PIN 13

void SetupSegment();
void DisplayDigit(int32_t digit);
#endif
