// This script changes the state of an LED on button press

// Variables
int led_pin = 3;
int button_pin = 5;
int led = 0; 

// Setup
void setup()
{
    // Led as output
    pinMode(led_pin, OUTPUT);
    // Button as input
    pinMode(button_pin, INPUT_PULLUP);
}

// Loop
void loop()
{
    // Check if the button is pressed
    if(digitalRead(button_pin)==0){

        // Check if the led is off
        if(led==0){
            // Turn the led on
            digitalWrite(led_pin, HIGH);
            // Change the state of the led Variable
            led = 1;
        }else{
            // Turn the led off
            digitalWrite(led_pin, LOW);
            // Change the state of the led Variable
            led = 0;
        }
        // Wait until the button is released
        while(digitalRead(button_pin)==0);
    }
}