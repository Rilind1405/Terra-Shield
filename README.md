# Terra Shield

# Terra Shield ☀️🌙  
Ein intelligenter, solarbetriebener Sonnenschirm, der sich bei Sonneneinstrahlung automatisch öffnet und bei Dunkelheit schließt.

---

## 📦 Projektbeschreibung

**Ziel:**  
Ein automatischer Sonnenschirm, gesteuert durch einen ESP32 (Arduino Nano ESP32), der:

- bei Sonnenlicht automatisch **aufklappt** (Schrittmotor, TB6600)
- bei Dunkelheit automatisch **zuklappt**
- mit Motor B zusätzlich **winkelverstellbar** ist (bis 45°) und sich nach der Sonne ausrichtet (DC-Getriebemotor mit Encoder)
- komplett **solar betrieben** werden soll

---

## 🔧 Aktueller Stand (13. Juni 2025)

- ✅ ESP32-Projekt mit PlatformIO erfolgreich eingerichtet
- ✅ Lichtsensor (LDR) wird ausgelesen
- ✅ Schwellenwert definiert, um Helligkeit zu bewerten
- ✅ Serielle Ausgabe simuliert den Auf-/Zuklapp-Vorgang
- ✅ Logik zur Schirmsteuerung vorbereitet (später Motoransteuerung)
- ✅ Vorbereitung für Motor B (Sonnen-Nachführung, Winkelsteuerung 0–45°)
- ✅ Zwei zusätzliche Lichtsensoren für Sonnen-Nachführung im Code vorbereitet
- ✅ Pin-Definitionen und Setup für Motoren (Schrittmotor/TB6600, DC-Motor/Encoder) vorbereitet
- ✅ Kompatibel für Arduino Nano ESP32 (Pin-Definitionen leicht anpassbar)
- ⬜️ Motoren und Solarpanel noch nicht angeschlossen

---

## 🔩 Hardware (Stand: bestellt)

- **Arduino Nano ESP32 (mit Headers)**
- **Schrittmotor 23H2A8425 (NEMA 23, 1.8Nm, 1.8°)**
  - TB6600 Schrittmotortreiber
- **DC-Getriebemotor RHE158-12-200 (12V, 1Nm, 199:1, Encoder)**
  - L298N oder BTS7960 Motortreiber
- **Lichtsensoren** (mind. 3: Hauptsensor, links, rechts)
- **Solarpanel** (mit Akku/Laderegler)

---

## 🛠️ Nächste Schritte / ToDos

- Anschluss und Test der Motoren (A & B) an den ESP32
- Implementierung der echten Motoransteuerung (TB6600, L298N/BTS7960, Encoder-Auswertung)
- Test und Kalibrierung der Sonnen-Nachführung
- Integration der Solarladung und Stromüberwachung
- (Optional) Endschalter, Regensensor, Webinterface

---

## 📁 Projektstruktur (wichtigste Dateien)

- `esp32-code/src/main.cpp` – Hauptlogik für Sensoren und Motorsteuerung
- `esp32-code/src/MotorA.cpp/h` – Steuerung für Auf-/Zuklappen (Schrittmotor)
- `esp32-code/src/MotorB.cpp/h` – Steuerung für Winkel/Sonnen-Nachführung (DC-Motor mit Encoder)
- `esp32-code/src/Sensor.cpp/h` – Lichtsensor-Handling
- `esp32-code/platformio.ini` – PlatformIO-Konfiguration

---

## ℹ️ Hinweise

- Die Motorsteuerung ist als Platzhalter vorbereitet und kann einfach angepasst werden, sobald die Hardware feststeht.
- Die Codebasis ist modular und für Erweiterungen vorbereitet.
- Pin-Definitionen für den Arduino Nano ESP32 sind im Code kommentiert und können bei Bedarf angepasst werden.

