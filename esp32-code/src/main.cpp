#include <Arduino.h>

const int lichtSensorPin = 34;
int lichtWert = 0;
const int schwelle = 2000; // Beispielschwelle – anpassen nach Test

bool schirmIstOffen = false;

void setup() {
  Serial.begin(115200);
  pinMode(lichtSensorPin, INPUT);
}

void loop() {
  lichtWert = analogRead(lichtSensorPin);
  Serial.print("Lichtwert: ");
  Serial.println(lichtWert);

  if (lichtWert > schwelle && !schirmIstOffen) {
    Serial.println("☀️  Sonne erkannt → Schirm aufklappen");
    schirmIstOffen = true;
    // Hier später: Motor aktivieren zum Aufklappen
  }

  if (lichtWert <= schwelle && schirmIstOffen) {
    Serial.println("🌙 Zu dunkel → Schirm zuklappen");
    schirmIstOffen = false;
    // Hier später: Motor aktivieren zum Zuklappen
  }

  delay(2000); // alle 2 Sekunden prüfen
}
