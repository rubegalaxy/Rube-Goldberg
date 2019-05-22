//Robotics with the BOE Shield - RoamingWithWhiskers
//Go forward, Back up and turn if whiskers indicate BOE Shield-Bot bynoed 
//into something.

#include <Servo.h>    // initiazlize servo library

Servo servoLeft;      //Initialize variables for servo
Servo servoRight;

void setup() {
  pinMode(7, INPUT); //declare pins as input
  pinMode(5, INPUT);

  tone(4, 1047, 1000); //1047 hz tone for 1000ms
  delay(1000);  // delay 1000ms

  servoLeft.attach(13);  //attach pins to servo
  servoRight.attach(12);

}

void loop() {
  byte wLeft = digitalRead(5);  // assign pin to whiskers to read value
  byte wRight = digitalRead(7);

  if((wLeft == 0) && (wRight == 0))  //if nothing is detected
  {
    servoLeft.detach();
    servoRight.detach();
  }
  else if(wLeft == 0)  // if right is detected 
  {
    backward(1000);
    turnRight(800);
  }
  else if(wRight == 0)  //if left is detected
  {
    backward(1000);
    turnLeft(400);
  }
  else   //no object is detected
  {
    foward(20);
  }
}


void foward(int time) //declare function and variable 'time' 
{
  servoLeft.writeMicroseconds(1700);  //left wheel: full speed counterclockwise
  servoRight.writeMicroseconds(1300); //right wheel: full speed clockwise
  delay(time); // delay for time what whisker is detected or not detected 
}

void turnLeft(int time)//declare function and variable 'time'
{
  servoLeft.writeMicroseconds(1300); //left wheel: full speed clockwise
  servoRight.writeMicroseconds(1300); //right wheel: full speed clockwise
  delay(time); // delay for time what whisker is detected or not detected 
}

void turnRight(int time)//declare function and variable 'time'
{
  servoLeft.writeMicroseconds(1700);//left wheel: full speed counterclockwise
  servoRight.writeMicroseconds(1700);//right wheel: full speed counterclockwise
  delay(time); // delay for time what whisker is detected or not detected 
}

void backward(int time) //declare function and variable 'time'
{
  servoLeft.writeMicroseconds(1300);//left wheel: full speed clockwise
  servoRight.writeMicroseconds(1700);//right wheel: full speed counterclockwise
  delay(time); // delay for time what whisker is detected or not detected 
}



