#include<LiquidCrystal.h>
LiquidCrystal l(2,3,4,5,6,7);
int i=0;
int sw=9;

void setup()
{
  l.begin(16,2);
 pinMode(sw,INPUT); 
}

void loop() 
{
  digitalWrite(sw,1);
  while(!digitalRead(sw))
  {
    i++;
  
l.clear();
l.print(i);
delay(1000);
}
} 

  
