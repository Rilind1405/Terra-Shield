#pragma once
#include <Arduino.h>

// Pin-Definitionen für DC-Motor mit Encoder (anpassen je nach Verdrahtung)
#define MOTOR_B_IN1_PIN 27
#define MOTOR_B_IN2_PIN 14
#define MOTOR_B_PWM_PIN 12
#define MOTOR_B_ENCODER_A 33
#define MOTOR_B_ENCODER_B 32
#define MOTOR_B_PWM_KANAL 0

class MotorB {
public:
    void setup();
    void stelleWinkel(int grad); // Setzt den Schirm auf den gewünschten Winkel (0-45°)
    int getWinkel(); // Gibt den aktuellen Winkel zurück
private:
    int zielWinkel = 0;
    int aktuellerWinkel = 0;
    void fahreZuWinkel(int ziel);
    void leseEncoder();
};
