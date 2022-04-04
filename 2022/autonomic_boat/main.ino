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
    int sensor_r = 0;
    int sensor_l = 0;

    //
    // Main
    //

    // Set control pin
    myServo.attach(ruder_servo);
}

// Loop
void loop(){

    // Get both sensor data
    sensor_l = ;
    sensor_r = ;

    // Get the distances
    sensor_l_distance = ;
    sensor_r_distance = ;

    // Calculate the turn degrees
    if(sensor_l_distance < 180){
        turn_left = 0.225 * (180 - sensor_l_distance);
    }
    if(sensor_r_distance < 180){
        turn_right = 0.225 * (180 - sensor_r_distance);
    }

}