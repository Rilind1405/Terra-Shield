#include "MotorB.h"
#include <Arduino.h>

void MotorB::setup() {
    pinMode(MOTOR_B_IN1_PIN, OUTPUT);
    pinMode(MOTOR_B_IN2_PIN, OUTPUT);
    ledcSetup(MOTOR_B_PWM_KANAL, 20000, 8); // 20kHz, 8 Bit
    ledcAttachPin(MOTOR_B_PWM_PIN, MOTOR_B_PWM_KANAL);
    pinMode(MOTOR_B_ENCODER_A, INPUT_PULLUP);
    pinMode(MOTOR_B_ENCODER_B, INPUT_PULLUP);
    // Encoder-Interrupts können hier vorbereitet werden
}

void MotorB::stelleWinkel(int grad) {
    zielWinkel = grad;
    fahreZuWinkel(zielWinkel);
}

int MotorB::getWinkel() {
    return aktuellerWinkel;
}

void MotorB::fahreZuWinkel(int ziel) {
    // Pseudocode: Drehe Motor bis aktuellerWinkel == ziel
    // Richtung und PWM setzen, Encoder auswerten
    // Hier später die echte Steuerung implementieren
}

void MotorB::leseEncoder() {
    // Hier Encoder auswerten und aktuellerWinkel berechnen
    // Interrupt-Service-Routine kann vorbereitet werden
}
