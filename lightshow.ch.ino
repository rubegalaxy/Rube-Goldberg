/*Light show uses arrays to blink different LED's 
on and off to the tune of Fireflies by Owl City
*/


int ledpins[]={2,3,4,5,6,7,8,9};  // declare ledpins as an array



void setup() {
  pinMode(ledpins[0],OUTPUT); // led at pin 2 is sends out energy
  pinMode(ledpins[1],OUTPUT); // led at pin 3 is sends out energy
  pinMode(ledpins[2],OUTPUT); // led at pin 4 is sends out energy
  pinMode(ledpins[3],OUTPUT); // led at pin 5 is sends out energy
  pinMode(ledpins[4],OUTPUT); // led at pin 5 is sends out energy
  pinMode(ledpins[5],OUTPUT); // led at pin 6 is sends out energy
  pinMode(ledpins[6],OUTPUT); // led at pin 7 is sends out energy
  pinMode(ledpins[7],OUTPUT); // led at pin 8 is sends out energy
  
}

void loop() {
  digitalWrite(ledpins[7],HIGH); //led turns on
  delay(350);                   //delay 350 ms
  digitalWrite(ledpins[7],LOW); //led turns off
  digitalWrite(ledpins[2],HIGH);//led turns on
  delay(350);                   //delay 350 ms
  digitalWrite(ledpins[2],LOW);//led turns off
  digitalWrite(ledpins[0],HIGH);//led turns on
  delay(250);                   //delay 275 ms
  digitalWrite(ledpins[0],LOW);//led turns off
  digitalWrite(ledpins[1],HIGH);//led turns on
  delay(300);                   //delay 300 ms
  digitalWrite(ledpins[1],LOW);//led turns off
  digitalWrite(ledpins[0],HIGH);//led's turns on
  digitalWrite(ledpins[1],HIGH);
  digitalWrite(ledpins[6],HIGH);
  digitalWrite(ledpins[7],HIGH);
  delay(400);                   //delay 400 ms
  digitalWrite(ledpins[7],LOW);//led's turns off
  digitalWrite(ledpins[1],LOW);
  digitalWrite(ledpins[6],LOW);
  digitalWrite(ledpins[0],LOW);
  delay(275);                  //delay 275 ms
  digitalWrite(ledpins[7],HIGH);
  digitalWrite(ledpins[6],HIGH);
  digitalWrite(ledpins[1],HIGH);
  digitalWrite(ledpins[0],HIGH);
  delay(275);                  //delay 275 ms
  digitalWrite(ledpins[7],LOW);//led's turns off
  digitalWrite(ledpins[1],LOW);
  digitalWrite(ledpins[6],LOW);
  digitalWrite(ledpins[0],LOW);
  delay(275);                  //delay 275 ms
  digitalWrite(ledpins[7],HIGH);
  digitalWrite(ledpins[6],HIGH);
  digitalWrite(ledpins[1],HIGH);
  digitalWrite(ledpins[0],HIGH);
  delay(275);                  //delay 275 ms
  digitalWrite(ledpins[7],LOW);//led's turns off
  digitalWrite(ledpins[1],LOW);
  digitalWrite(ledpins[6],LOW);
  digitalWrite(ledpins[0],LOW);
  delay(275);                   //delay 275 ms
  digitalWrite(ledpins[7],HIGH);//led's turn on
  digitalWrite(ledpins[6],HIGH);
  digitalWrite(ledpins[1],HIGH);
  digitalWrite(ledpins[0],HIGH);
  digitalWrite(ledpins[2],HIGH);
  digitalWrite(ledpins[3],HIGH);
  digitalWrite(ledpins[4],HIGH);
  digitalWrite(ledpins[5],HIGH);
  delay(275);                  //delay 275 ms
  digitalWrite(ledpins[7],LOW);//led's turn off
  digitalWrite(ledpins[1],LOW);
  digitalWrite(ledpins[6],LOW);
  digitalWrite(ledpins[0],LOW);
  digitalWrite(ledpins[3],HIGH);// led's turn on
  digitalWrite(ledpins[4],HIGH);
  digitalWrite(ledpins[5],HIGH);
  digitalWrite(ledpins[2],HIGH);
  delay(275);                   //delay 275 ms
  digitalWrite(ledpins[7],HIGH);//led's turn on
  digitalWrite(ledpins[6],HIGH);
  digitalWrite(ledpins[1],HIGH);
  digitalWrite(ledpins[0],HIGH);
  digitalWrite(ledpins[2],HIGH);
  digitalWrite(ledpins[3],HIGH);
  digitalWrite(ledpins[4],HIGH);
  digitalWrite(ledpins[5],HIGH);
  delay(275);                  //delay 275 ms
  digitalWrite(ledpins[7],LOW);//led's turns off
  digitalWrite(ledpins[1],LOW);
  digitalWrite(ledpins[6],LOW);
  digitalWrite(ledpins[0],LOW);
  digitalWrite(ledpins[3],HIGH);//led's turn on 
  digitalWrite(ledpins[4],HIGH);
  digitalWrite(ledpins[5],HIGH);
  digitalWrite(ledpins[2],HIGH);
  delay(275);                   //delay 275 ms
  
  
  
  
  
  
  
  

}
