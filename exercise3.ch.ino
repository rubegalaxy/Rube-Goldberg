/*Write a setup function that makes one servo turn the same direction 
 * for 3 seconds.  The other servo should turn the opposite direction 
 * for the first 1.5 seconds and the same direction for the second 1.5 seconds.  
 * Then, make both servos stop
*/

#include <Servo.h> //Initialize servo library

Servo servoLeft;  //Declare left and right servo
Servo servoRight;

void setup() {
  servoLeft.attach(13);   //attach left servo to pin 13
  servoRight.attach(12);  //attach left servo to pin 12


//robot moves backward
  servoLeft.writeMicroseconds(1300); 
  servoRight.writeMicroseconds(1700);
  delay(1500); //delay 1500 ms

 //robot moves turns to the right
  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1300);
  delay(1500);//delay 1500 ms

  //stop robots 
    servoLeft.writeMicroseconds(1500);
  servoRight.writeMicroseconds(1500);

  

}

void loop() {
  // put your main code here, to run repeatedly:

}
