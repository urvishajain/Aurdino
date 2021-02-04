#include<LiquidCrystal.h>
LiquidCrystal l(2,3,4,5,6,7);
int i,k,j=0;
int cnt=0;
void setup()
{
  l.begin(16,2);
  l.print("abc");

}

void loop() 
{
  l.scrollDisplayRight();
  delay(500);
}
  
 
