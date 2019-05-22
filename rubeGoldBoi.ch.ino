//{1,1,2,3,1,1,2,2,1,1,1} (beats)
//ddDaq gfdfg (notes)
//songLength=11
//star spangled banner
//{1,1,2,2,2,4,1,1,2,2,2,4,1,1,3,1,2,4,1,1,2,2,2};
//gecegCEDCefgggEDCbabCCgzx
//songLength=25
//Code source 'Parallax' Modifications by Chinyere Okpala and Kenan Anderson
#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
const int photoPin = 0;
const int buzzer = 9;
int lightCal;
int lightVal;
const int songLength = 23;
void setup() 
{
  pinMode(6,OUTPUT);
  pinMode(buzzer, OUTPUT);
  lcd.begin(16,2);
  lcd.clear();
  lightCal = analogRead(photoPin);
}
int tempo = 250;
char notes[] = "gecegCEDCefgggEDCbabCCg";
int beats[] = {1,1,2,2,2,4,1,1,2,2,2,4,1,1,3,1,2,4,1,1,2,2,2};

void nationalAnthem()
{
  int songLength = 25;
  int duration;
  for (int i=0; i<songLength; i++)
  {
    duration = tempo*beats[i];
    if (notes[i] == ' ')           
    {
      delay(duration);            
    }
    else                          
    {
      tone(buzzer, frequency(notes[i]), duration);
      digitalWrite(6,HIGH);
      delay(duration/(1.25));  
      digitalWrite(6,LOW);
      delay(duration/(5));            
      
    }
              
  }
   
}
int frequency(char note)
{
  const int numNotes = 14;
  char names[] = {'z','x', 'c','d','e', 'f', 'g','q', 'a', 'b', 'C', 'D', 'E','G','A' };
  int frequencies[] = {247, 130, 262, 294, 330, 370, 392,415, 440, 494, 523, 587, 659, 784, 880 };
  for (int i=0; i<numNotes; i++)
  {
    if (note == names[i])
    {
      return frequencies[i];
    }
  }
  return (0);
}



void loop() {
 lightVal = analogRead(photoPin);
 if (lightVal < lightCal - 30)
 {
   
  lcd.setCursor(0,0);
  lcd.print("BUY WAR BONDS");
  lcd.setCursor(0,1);
  lcd.print("");
  nationalAnthem();
  
 
 }
}

