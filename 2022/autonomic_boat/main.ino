// 
// Libraries
//
#include <Servo.h> 

// Create a Servo Object
Servo servo_ruder;

//
// Variables
//
int trigger_left = 9;
int echo_left = 8;
long echo_time_left = 0;
int turn_left = 0;
int sensor_l_distance = 0;

int trigger_right = 7;
int echo_right = 6;
long echo_time_right = 0;
int turn_right = 0;
int sensor_r_distance = 0;

// Setup
void setup(){

    //
    // Variables 
    //
    int ruder_servo = 9;
    int sensor_r = 0;
    int sensor_l = 0;

    // pinModes
    pinMode(trigger_left, OUTPUT);
    pinMode(trigger_right, OUTPUT);
    pinMode(echo_left, INPUT);
    pinMode(echo_right, INPUT);

    //
    // Main
    //

    // Set control pin
    servo_ruder.attach(ruder_servo);

    // Serial Debugging
    Serial.begin(9600);
}

// Loop
void loop(){

    

    // Get both sensor data
    // Turn off both triggers
    digitalWrite(trigger_left, LOW);
    digitalWrite(trigger_right, LOW);
    // Send a trigger command on both sides
    delay(5);
    digitalWrite(trigger_left, HIGH);
    digitalWrite(trigger_right, HIGH);
    delay(10);
    digitalWrite(trigger_left, LOW);
    digitalWrite(trigger_right, LOW);

    // Get the time the ultrasonic needs to get back
    echo_time_left = pulseIn(echo_left, HIGH); 
    echo_time_right = pulseIn(echo_right, HIGH); 

    // Get the distances
    sensor_l_distance =  (echo_time_left / 2 ) / 29.1;
    sensor_r_distance =  (echo_time_right / 2 ) / 29.1;

    // Calculate the turn degrees
    if(sensor_l_distance < 180){
        turn_left = 0.225 * (180 - sensor_l_distance);
    }
    if(sensor_r_distance < 180){
        turn_right = 0.225 * (180 - sensor_r_distance);
    }

    // Debug report
    Serial.println("Debug report:");
    Serial.println("");
    Serial.println("Left");
    Serial.println("====");
    Serial.println("Echo Time: " + echo_time_left);
    Serial.println("Echo Distance: " + sensor_l_distance);
    Serial.println("Turn: " + turn_left);
    Serial.println("");
    Serial.println("Right");
    Serial.println("=====");
    Serial.println("Echo Time: " + echo_time_right);
    Serial.println("Echo Distance: " + sensor_l_distance);
    Serial.println("Turn: " + turn_right);

    delay(1000);
}