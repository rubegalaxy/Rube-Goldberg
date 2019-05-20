/*
* Robotics with the BOE Shield - AvoidTableEdge
* Adaptation of FastIrRoaming for table edge avoidance
*/
#include <Servo.h> // Include servo library
Servo servoLeft; // Declare left and right servos
Servo servoRight;

void setup() // Built-in initialization block
{
pinMode(10, INPUT); pinMode(9, OUTPUT); // Left IR LED & Receiver
pinMode(3, INPUT); pinMode(2, OUTPUT); // Right IR LED & Receiver
tone(4, 3000, 1000); // Play tone for 1 second
delay(1000); // Delay to finish tone
servoLeft.attach(13); // Attach left signal to pin 13
servoRight.attach(12); // Attach right signal to pin 12
}
void loop() // Main loop auto-repeats
{
int irLeft = irDetect(9, 10, 38000); // Check for object on left
int irRight = irDetect(2, 3, 38000); // Check for object on right
if((irLeft == 0) && (irRight == 0)) // Object detected by both receivers
 {
 maneuver(200, 200, 20);     // Move forward for 20 ms
 }
 else if(irLeft == 0)       //object detected on the left
 {
 maneuver(200, -200, 20);   // turn left for 20 ms
 }
 else if(irRight == 0)      //object detected on the right
 {
 maneuver(-200, 200, 20);   //turn right for 20 ms
 }
 else
 {
 maneuver(-200, -200, 20);  //Move backward for 20 ms
 }
}

int irDetect(int irLedPin, int irReceiverPin, long frequency) //declare variables
{
tone(irLedPin, frequency, 8); // IRLED 38 kHz for at least 1 ms
delay(1); // Wait 1 ms
int ir = digitalRead(irReceiverPin); // IR receiver -> ir variable
delay(1); // Down time before recheck
return ir; // Return 1 no detect, 0 detect
}
void maneuver(int speedLeft, int speedRight, int msTime)
{
// speedLeft, speedRight ranges: Backward Linear Stop Linear Forward
// -200 -100....0....100 200
servoLeft.writeMicroseconds(1500 + speedLeft); // Left servo speed
servoRight.writeMicroseconds(1500 - speedRight); // Right servo speed

if(msTime==-1) // If msTime = -1
{
servoLeft.detach(); // Stop servo signals


servoRight.detach();
}
delay(msTime); // Delay for msTime
}


