#include "MotorA.h"
#include <Arduino.h>

void MotorA::setup() {
    pinMode(MOTOR_A_DIR_PIN, OUTPUT);
    pinMode(MOTOR_A_STEP_PIN, OUTPUT);
}

void MotorA::aufklappen() {
    step(MOTOR_A_STEPS_AUF, true);
}

void MotorA::zuklappen() {
    step(MOTOR_A_STEPS_ZU, false);
}

void MotorA::step(int steps, bool dir) {
    digitalWrite(MOTOR_A_DIR_PIN, dir);
    for (int i = 0; i < steps; i++) {
        digitalWrite(MOTOR_A_STEP_PIN, HIGH);
        delayMicroseconds(500);
        digitalWrite(MOTOR_A_STEP_PIN, LOW);
        delayMicroseconds(500);
    }
}
