#include <Arduino.h>
#include "Sensor.h"
#include "MotorA.h"

Sensor lichtSensor;
MotorA motorA;

const int schwelle = 2000;
bool schirmIstOffen = false;

void setup() {
  Serial.begin(115200);
  lichtSensor.init(34);  // Sensor vorbereiten
}

void loop() {
  int lichtWert = lichtSensor.lesen();
  Serial.print("Lichtwert: ");
  Serial.println(lichtWert);

  if (lichtWert > schwelle && !schirmIstOffen) {
    motorA.aufklappen();
    schirmIstOffen = true;
  }

  if (lichtWert <= schwelle && schirmIstOffen) {
    motorA.zuklappen();
    schirmIstOffen = false;
  }

  delay(2000);
}
