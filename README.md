# IoT Workshop Projekt des 3. Semesters

Dies ist das GitHub Repository für das `IoT Workshop Projekt` der Gruppe
[Tony Friedli](https://github.com/Chuksi), [Fabian Dünki](https://github.com/FabianDuenki), [Pedro Ribeiro](https://github.com/beyluta)
und [Simon Ledergerber](https://github.com/DeRealLedi) welches über die
Zeitspanne des 3. Semesters an der ZbW realisiert wurde.

# Bluetooth Beispielprogramm

Dieses Projekt zeigt, wie man ein 10-LED-Modul mit einem ESP32-Board steuert. Das Projekt wurde mit [PlatformIO](https://platformio.org/) erstellt.

## Anforderungen

Um dieses Projekt erfolgreich auszuführen, benötigen Sie:

1. **ESP32-Board**  
   Ein ESP32-Entwicklungsboard. Dieses Projekt ist mit den meisten Standard-ESP32-Boards kompatibel.

2. **10-LED-Modul**  
   Ein Modul mit 10 LEDs, die individuell gesteuert werden können
3. **Android-App "Serial Bluetooth Terminal"**  
   Laden Sie die App "Serial Bluetooth Terminal" aus dem Play Store herunter, um über Bluetooth mit dem ESP32 zu kommunizieren.

## Einrichtung

1. Installieren Sie PlatformIO in Ihrer bevorzugten Entwicklungsumgebung (z. B. VS Code).
2. Klonen oder laden Sie dieses Repository herunter.
3. Verbinden Sie das 10-LED-Modul mit Ihrem ESP32-Board.
4. Bauen Sie das Projekt mit PlatformIO und laden Sie es auf das ESP32-Board hoch.

## Nutzung

1. Schalten Sie das ESP32-Board ein. Es wird als Bluetooth-Gerät mit dem Namen **"ESP32"** angezeigt.
2. Verbinden Sie sich über die App "Serial Bluetooth Terminal" mit dem ESP32.
3. Senden Sie den Befehl **"run"**, um die LEDs in einer Sequenz leuchten zu lassen, die einem Tor entspricht, das sich öffnet und schliesst.
