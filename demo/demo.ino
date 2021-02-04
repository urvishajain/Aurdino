#include<LiquidCrystal.h>
LiquidCrystal l(11,12,A0,A1,A2,A3);
int i=0;


void setup()
{
  l.begin(16,2);

}

void loop() 
{
  for(i=0;i<=15;i++)
  {
  l.clear();
  l.setCursor(i,0);
  l.print("hello");
  delay(500);
  }
  for(i=15;i>0;i--)
  {
    l.clear();
  l.setCursor(i,0);
  l.print("hello");
  delay(500);
  
  }
  }


 
