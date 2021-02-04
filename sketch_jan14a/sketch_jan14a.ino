 #include<LiquidCrystal.h>
LiquidCrystal lcd(2,3,4,5,6,7);
int r1=8,r2=9,r3=10,r4=12,c1=A0,c2=A1,c3=A2;
int a=0,b=0,c,d;

int k,l,m,n,o,p;
int i,temp1,temp2,j=0;
int cnt=1;
byte arrow[8]={
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
  lcd.createChar(8,arrow);
  pinMode(r1,INPUT);
  pinMode(r2,INPUT);
  pinMode(r3,INPUT);
  pinMode(r4,INPUT);
  pinMode(c1,OUTPUT);
  pinMode(c2,OUTPUT);
  pinMode(c3,OUTPUT);
  lcd.setCursor(i,j);
Serial.begin(9600);
lcd.begin(16,2);
}
void loop()

{
   digitalWrite(c1,1);
    digitalWrite(c2,0);
    digitalWrite(c3,1);
    digitalWrite(r1,1);
    digitalWrite(r2,1);
    digitalWrite(r3,1);
    digitalWrite(r4,1);
  
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Text1")
  lcd.setCursor(0,1);
  lcd.print("Text2");
  lcd.setCursor(8,j);
  if(!digitalRead(r3))
  {
    j++;
    lcd.write(8);
    if(!digitalRead(r2))
    {
      lcd.print("This is First Window")
    }
  }
  if(!digitalRead(r1))
  {
    j--;
    lcd.write(8)
  }
  while(!digitalRead(r3))
  {
     lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Text2")
  lcd.setCursor(0,1);
  lcd.print("Text3");
  lcd.setCursor(8,j);
   j++;
   lcd.write(8);
  
  if(!digitalRead(r1))
  {
    j--;
    lcd.write(8)
  }
  }
  while(!digitalRead(r3))
  {
     lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Text3")
  lcd.setCursor(0,1);
  lcd.print("Text4");
  lcd.setCursor(8,j);
   j++;
   lcd.write(8);
  
  if(!digitalRead(r1))
  {
    j--;
    lcd.write(8)
  }
  
  }
  adjust();
  }
  
  
  void adjust()
  {
    lcd.clear();
      lcd.setCursor(0,0);

     lcd.print("TEXT 1");
     lcd.setCursor(7,0);
     lcd.write(8);
      lcd.setCursor(0,1);
      lcd.print("TEXT 2");
      delay(300);
     
   Serial.println("first");
    digitalWrite(c1,1);
    digitalWrite(c2,0);
    digitalWrite(c3,1);
    digitalWrite(r1,1);
    digitalWrite(r2,1);
    digitalWrite(r3,1);
    digitalWrite(r4,1);
    
    while(1)
    {
         
    if(!digitalRead(r3))//8
    {
      lcd.clear();
      while(!digitalRead(r3))//8
      digitalWrite(r3,1);
     //lcd.print("2");
     cnt++;
     
     while(cnt==2)
     {
      lcd.clear();
     lcd.setCursor(0,0);

     lcd.print("TEXT 1");
     lcd.setCursor(7,1);
     lcd.write(8);
      lcd.setCursor(0,1);
      lcd.print("TEXT 2");
      delay(300);
    //  Serial.println("abc");//
     digitalWrite(r1,1);
     Serial.println("second");//
     {
     
     if(!digitalRead(r1))
        
          Serial.println("r1");
         delay(300);
         lcd.clear();
           lcd.setCursor(0,0);

     lcd.print("TEXT 1");
     lcd.setCursor(7,0);
     lcd.write(8);
      lcd.setCursor(0,1);
      lcd.print("TEXT 2");
      delay(300);
    while(!digitalRead(r1))//8
      
      digitalWrite(r1,1);
    
        }
        }
     
     while(cnt==3)
     {
      lcd.clear();
     lcd.setCursor(0,0);

     lcd.print("TEXT 2");
     lcd.setCursor(7,1);
     lcd.write(8);
      lcd.setCursor(0,1);
      lcd.print("TEXT 3");
      delay(300);
     digitalWrite(r1,1);
        if(!digitalRead(r1))
        {
          lcd.clear();
          a++;
        if(a==1)
        {
           lcd.setCursor(0,0);

     lcd.print("TEXT 2");
     lcd.setCursor(7,0);
     lcd.write(8);
      lcd.setCursor(0,1);
      lcd.print("TEXT 3");
      delay(300);
        }
       if(a==2)
        {
          lcd.clear();
          lcd.setCursor(0,0);

     lcd.print("TEXT 1");
     lcd.setCursor(7,1);
     lcd.write(8);
      lcd.setCursor(0,1);
      lcd.print("TEXT 2");
      delay(300);
         }
         if(a==3)
         {
          lcd.clear();
          lcd.setCursor(0,0);

     lcd.print("TEXT 1");
     lcd.setCursor(7,0);
     lcd.write(8);
      lcd.setCursor(0,1);
      lcd.print("TEXT 2");
      delay(300);
      a=0;  
      }
        
        } 
     }
     while(cnt==4)
     {
      lcd.clear();
     lcd.setCursor(0,0);

     lcd.print("TEXT 3");
     lcd.setCursor(7,1);
     lcd.write(8);
      lcd.setCursor(0,1);
      lcd.print("TEXT 4");
      delay(300);
  
    digitalWrite(r1,1);
        if(!digitalRead(r1))
        {
          b++;
        if(b==1)
        {
          lcd.clear();
           lcd.setCursor(0,0);

     lcd.print("TEXT 3");
     lcd.setCursor(7,0);
     lcd.write(8);
      lcd.setCursor(0,1);
      lcd.print("TEXT 4");
      delay(300);
        }
        if(b==2)
        { 
          lcd.clear();
          lcd.setCursor(0,0);

     lcd.print("TEXT 2");
     lcd.setCursor(7,1);
     lcd.write(8);
      lcd.setCursor(0,1);
      lcd.print("TEXT 3");
      delay(300);
        }
  if(b==3)
  {
    lcd.clear();
   lcd.setCursor(0,0);

     lcd.print("TEXT 2");
     lcd.setCursor(7,0);
     lcd.write(8);
      lcd.setCursor(0,1);
      lcd.print("TEXT 3");
      delay(300);
  }
  if(b==4)
  { 
    lcd.clear();
    lcd.setCursor(0,0);

     lcd.print("TEXT 1");
     lcd.setCursor(7,1);
     lcd.write(8);
      lcd.setCursor(0,1);
      lcd.print("TEXT 2");
      delay(300);
        }
        if(b==5)
        {
          lcd.clear();
         lcd.setCursor(0,0);

     lcd.print("TEXT 1");
     lcd.setCursor(7,0);
     lcd.write(8);
      lcd.setCursor(0,1);
      lcd.print("TEXT 2");
      delay(300);
        b=0;
        }
               }
     }
    }
    }
  }  
    
    
