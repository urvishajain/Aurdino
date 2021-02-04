
#include <LiquidCrystal.h>
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);
int i=0,j=0;
int a,b;
int cnt= 0;
int w,x,y,z;
int ar1[50],ar2[50];

int sw1=8,sw2=9,sw3=10,sw4=11,sw=12;
byte ofill[8]={
    0b00000,
    0b00000,
    0b01110,
    0b11111,
    0b11111,
    0b11111,
    0b01110,
    0b00000
    };
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
 Serial.begin(9600); 
lcd.begin(16,2);
pinMode(sw1,INPUT);
pinMode(sw2,INPUT);
pinMode(sw3,INPUT);
pinMode(sw4,INPUT);
pinMode(sw,INPUT);
lcd.createChar(5,circle);
lcd.createChar(6,fill);
lcd.createChar(7,ofill);
  lcd.setCursor(i,j);
disp();
   
   
}
void loop()
{
  digitalWrite(sw,1);
  if(!digitalRead(sw))
  {
    cnt++;
   functn();
    
  while(!digitalRead(sw))
 digitalWrite(sw,1);
 delay(300);

 }
 
 digitalWrite(sw1,1);
if(!digitalRead(sw1))
{
  i++;
  if(i>16)
 i=15;
 disp();
 functn();
  while(!digitalRead(sw1))
 digitalWrite(sw1,1);
 delay(300);
} 
 digitalWrite(sw2,1);
if(!digitalRead(sw2))
{
  j++;
  if(j>2)
 j=1;
  disp();
 functn();
   while(!digitalRead(sw2))
 digitalWrite(sw2,1);
 delay(300);
} 
digitalWrite(sw3,1);
if(!digitalRead(sw3))
{
  i--;
  if(i<0)
 i=0;
 disp();
 functn();
   while(!digitalRead(sw3))
 digitalWrite(sw3,1);
 delay(300);
} 
digitalWrite(sw4,1);
if(!digitalRead(sw4))
{
  j--;  
  if(j<0)
 j=0;
  disp();
  functn();
   while(!digitalRead(sw4))
 digitalWrite(sw4,1);
 delay(300);
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
  
  
  ar1[cnt]=i;
  ar2[cnt]=j;
 for(w=0;w<cnt;w++)
 {
  //Serial.println(w);
  //Serial.println(ar1[0]);
 // Serial.println(ar2[0]);
  lcd.setCursor(ar1[w],ar2[w]);
  if(ar1[w]==i && ar2[w]==j)
   lcd.write(7);
 else
  lcd.write(6);
  
 }  
 }
 
   
  
