// 
// Libraries
//
#include <Servo.h> 

// Create a Servo Object
Servo servo_ruder;

// Setup
void setup(){

    //
    // Variables 
    //
    int ruder_servo = 9;

    //
    // Main
    //

    // Set control pin
    myServo.attach(ruder_servo);
}