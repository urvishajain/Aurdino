#include<LiquidCrystal.h>
LiquidCrystal lcd(11,12,A0,A1,A2,A3);
int ldr1=A4;
int ldr2=A5;
int a,b,c;
int led=10;
void setup()
{
 lcd.begin(16,2);
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  
}

void loop()
{
  a=analogRead(A4);
  b=analogRead(A5);
  lcd.clear();
  lcd.setCursor(1,0);
  lcd.print(a);
  lcd.setCursor(1,1);
  lcd.print(b);
  delay(200);
}
  //Serial.println(a);
  //Serial.println(b);
  //delay(300);

/* if(a<=150 || b<=150)
  {
    for(int i=0;i<=255;i++)
    {
      analogWrite(10,i);
      delay(20);
      }
while(a<=150 || b<=150)
{
  a=analogRead(A4);
  b=analogRead(A5);
}
  }

 else
  {
     
    for(int i=255;i>=0;i--)
    {
      analogWrite(10,i);
      delay(20);
      }
      while(a>150 || b>150)
{
  a=analogRead(A4);
  b=analogRead(A5);
  
}
  }*/
  

    
  
