//Robotics with the BOE Shield - RoamingWithWhiskers
//Go forward, Back up and turn if whiskers indicate BOE Shield-Bot bynoed 
//into something.

#include <Servo.h>

Servo servoLeft;
Servo servoRight;

void setup() {
  pinMode(7, INPUT);
  pinMode(5, INPUT);

  tone(4, 1047, 1000);
  delay(1000);

  servoLeft.attach(13);
  servoRight.attach(12);

}

void loop() {
  byte wLeft = digitalRead(5);
  byte wRight = digitalRead(7);

  if((wLeft == 0) && (wRight == 0))
  {
    servoLeft.detach();
    servoRight.detach();
  }
  else if(wLeft == 0)
  {
    backward(1000);
    turnRight(800);
  }
  else if(wRight == 0)
  {
    backward(1000);
    turnLeft(400);
  }
  else
  {
    foward(20);
  }
}


void foward(int time)
{
  servoLeft.writeMicroseconds(1700);
  servoRight.writeMicroseconds(1300);
  delay(time);
}

void turnLeft(int time)
{
  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1300);
  delay(time);
}

void turnRight(int time)
{
  servoLeft.writeMicroseconds(1700);
  servoRight.writeMicroseconds(1700);
  delay(time);
}

void backward(int time)
{
  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1700);
  delay(time);
}



