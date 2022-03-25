// This script gives out the distance measure from the ultrasonic sensor to the Serial console

// Variables
int trigger=9;
int echo=8;
long dauer=0;
long entfernung=0;

// Setup
void setup()
{
    // Set trigger pin to output
    pinMode(trigger, OUTPUT);
    // Set echo pin to input
    pinMode(echo, INPUT);
    // Serial connection
    Serial.begin(9600);
}

// Loop
void loop()
{
    // turn off trigger signal
    digitalWrite(trigger, LOW);
    // wait 5 microseconds
    delay(5);
    // send trigger signal
    digitalWrite(trigger, HIGH);
    // wait 10 microseconds
    delay(10);
    // turn off trigger signal
    digitalWrite(trigger, LOW);
    // get the time of the echo signal
    dauer = pulseIn(echo, HIGH);
    // calculate the distance
    entfernung = dauer / 58.2;
    // print the distance
    Serial.print(entfernung);
    Serial.println(" cm");
    // Wait 10 microseconds
    delay(10);
} 