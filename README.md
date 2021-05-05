# Schul-Reaktionstester
Dies ist das Repo zu einem Schulprojekt, bei dem wir ideen zu einem Reaktionstestgerät bringen sollten.


## Code
Der Code der genutzt wird, steht in der Datei Projekt.ino


## Material
Material|Menge
-|-
16x2 LCD|1x
Drucktaster|2x
Potentiometer|1x
Arduino (z.B. Uno)|1x
Wiederstand(220Ω)|2x
LED|1x
Steckplatine|1x
Steckplatine klein|1x


## Aufbau
Hier einmal der Aufbau als Text erklärt, Bildlich in Aufbau.png

<ol>
<li>Wir legen alle Materialien bereit</li>
<li>Jetzt schliessen wir das LCD an</li>
</ol>

Port 1|Port 2|Wiederstand
-|-|-
Arduino-5V|LCD-VCC|
Arduino-5V|LCD-LED(+)|220Ω
Arduino-GND|LCD-GND|
Arduino-GND|LCD-LED(-)|
Arduino-GND|LCD-RW|
Arduino-Digital-12|LCD-RS|
Arduino-Digital-11|LCD-E|
Arduino-Digital-5|LCD-DB4|
Arduino-Digital-4|LCD-DB5|
Arduino-Digital-3|LCD-DB6|
Arduino-Digital-2|LCD-DB7|
Potentiometer-Wischer|LCD-VD|
Potentiometer-Anschluss 1|Arduino-5V|
Potentiometer-Anschluss 2|Arduino-GND|
Arduino-Digital-8|LED-Anode|
Arduino-GND|LED-Kathode|220Ω