/*void pres()
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
      delay(100);
    lcd.print("1");
    
    }
 
   if(!digitalRead(r2))
    {
      lcd.setCursor(k,j);
      k++;
       while(!digitalRead(r2))
      digitalWrite(r2,1);
     
    lcd.print("4");
    }
  
    if(!digitalRead(r3))
    {
      lcd.setCursor(k,j);
      k++;
      while(!digitalRead(r3))
      digitalWrite(r3,1);
     lcd.print("7");
   }
   if(!digitalRead(r4))
    {
      lcd.setCursor(k,j);
      k++;
      while(!digitalRead(r4))
      digitalWrite(r4,1);
     lcd.print("#");
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
     //lcd.print("2");
     j--;
     lcd.setCursor(k,j);
    
     }
 
   if(!digitalRead(r2))
    {
      k++;
      while(!digitalRead(r2))
      digitalWrite(r2,1);
  
       

     
     }
  
    if(!digitalRead(r3))
    {
      lcd.setCursor(k,j);
      k++;
      while(!digitalRead(r3))
      digitalWrite(r3,1);
     lcd.print("8");
     }
     if(!digitalRead(r4))
    {
      lcd.setCursor(k,j);
      k++;
      while(!digitalRead(r4))
      digitalWrite(r4,1);
     lcd.print("0");
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
     lcd.print("3");
     }
 
   if(!digitalRead(r2))
    {
      lcd.setCursor(k,j);
      k++;
      while(!digitalRead(r2))
      digitalWrite(r2,1);
     lcd.print("6");
     }
  
    if(!digitalRead(r3))
    {
      lcd.setCursor(k,j);
      k++;
      while(!digitalRead(r3))
      digitalWrite(r3,1);
     lcd.print("9");
     }
       if(!digitalRead(r4))
    {
      k--;
      while(!digitalRead(r4))
      digitalWrite(r4,1);
      delay(300 );
      Serial.println("fgk");
      lcd.setCursor(k,j);
      lcd.print(" ");
        }

  } 
  */
