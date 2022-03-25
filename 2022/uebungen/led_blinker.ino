// This program blinks a led

// Variables
int led_pin = 3;

// Setup
void setup()
{
    // Set the led as an output
    pinMode(led_pin, OUTPUT);
}

// Loop
void loop()
{
    // Turn on the led
    digitalWrite(led_pin, HIGH);
    // Wait for 1 second
    delay(1000);
    // Turn off the led
    digitalWrite(led_pin, LOW);
    // Wait for 1 second
    delay(1000);
}