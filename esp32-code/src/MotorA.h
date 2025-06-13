#pragma once
#include <Arduino.h>

// Pin-Definitionen für TB6600 Schrittmotortreiber (anpassen je nach Verdrahtung)
#define MOTOR_A_DIR_PIN  25
#define MOTOR_A_STEP_PIN 26
#define MOTOR_A_STEPS_AUF 2000   // Beispielwert, anpassen!
#define MOTOR_A_STEPS_ZU 2000

class MotorA {
public:
    void setup();
    void aufklappen();
    void zuklappen();
private:
    void step(int steps, bool dir);
};
