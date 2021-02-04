#include<LiquidCrystal.h>
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);
int r1 = 8, r2 = 9, r3 = 10, r4 = 12, c1 = A0, c2 = A1, c3 = A2;
int a = 0, b = 0, c, d;
int w=0;
int k, l, m, n, o, p;
int i, temp1, temp2, j = 0;
int cnt = 0;
byte arrow[8] = {
  0b00000,
  0b00010,
  0b00110,
  0b01110,
  0b11110,
  0b01110,
  0b00110,
  0b00010
};
void setup()
{
  lcd.createChar(8, arrow);
  pinMode(r1, INPUT);
  pinMode(r2, INPUT);
  pinMode(r3, INPUT);
  pinMode(r4, INPUT);
  pinMode(c1, OUTPUT);
  pinMode(c2, OUTPUT);
  pinMode(c3, OUTPUT);
  lcd.setCursor(k, j);
  Serial.begin(9600);
  lcd.begin(16, 2);
}
void loop()
{
  adj();
}



void adj()
{

while(w==0)
{
  b++;; 

  lcd.clear();
  lcd.setCursor(0, 0);

  lcd.print("TEXT 1");
  lcd.setCursor(7, 0);
  lcd.write(8);
  lcd.setCursor(0, 1);
  lcd.print("TEXT 2");
  delay(100);
  abc();

  Serial.println("0");
  digitalWrite(c1, 1);
  digitalWrite(c2, 0);
  digitalWrite(c3, 1);
  digitalWrite(r1, 1);
  digitalWrite(r2, 1);
  digitalWrite(r3, 1);
  digitalWrite(r4, 1);
  if(!digitalRead(r3)) //8
  {
    w=1;
    delay(500);
  }
}


while(w==1)
{
  cnt++;
  abc();
  lcd.clear();
  lcd.setCursor(0, 0);

  lcd.print("TEXT 1");
  lcd.setCursor(0, 1);
  lcd.print("TEXT 2");
  lcd.setCursor(7, 1);
  lcd.write(8);
  delay(100);

  Serial.println("1");
  digitalWrite(c1, 1);
  digitalWrite(c2, 0);
  digitalWrite(c3, 1);
  digitalWrite(r1, 1);
  digitalWrite(r2, 1);
  digitalWrite(r3, 1);
  digitalWrite(r4, 1);
  if(!digitalRead(r3))
  {
    w=2;
    delay(500);
  }
  if(!digitalRead(r1))//2
  {
    w=0;
    delay(500);
  }
}



while(w==2)
{
  lcd.clear();
  lcd.setCursor(0, 0);

  lcd.print("TEXT 2");
  lcd.setCursor(0, 1);
  lcd.print("TEXT 3");
  lcd.setCursor(7, 1);
  lcd.write(8);
  delay(100);

  Serial.println("2");
  digitalWrite(c1, 1);
  digitalWrite(c2, 0);
  digitalWrite(c3, 1);
  digitalWrite(r1, 1);
  digitalWrite(r2, 1);
  digitalWrite(r3, 1);
  digitalWrite(r4, 1);
  if(!digitalRead(r3))
  {
    w=3;
    delay(500);
  }
  if(!digitalRead(r1))//2
  {
    w=5;
    delay(500);
  }
}


while(w==3)
{
  lcd.clear();
  lcd.setCursor(0, 0);

  lcd.print("TEXT 3");
  lcd.setCursor(0, 1);
  lcd.print("TEXT 4");
  lcd.setCursor(7, 1);
  lcd.write(8);
  delay(100);

  Serial.println("3");
  digitalWrite(c1, 1);
  digitalWrite(c2, 0);
  digitalWrite(c3, 1);
  digitalWrite(r1, 1);
  digitalWrite(r2, 1);
  digitalWrite(r3, 1);
  digitalWrite(r4, 1);
  if(!digitalRead(r3))
  {
    w=3;
    delay(500);
  }
  if(!digitalRead(r1))
  {
    w=4;
    delay(500);
  }
  
}


while(w==4)
{
  lcd.clear();
  lcd.setCursor(0, 0);

  lcd.print("TEXT 3");
  lcd.setCursor(7, 0);
  lcd.write(8);
  lcd.setCursor(0, 1);
  lcd.print("TEXT 4");
  delay(100);

  Serial.println("4");
  digitalWrite(c1, 1);
  digitalWrite(c2, 0);
  digitalWrite(c3, 1);
  digitalWrite(r1, 1);
  digitalWrite(r2, 1);
  digitalWrite(r3, 1);
  digitalWrite(r4, 1);
  if(!digitalRead(r3))//8uuu
  {
    w=3;
    delay(500);
  }
  if(!digitalRead(r1))//2
  {
    w=5;
    delay(500);
  }
  
}


while(w==5)
{
  lcd.clear();
  lcd.setCursor(0, 0);

  lcd.print("TEXT 2");
  lcd.setCursor(7, 0);
  cnt++;
  lcd.write(8);
  lcd.setCursor(0, 1);
  lcd.print("TEXT 3");
  delay(100);

  Serial.println("5");
  digitalWrite(c1, 1);
  digitalWrite(c2, 0);
  digitalWrite(c3, 1);
  digitalWrite(r1, 1);
  digitalWrite(r2, 1);
  digitalWrite(r3, 1);
  digitalWrite(r4, 1);
  if(!digitalRead(r3))//8
  {
    w=2;
    delay(500);
  }
  if(!digitalRead(r1))//2
  {
    w=0;
    delay(500);
  }
  
}
}
void abc()
{
   digitalWrite(c1, 1);
  digitalWrite(c2, 0);
  digitalWrite(c3, 1);
  digitalWrite(r1, 1);
  digitalWrite(r2, 1);
  digitalWrite(r3, 1);
  digitalWrite(r4, 1);
  if(!digitalRead(r2))//8
  { a++;
  
    while(b==1 || a==1)
    {lcd.clear();
    lcd.print("window 1");
    delay(100);
    }
    while(cnt==1 || cnt==2 || a==1)
    {
      lcd.clear();
    lcd.print("window 2");
    delay(100);
    }

 }
}
 
