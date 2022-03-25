// This script gives out the distance measure from the ultrasonic sensor to the Serial console

int trigger=9;
int echo=8;
long dauer=0;
long entfernung=0;
void setup()
{
    Serial.begin(9600);
    pinMode(trigger, OUTPUT);
    pinMode(echo, INPUT);
}

void loop()
{
    digitalWrite(trigger, LOW);
    delay(5);
    digitalWrite(trigger, HIGH);
    delay(10);
    digitalWrite(trigger, LOW);
    dauer = pulseIn(echo, HIGH);
    entfernung = dauer / 58.2;
        Serial.print(entfernung);
        Serial.println(" cm");
    delay(10);
} 