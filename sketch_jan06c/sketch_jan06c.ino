
#include <LiquidCrystal.h>
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);
int i,j;
int sw1=8,sw2=9,sw3=10,sw4=11;
void setup()
{
  Serial.begin(9600);
lcd.begin(16,2);
pinMode(sw1,INPUT);
pinMode(sw2,INPUT);
pinMode(sw3,INPUT);
pinMode(sw4,INPUT);
lcd.clear();
  lcd.setCursor(i,j);
   lcd.print("o");
   Serial.println("program start");
}
void loop()
{
digitalWrite(sw1,1);
if(!digitalRead(sw1))
{
  i++;
  if(i>16)
 i=15;
 disp();
   while(!digitalRead(sw1))
 digitalWrite(sw1,1);
} 
 digitalWrite(sw2,1);
if(!digitalRead(sw2))
{
  j++;
  if(j>2)
 j=1;
 disp();
   while(!digitalRead(sw2))
 digitalWrite(sw2,1);
} 
digitalWrite(sw3,1);
if(!digitalRead(sw3))
{
  i--;
  if(i<0)
 i=0;
disp();
   while(!digitalRead(sw3))
 digitalWrite(sw3,1);
} 
digitalWrite(sw4,1);
if(!digitalRead(sw4))
{
  j--;
  if(j<0)
 j=0;
 disp();
   while(!digitalRead(sw4))
 digitalWrite(sw4,1);
} 
 }
 void disp()
 {
  lcd.clear();
  lcd.setCursor(i,j);
   lcd.print("o");
 }
