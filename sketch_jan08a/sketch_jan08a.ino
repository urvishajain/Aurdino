
#include <LiquidCrystal.h>
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);
int i=0,j=0;
int a=0;
int sw1=8,sw2=9,sw3=10,sw4=11,sw=12;
byte circle[8]={
    0b00000,
    0b00000,
    0b01110,
    0b10001,
    0b10001,
    0b10001,
    0b01110,
    0b00000
};
    byte fill[8]={
    0b00000,
    0b00000,
    0b00000,
    0b01110,
    0b01110,
    0b01110,
    0b00000,
    0b00000
    };
void setup()
{
  
lcd.begin(16,2);
pinMode(sw1,INPUT);
pinMode(sw2,INPUT);
pinMode(sw3,INPUT);
pinMode(sw4,INPUT);
pinMode(sw,INPUT);
lcd.clear();
lcd.createChar(5,circle);
lcd.createChar(6,fill);
  lcd.setCursor(i,j);
disp();
   
   
}
void loop()
{
  digitalWrite(sw,1);
  if(!digitalRead(sw))
  {
   functn();
    a++;
  while(!digitalRead(sw))
 digitalWrite(sw,1);
 }
  
 
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
   
   lcd.write(5);
  
   }
 void functn()
 {
    lcd.setCursor(i,j);
  lcd.write(6);
  
  }
