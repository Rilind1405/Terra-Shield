#include "MotorB.h"
#include <Arduino.h>

void MotorB::stelleWinkel(int grad) {
    Serial.print("Motor B stellt Winkel auf: ");
    Serial.print(grad);
    Serial.println(" Grad");
    // Hier später die echte Motorsteuerung einfügen
}
