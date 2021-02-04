
#include <LiquidCrystal.h>
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);
int i=0;
byte heart[8] = {
  0b00000,
  0b01010,
  0b11111,
  0b11111,
  0b11111,
  0b01110,
  0b00100,
  0b00000
};

byte smiley[8] = {
  0b00000,
  0b00000,
  0b01010,
  0b00000,
  0b00000,
  0b10001,
  0b01110,
  0b00000
};

byte frownie[8] = {
  0b00000,
  0b00000,
  0b01010,
  0b00000,
  0b00000,
  0b00000,
  0b01110,
  0b10001
};

byte armsDown[8] = {
  0b00100,
  0b01010,
  0b00100,
  0b00100,
  0b01110,
  0b10101,
  0b00100,
  0b01010
};

byte armsUp[8] = {
  0b00100,
  0b01010,
  0b00100,
  0b10101,
  0b01110,
  0b00100,
  0b00100,
  0b01010
};

void setup() 
{
  lcd.begin(16, 2);

 
  lcd.createChar(5, heart);
  
  lcd.createChar(1, smiley);
  
  lcd.createChar(2, frownie);
 
  lcd.createChar(3, armsDown);
 
  lcd.createChar(4, armsUp);

  
  

}

void loop()
{
  

  
   for(i=0;i<=16;i++)
  {
    lcd.clear();
 lcd.setCursor(i,0);
  lcd.write(1);
 

  
  if(i%2==0)
  {
    lcd.setCursor(i-1, 1);
  lcd.write(3);
  }
 else
 {
  lcd.setCursor(i-1, 1);
  lcd.write(4);
 }
  

  lcd.setCursor(i+1, 1);
  lcd.write(2);

  
  lcd.setCursor(i+2, 0);
  
  lcd.write(5);
  delay(500);
  
  
  }
   
 
}
