#include "MotorA.h"
#include <Arduino.h>

void MotorA::aufklappen() {
  Serial.println("⬆️  Schirm wird aufgeklappt (Motor A)");
}

void MotorA::zuklappen() {
  Serial.println("⬇️  Schirm wird zugeklappt (Motor A)");
}
