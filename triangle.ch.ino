/* Robotics with the BOE Shield - Chapter 4, project 2 - Triangle
 BOE Shield-Bot navigates a triangle with 1 yard sides and 120
 degree angles. Go straight 1 yard, turn 120 degrees, repeat 3 times*/
#include <Servo.h> // Include servo library
Servo servoLeft; // Declare left and right servos
Servo servoRight;
void setup() // Built-in initialization block
{
  
servoLeft.attach(13); // Attach left signal to pin 13
servoRight.attach(12); // Attach right signal to pin 12

// Full speed forward
servoLeft.writeMicroseconds(1700); // Left wheel counterclockwise
servoRight.writeMicroseconds(1300); // Right wheel clockwise slower
delay(2220);

// Turn left 120 degrees
servoLeft.writeMicroseconds(1300); // Left wheel counterclockwise
servoRight.writeMicroseconds(1300); // Right wheel clockwise slower
delay(957);

// Full speed forward
servoLeft.writeMicroseconds(1700); // Left wheel counterclockwise
servoRight.writeMicroseconds(1300); // Right wheel clockwise slower
delay(2200);

// Turn left 120 degrees
servoLeft.writeMicroseconds(1300); // Left wheel counterclockwise
servoRight.writeMicroseconds(1300); // Right wheel clockwise slower
delay(1048);                                                                                                                                         

// Full speed forward
servoLeft.writeMicroseconds(1700); // Left wheel counterclockwise
servoRight.writeMicroseconds(1300); // Right wheel clockwise slower
delay(2200);



servoLeft.detach(); // Stop sending servo signals
servoRight.detach();
}
void loop() // Main loop auto-repeats
{ // Nothing needs repeating
}
