// This script changes the state of an LED on button press

int led_pin = 3;
int button_pin = 5;
int led = 0; 
  
void setup()
{
    pinMode(led_pin, OUTPUT);
    pinMode(button_pin, INPUT_PULLUP);
    Serial.begin(9600);
}

void loop()
{
    if(digitalRead(button_pin)==0){
        if(led==0){
            digitalWrite(led_pin, HIGH);
            led = 1;
        }
        else{
            digitalWrite(led_pin, LOW);
            led = 0;
        }
        while(digitalRead(button_pin)==0);
    }
}