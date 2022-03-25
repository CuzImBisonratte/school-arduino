#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int ledPin = 8;
int buttonPin = 7;
int test1 = 0;
int test2 = 0;
int test3 = 0;
int test4 = 0;
int test5 = 0;
int test6 = 0;
int test7 = 0;
int test8 = 0;
int test9 = 0;
int test10 = 0;

void setup() {
  //pins definieren
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);

  //LCD definieren
  lcd.begin(16, 2);

  //Hauptschleife
  for(int pass=1;pass<11;pass++){
    //warte auf Knopf gedrückt
    while(digitalRead(buttonPin)==1){}
  
    //LED an
    digitalWrite(ledPin,HIGH);
  
    //zufällige Wartezeit
    delay(random(4,12)*random(750,1250));
  
    //LED aus
    digitalWrite(ledPin,LOW);
  
    //speichere Laufzeit vor Reaktion
    int LED = millis();
  
    //warte auf Knopf nichtmehr gedrückt
    while(digitalRead(buttonPin)==0){}
  
    //speichere Laufzeit nach Reaktion
    int pressed = millis();
  
    //berechne Reaktionszeit
    int difference = pressed - LED;

    //Ausgabe
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Testvorgang:" + String(pass) + "/10");
    lcd.setCursor(0, 1);
    lcd.print("Zeit: " + String(difference) + "ms");

    //speichern
    switch(pass){
      case 1: 
        test1 = difference;
        break;  
      case 2: 
        test2 = difference;
        break;  
      case 3: 
        test3 = difference;
        break;  
      case 4: 
        test4 = difference;
        break;
      case 5: 
        test5 = difference;
        break;  
      case 6: 
        test6 = difference;
        break;  
      case 7: 
        test7 = difference;
        break;  
      case 8: 
        test8 = difference;
        break;  
      case 9: 
        test9 = difference;
        break;  
      case 10: 
        test10 = difference;
        break;  
    }
  }
  //Dankesnachricht
  lcd.clear();
  lcd.setCursor(2, 0);
  lcd.print("Danke f\365rs");
  lcd.setCursor(2, 1);
  lcd.print("Mitmachen :)");

  //Wartezeit
  delay(10000);

  //Ausgabe der Werte
  while(true){
    lcd.setCursor(0, 1);
    lcd.print("Runde 1: "+ String(test1) +"ms");
    delay(3000);
    lcd.setCursor(0, 0);
    lcd.print("Runde 1: "+ String(test1) +"ms");
    lcd.setCursor(0, 1);
    lcd.print("Runde 2: "+ String(test2) +"ms");
    delay(3000);
    lcd.setCursor(0, 0);
    lcd.print("Runde 2: "+ String(test2) +"ms");
    lcd.setCursor(0, 1);
    lcd.print("Runde 3: "+ String(test3) +"ms");
    delay(3000);
    lcd.setCursor(0, 0);
    lcd.print("Runde 3: "+ String(test3) +"ms");
    lcd.setCursor(0, 1);
    lcd.print("Runde 4: "+ String(test4) +"ms");
    delay(3000);
    lcd.setCursor(0, 0);
    lcd.print("Runde 4: "+ String(test4) +"ms");
    lcd.setCursor(0, 1);
    lcd.print("Runde 5: "+ String(test5) +"ms");
    delay(3000);
    lcd.setCursor(0, 0);
    lcd.print("Runde 5: "+ String(test5) +"ms");
    lcd.setCursor(0, 1);
    lcd.print("Runde 6: "+ String(test6) +"ms");
    delay(3000);
    lcd.setCursor(0, 0);
    lcd.print("Runde 6: "+ String(test6) +"ms");
    lcd.setCursor(0, 1);
    lcd.print("Runde 7: "+ String(test7) +"ms");
    delay(3000);
    lcd.setCursor(0, 0);
    lcd.print("Runde 7: "+ String(test7) +"ms");
    lcd.setCursor(0, 1);
    lcd.print("Runde 8: "+ String(test8) +"ms");
    delay(3000);
    lcd.setCursor(0, 0);
    lcd.print("Runde 8: "+ String(test8) +"ms");
    lcd.setCursor(0, 1);
    lcd.print("Runde 9: "+ String(test9) +"ms");
    delay(3000);
    lcd.setCursor(0, 0);
    lcd.print("Runde 9: "+ String(test9) +"ms");
    lcd.setCursor(0, 1);
    lcd.print("Runde 10: "+ String(test10) +"ms");
    delay(3000);
    lcd.setCursor(0, 0);
    lcd.print("Runde 10: "+ String(test10) +"ms");
  }
}

//loop wird nicht benötigt, da man zum Neustarten den reset drücken kann
void loop() {}
