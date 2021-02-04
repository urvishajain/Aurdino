#include<LiquidCrystal.h>
LiquidCrystal lcd(2,3,4,5,6,7);
int r1=8,r2=9,r3=10,r4=11,c1=A0,c2=A1,c3=A2;
int a,b,c,d;
int i,j=0;
void setup()
{
  pinMode(r1,INPUT);
  pinMode(r2,INPUT);
  pinMode(r3,INPUT);
  pinMode(r4,INPUT);
  pinMode(c1,OUTPUT);
  pinMode(c2,OUTPUT);
  pinMode(c3,OUTPUT);
  //lcd.setCursor(i,j);
Serial.begin(9600);
lcd.begin(16,2);
}
void loop()

  {
    
    digitalWrite(c1,0);
    digitalWrite(c2,1);
    digitalWrite(c3,1);
    digitalWrite(r1,1);
    digitalWrite(r2,1);
    digitalWrite(r3,1);
    digitalWrite(r4,1);
    if(!digitalRead(r1))
    {
      //i++;
      lcd.print("1");
      while(!digitalRead(r1))
      digitalWrite(r1,1);
      }
      if(!digitalRead(r2))
    {
      //i++;
      lcd.print("4");
      while(!digitalRead(r2))
      digitalWrite(r2,1);
      }
      if(!digitalRead(r3))
    {
      //i++;
      lcd.print("7");
      //Serial.println("7");

      while(!digitalRead(r3))
      digitalWrite(r3,1);
      }
      if(!digitalRead(r4))
    {
      //Serial.println("#");
      //i++;
      lcd.print("#");
      while(!digitalRead(r4))
      digitalWrite(r4,1);
      }
    digitalWrite(c1,1);
    digitalWrite(c2,0);
    digitalWrite(c3,1);
    digitalWrite(r1,1);
    digitalWrite(r2,1);
    digitalWrite(r3,1);
    digitalWrite(r4,1);
    if(!digitalRead(r1))
    {
      //i++;
      lcd.print("2");
      while(!digitalRead(r1))
      digitalWrite(r1,1);
      }
      if(!digitalRead(r2))
    {
      //i++;
      lcd.print("5");
      while(!digitalRead(r2))
      digitalWrite(r2,1);
      }
      if(!digitalRead(r3))
    {
      //i++;
      lcd.print("8");
     // Serial.println("8");

      while(!digitalRead(r3))
      digitalWrite(r3,1);
      }
      if(!digitalRead(r4))
    {
      //Serial.println("0");
      //i++;
      lcd.print("0");
      while(!digitalRead(r4))
      digitalWrite(r4,1);
      }
    
    digitalWrite(c1,1);
    digitalWrite(c2,1);
    digitalWrite(c3,0);
    digitalWrite(r1,1);
    digitalWrite(r2,1);
    digitalWrite(r3,1);
    digitalWrite(r4,1);
    if(!digitalRead(r1))
    {
      //i++;
      lcd.print("3");
      while(!digitalRead(r1))
      digitalWrite(r1,1);
      }
      if(!digitalRead(r2))
    {
      //i++;
      lcd.print("6");
      while(!digitalRead(r2))
      digitalWrite(r2,1);
      }
      if(!digitalRead(r3))
    {
      //i++;
      lcd.print("9");
      //Serial.println("9");

      while(!digitalRead(r3))
      digitalWrite(r3,1);
      }
      if(!digitalRead(r4))
    {
     // Serial.println("*");
      //i++;
      lcd.print("*");
      while(!digitalRead(r4))
      digitalWrite(r4,1);
      }
      if(i==16)
      {
        for(j=0;j<=23;j++)
        lcd.print("*");
        i=0;
      }
  }
    
 
