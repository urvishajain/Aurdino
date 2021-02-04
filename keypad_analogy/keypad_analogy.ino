#include<LiquidCrystal.h>
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);
int r1 = 8, r2 = 9, r3 = 10, r4 = 12, c1 = A0, c2 = A1, c3 = A2;
int a = 0, b = 0, c, d;
char c11[50],c22[50],c33[50],c44[50];
char s;
int win1,win2,win3,win4;
int w1,w2,w3,w4;
int w=0;
int k, l, m, n, o, p;
int p1,p2,p3,p4;
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
 b++;

  lcd.clear();
  lcd.setCursor(0, 0);

  lcd.print("TEXT 1");
  lcd.setCursor(7, 0);
  lcd.write(8);
  lcd.setCursor(0, 1);
  lcd.print("TEXT 2");
  delay(100);

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
  if(!digitalRead(r2)) //5
  {
    Serial.println("sw pressed");
    delay(500);
    t1();
  }
}


while(w==1)
{
  b++;
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
   if(!digitalRead(r2)) //8
  {
    Serial.println("sw pressed");
    delay(500);
    t2();
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
   if(!digitalRead(r2)) //8
  {
    Serial.println("sw pressed");
    delay(500);
    t3();
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
   if(!digitalRead(r2)) //8
  {
    Serial.println("sw pressed");
    delay(500);
    t4();
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
   if(!digitalRead(r2)) //8
  {
    Serial.println("sw pressed");
    delay(500);
    t3();
  }

}


while(w==5)
{
  lcd.clear();
  lcd.setCursor(0, 0);

  lcd.print("TEXT 2");
  lcd.setCursor(7, 0);
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
   if(!digitalRead(r2)) //8
  {
    Serial.println("sw pressed");
    delay(500);
    t2();
  }

}
}

void t1()
{
  w1=0;
  lcd.clear();
  lcd.print("enter text");
  delay(1000);
  lcd.clear();
  for(o=1;o<=win1;o++)
  {
    lcd.print(c11[o]);
  }
  k=win1;
  Serial.println(win1);
  while(w1==0)
  {
    pres();
    win1=k;
    //Serial.println(s);
    //Serial.println(k);
    if(p1!=k)
    {
    p1=k;
    //Serial.println("one time");
    //Serial.println(s);
    //Serial.println(k);
    c11[k]=s;
    }
  }
  lcd.clear();
  delay(500);
}
void t2()
{
  w2=0;
  lcd.clear();
  lcd.print("enter text");
  delay(1000);
  lcd.clear();
  for(o=1;o<=win2;o++)
  {
    lcd.print(c22[o]);
  }
  Serial.println(win2);
  k=win2;
  while(w2==0)
  {
    pres();
    win2=k;
    //Serial.println(s);
    //Serial.println(k);
    if(p2!=k)
    {
    p2=k;
    //Serial.println("one time");
    //Serial.println(s);
    //Serial.println(k);
    c22[k]=s;
    }
  }
  lcd.clear();
  delay(500);
}
void t3()
{
  w3=0;
  lcd.clear();
  lcd.print("enter text");
  delay(1000);
  lcd.clear();
  for(o=1;o<=win3;o++)
  {
    lcd.print(c33[o]);
  }
  Serial.println(win3);
  k=win3;
  while(w3==0)
  {
    pres();
    win3=k;
    //Serial.println(s);
    //Serial.println(k);
    if(p3!=k)
    {
    p3=k;
    //Serial.println("one time");
    //Serial.println(s);
    //Serial.println(k);
    c33[k]=s;
    }
  }
  lcd.clear();
  delay(500);
}
void t4()
{
 
  w4=0;
  lcd.clear();
  lcd.print("enter text");
  delay(1000);
  lcd.clear();
  for(o=1;o<=win4;o++)
  {
    lcd.print(c44[o]);
  }
  Serial.println(win4);
  k=win4;
  while(w4==0)
  {
    pres();
    win4=k;
    //Serial.println(s);
    //Serial.println(k);
    if(p4!=k)
    {
    p4=k;
    //Serial.println("one time");
    //Serial.println(s);
    //Serial.println(k);
    c44[k]=s;
    }
  }
  lcd.clear();
  delay(500);
 }






 
 void pres()
  {
   
    digitalWrite(c1,0);
    digitalWrite(c2,1);
    digitalWrite(c3,1);
    digitalWrite(r1,1);
    digitalWrite(r2,1);
    digitalWrite(r3,1);
    digitalWrite(r4,1);
   
    if(!digitalRead(r1))
    {
      lcd.setCursor(k,j);
      k++;
      while(!digitalRead(r1))
      digitalWrite(r1,1);
      delay(10);
      for(i=0;i<100;i++)
    {
      if(!digitalRead(r1))
    {
      i=0;
      cnt++;
      while(!digitalRead(r1))
      digitalWrite(r1,1);
      delay(10);
      if(cnt==3)
      break;
    }
      delay(10);
    }
    if(cnt==0)
    lcd.print("a"),s='a';
    if(cnt==1)
    lcd.print("b"),s='b';
    if(cnt==2)
    lcd.print("c"),s='c';
    if(cnt==3)
    lcd.print("1"),s='1';
      //Serial.println(cnt);
      cnt=0;
    }
 if(!digitalRead(r4))
 {lcd.setCursor(k,j);
 //k++;
 while(!digitalRead(r4))
      digitalWrite(r4,1);
      delay(10);
      Serial.print("back");//7777777777777777777777777777777777777777777777
      delay(500);
      w1=1;
      w2=1;
      w3=1;
      w4=1;
      //lcd.print("0");
 }
   if(!digitalRead(r2))
    {
      lcd.setCursor(k,j);
      k++;
      while(!digitalRead(r2))
      digitalWrite(r2,1);
      delay(10);
      for(i=0;i<100;i++)
    {
      if(!digitalRead(r2))
    {
      i=0;
      cnt++;
      while(!digitalRead(r2))
      digitalWrite(r2,1);
      delay(10);
      if(cnt==3)
      break;
    }
      delay(10);
    }
    if(cnt==0)
    lcd.print("j"),s='j';
    if(cnt==1)
    lcd.print("k"),s='k';
    if(cnt==2)
    lcd.print("l"),s='l';
    if(cnt==3)
    lcd.print("4"),s='4';
      //Serial.println(cnt);
      cnt=0;
    }
 
    if(!digitalRead(r3))
    {
      lcd.setCursor(k,j);
      k++;
      while(!digitalRead(r3))
      digitalWrite(r3,1);
      delay(10);
      for(i=0;i<100;i++)
    {
      if(!digitalRead(r3))
    {
      i=0;
      cnt++;
      while(!digitalRead(r3))
      digitalWrite(r3,1);
      delay(10);
      if(cnt==3)
      break;
    }
      delay(10);
    }
    if(cnt==0)
    lcd.print("s"),s='s';
    if(cnt==1)
    lcd.print("t"),s='t';
    if(cnt==2)
    lcd.print("u"),s='u';
    if(cnt==3)
    lcd.print("7"),s='7';
      //Serial.println(cnt);
      cnt=0;
    }
   
   
    digitalWrite(c1,1);
    digitalWrite(c2,0);
    digitalWrite(c3,1);
    digitalWrite(r1,1);
    digitalWrite(r2,1);
    digitalWrite(r3,1);
    digitalWrite(r4,1);
   
    if(!digitalRead(r1))
    {
      lcd.setCursor(k,j);
      k++;
      while(!digitalRead(r1))
      digitalWrite(r1,1);
      delay(10);
      for(i=0;i<100;i++)
    {
      if(!digitalRead(r1))
    {
      i=0;
      cnt++;
      while(!digitalRead(r1))
      digitalWrite(r1,1);
      delay(10);
      if(cnt==3)
      break;
    }
      delay(10);
    }
    if(cnt==0)
    lcd.print("d"),s='d';
    if(cnt==1)
    lcd.print("e"),s='e';
    if(cnt==2)
    lcd.print("f"),s='f';
    if(cnt==3)
    lcd.print("2"),s='2';
      //Serial.println(cnt);
      cnt=0;
    }
 
   if(!digitalRead(r2))
    {
      lcd.setCursor(k,j);
      k++;
      while(!digitalRead(r2))
      digitalWrite(r2,1);
      delay(10);
      for(i=0;i<100;i++)
    {
      if(!digitalRead(r2))
    {
      i=0;
      cnt++;
      while(!digitalRead(r2))
      digitalWrite(r2,1);
      delay(10);
      if(cnt==3)
      break;
    }
      delay(10);
    }
    if(cnt==0)
    lcd.print("m"),s='m';
    if(cnt==1)
    lcd.print("n"),s='n';
    if(cnt==2)
    lcd.print("o"),s='o';
    if(cnt==3)
    lcd.print("5"),s='5';
      //Serial.println(cnt);
      cnt=0;
    }
 
    if(!digitalRead(r3))
    {
      lcd.setCursor(k,j);
      k++;
      while(!digitalRead(r3))
      digitalWrite(r3,1);
      delay(10);
      for(i=0;i<100;i++)
    {
      if(!digitalRead(r3))
    {
      i=0;
      cnt++;
      while(!digitalRead(r3))
      digitalWrite(r3,1);
      delay(10);
      if(cnt==3)
      break;
    }
      delay(10);
    }
    if(cnt==0)
    lcd.print("v"),s='v';
    if(cnt==1)
    lcd.print("w"),s='w';
    if(cnt==2)
    lcd.print("x"),s='x';
    if(cnt==3)
    lcd.print("8"),s='8';
      //Serial.println(cnt);
      cnt=0;
    }

     
    digitalWrite(c1,1);
    digitalWrite(c2,1);
    digitalWrite(c3,0);
    digitalWrite(r1,1);
    digitalWrite(r2,1);
    digitalWrite(r3,1);
    digitalWrite(r4,1);
   
    if(!digitalRead(r1))
    {
      lcd.setCursor(k,j);
      k++;
      while(!digitalRead(r1))
      digitalWrite(r1,1);
      delay(10);
      for(i=0;i<100;i++)
    {
      if(!digitalRead(r1))
    {
      i=0;
      cnt++;
      while(!digitalRead(r1))
      digitalWrite(r1,1);
      delay(10);
      if(cnt==3)
      break;
    }
      delay(10);
    }
    if(cnt==0)
    lcd.print("g"),s='g';
    if(cnt==1)
    lcd.print("h"),s='h';
    if(cnt==2)
    lcd.print("i"),s='i';
    if(cnt==3)
    lcd.print("3"),s='3';
      //Serial.println(cnt);
      cnt=0;
    }
 
   if(!digitalRead(r2))
    {
      lcd.setCursor(k,j);
      k++;
      while(!digitalRead(r2))
      digitalWrite(r2,1);
      delay(10);
      for(i=0;i<100;i++)
    {
      if(!digitalRead(r2))
    {
      i=0;
      cnt++;
      while(!digitalRead(r2))
      digitalWrite(r2,1);
      delay(10);
      if(cnt==3)
      break;
    }
      delay(10);
    }
    if(cnt==0)
    lcd.print("p"),s='p';
    if(cnt==1)
    lcd.print("q"),s='q';
    if(cnt==2)
    lcd.print("r"),s='r';
    if(cnt==3)
    lcd.print("6"),s='6';
      //Serial.println(cnt);
      cnt=0;
    }
 
    if(!digitalRead(r3))
    {
      lcd.setCursor(k,j);
      k++;
      while(!digitalRead(r3))
      digitalWrite(r3,1);
      delay(10);
      for(i=0;i<100;i++)
    {
      if(!digitalRead(r3))
    {
      i=0;
      cnt++;
      while(!digitalRead(r3))
      digitalWrite(r3,1);
      delay(10);
      if(cnt==3)
      break;
    }
      delay(10);
    }
    if(cnt==0)
    lcd.print("y"),s='y';
    if(cnt==1)
    lcd.print("z"),s='z';
    if(cnt==2)
    lcd.print("*"),s='*';
    if(cnt==3)
    lcd.print("9"),s='9';
      //Serial.println(cnt);
      cnt=0;
    }
       if(!digitalRead(r4))
    {
      k--;
      if(w1==0)
      p1--;
      if(w2==0)
      p2--;
      if(w3==0)
      p3--;
      if(w4==0)
      p4--;
      while(!digitalRead(r4))
      digitalWrite(r4,1);
      delay(300 );
      Serial.println("fgk");
      lcd.setCursor(k,j);
      lcd.print(" ");
        }
  }
