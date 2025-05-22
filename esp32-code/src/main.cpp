#include <Arduino.h>

const int lichtSensorPin = 34;  // GPIO34 = analoger Eingang
int lichtWert = 0;

void setup() {
  Serial.begin(115200);               // Serielle Verbindung starten
  pinMode(lichtSensorPin, INPUT);     // Sensor-Pin als Eingang
}

void loop() {
  lichtWert = analogRead(lichtSensorPin);  // Lichtwert auslesen (0–4095)
  Serial.print("Lichtwert: ");
  Serial.println(lichtWert);

  delay(2000);  // 2 Sekunden warten
}
