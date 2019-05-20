/*star spangled banner
(1,1,2,2,2,4,4,1,1,3,1,2,4,1,1,2,2,2,;
gecegCEDCefgggEDCbabCCgzx
songlenth=23
nonsense kenan added */
#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
const int photoPin = 0;
const int buzzer = 9;
int lightCal;
int lightVal;

void setup() {
  pinMode(6,OUTPUT);
  pinMode(buzzer,OUTPUT);
  lcd.begin(16,2);
  lcd.clear();
  lightCal =analogRead(photoPin);
 }
int tempo = 150;
char notes[]= "gecegCEDCefgggEDCbabCCgzx";
int beats[]= {1,1,2,2,2,4,1,1,2,2,2,4,1,1,3,1,2,4,1,1,2,2,2,3,1};

void nationalAnthem()
{
    int songLength=25;
    int duration;
    for(int i=0; i<songLength; i++)
    {
      duration=tempo*beats[i];
      if(notes[i]!=' ')
    {
      tone(buzzer, frequency(notes[i]),duration);
      digitalWrite(6,HIGH);
      delay(duration/(1.25));
      digitalWrite(6,LOW);
      delay(duration/(5));
    }
    }
    
}
int frequency(char note)
{
  const int numNotes=13;
  char names[] = {'z','x','c','e','f','g','a','b','C','D','E','G','A'};
  int frequencies[]={247,130,262,330,370,392,440,494,523,587,659,784,880};
  for (int i=0; i<numNotes; i++)
  {
    if(note==names[i])
    {
      return frequencies[i];
    }
  }
  return(0);
  
}
void loop() {
  lightVal =analogRead(photoPin);
  if (lightVal <lightCal -30)
  {
     lcd.setCursor(0,0);
     lcd.print("BUY WAR BONDS");
     lcd.setCursor(0,1);
     lcd.print("");
     nationalAnthem();
  }

}
