
#include<SoftwareSerial.h>
SoftwareSerial Blue(0,1);
int leftmotor1=5;
int leftmotor2=6;
int rightmotor1=10;
int rightmotor2=11;
int buz=8,a;

void setup() 
{
Serial.begin(9600);
Blue.begin(9600);
   pinMode(leftmotor1,OUTPUT);
   pinMode(leftmotor2,OUTPUT);
   pinMode(rightmotor1,OUTPUT);
   pinMode(rightmotor2,OUTPUT);
   pinMode(buz,OUTPUT);
}

void loop() {
if(Blue.available())
{
  delay(100);
  while(Blue.available()>0)
  {    {
    a=(Blue.read());
     Serial.println(a);
    }
  }
}
 if (a==70)
   {
      digitalWrite(leftmotor1,HIGH);
      digitalWrite(leftmotor2,LOW);
      digitalWrite(rightmotor1,HIGH);
      digitalWrite(rightmotor2,LOW);
    
   }
  else if(a==66)
   {
      digitalWrite(leftmotor1,LOW);
      digitalWrite(leftmotor2,HIGH);
      digitalWrite(rightmotor1,LOW);
      digitalWrite(rightmotor2,HIGH);
   }
   else if(a==76)
   {
      digitalWrite(leftmotor1,LOW);
      digitalWrite(leftmotor2,LOW);
      digitalWrite(rightmotor1,HIGH);
      digitalWrite(rightmotor2,LOW);
      
   }
   else if(a==82)
   {
      digitalWrite(leftmotor1,HIGH);
      digitalWrite(leftmotor2,LOW);
      digitalWrite(rightmotor1,LOW);
      digitalWrite(rightmotor2,LOW);
   }
   else if(a==83)
   {
      digitalWrite(leftmotor1,LOW);
      digitalWrite(leftmotor2,LOW);
      digitalWrite(rightmotor1,LOW);
      digitalWrite(rightmotor2,LOW);
   }
   else if(a==86)
   {
    digitalWrite(buz,HIGH);
   }
   else if(a==118)
   {
    digitalWrite(buz,LOW);
   }
}
  
