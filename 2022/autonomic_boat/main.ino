// 
// Libraries
//
#include <Servo.h> 


// Setup
void setup(){

    //
    // Variables 
    //
    int ruder_servo = 9;

    //
    // Main
    //
    // Create a Servo Object
    Servo servo_ruder;

    // Set control pin
    myServo.attach(ruder_servo);
}
