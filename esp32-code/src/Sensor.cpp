#include "Sensor.h"
#include <Arduino.h>

void Sensor::init(int pin) {
  sensorPin = pin;
  pinMode(sensorPin, INPUT);
}

int Sensor::lesen() {
  return analogRead(sensorPin);
}
