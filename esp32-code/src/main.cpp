#include <Arduino.h>
#include "Sensor.h"
#include "MotorA.h"
#include "MotorB.h"

Sensor lichtSensor;
MotorA motorA;
MotorB motorB;

const int schwelle = 2000;
bool schirmIstOffen = false;

Sensor lichtSensorLinks;
Sensor lichtSensorRechts;

int zielWinkel = 22; // Startwert

void setup() {
  Serial.begin(115200);
  lichtSensor.init(34);  // Hauptsensor für Auf-/Zuklappen
  lichtSensorLinks.init(35);  // Sensor für Sonnen-Nachführung (links)
  lichtSensorRechts.init(32); // Sensor für Sonnen-Nachführung (rechts)
  motorA.setup();
  motorB.setup();
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

  // Sonnen-Nachführung (vereinfachtes Beispiel)
  int lichtLinks = lichtSensorLinks.lesen();
  int lichtRechts = lichtSensorRechts.lesen();
  int delta = lichtLinks - lichtRechts;
  if (abs(delta) > 50) { // Schwelle für Nachführung
    if (delta > 0 && zielWinkel < 45) {
      zielWinkel += 1;
    } else if (delta < 0 && zielWinkel > 0) {
      zielWinkel -= 1;
    }
    motorB.stelleWinkel(zielWinkel);
  }

  delay(2000);
}
