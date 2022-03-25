// This program blinks a led

int led_pin = 3;

void setup()
{
  pinMode(led_pin, OUTPUT);
}

void loop()
{
  digitalWrite(led_pin, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(led_pin, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}