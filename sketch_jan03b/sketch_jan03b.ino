#include<LiquidCrystal.h>
LiquidCrystal l(2,3,4,5,6,7);
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


 
