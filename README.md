# Terra Shield

# Terra Shield ☀️🌙  
Ein intelligenter, solarbetriebener Sonnenschirm, der sich bei Sonneneinstrahlung automatisch öffnet und bei Dunkelheit schließt.

---

## 📦 Projektbeschreibung

**Ziel:**  
Ein automatischer Sonnenschirm, gesteuert durch einen ESP32, der:

- bei Sonnenlicht automatisch **aufklappt**
- bei Dunkelheit automatisch **zuklappt**
- mit Motor B zusätzlich **winkelverstellbar** ist (bis 45°) und sich nach der Sonne ausrichtet
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
- ⬜️ Motoren noch nicht angeschlossen (Typ wird später bestimmt)
- ⬜️ Solarstrom-Hardware noch nicht angeschlossen

---

## 🔩 Hardware-Annahmen bisher

- **ESP32 Dev Module**
- **Lichtsensoren** (mind. 3: Hauptsensor, links, rechts)
- **Motor A** (Auf-/Zuklappen)
- **Motor B** (Winkelverstellung, Nachführung)
- **Solarpanel** (mit Akku/Laderegler)
- Noch keine Motoren angeschlossen

---

## 🛠️ Nächste Schritte / ToDos

- Auswahl und Anschluss der Motoren (A & B)
- Implementierung der echten Motoransteuerung (je nach Motortyp)
- Test und Kalibrierung der Sonnen-Nachführung
- Integration der Solarladung und Stromüberwachung
- (Optional) Endschalter, Regensensor, Webinterface

---

## 📁 Projektstruktur (wichtigste Dateien)

- `esp32-code/src/main.cpp` – Hauptlogik für Sensoren und Motorsteuerung
- `esp32-code/src/MotorA.cpp/h` – Steuerung für Auf-/Zuklappen
- `esp32-code/src/MotorB.cpp/h` – Steuerung für Winkel/Sonnen-Nachführung
- `esp32-code/src/Sensor.cpp/h` – Lichtsensor-Handling
- `esp32-code/platformio.ini` – PlatformIO-Konfiguration

---

## ℹ️ Hinweise

- Die Motorsteuerung ist als Platzhalter vorbereitet und kann einfach angepasst werden, sobald die Hardware feststeht.
- Die Codebasis ist modular und für Erweiterungen vorbereitet.

