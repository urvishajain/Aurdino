int trigpin=8;
int echopin=10;
long duration,distance;
int m1=3,m2=4,m3=6,m4=11;
int sml=10000;
int save;
int sped=70;
#include <Servo.h>
Servo myservo; 
int dly=200;
int j,a,i=0;
int cnt=0;
int pos = 0;  
void setup()
{
   myservo.attach(9); 

  pinMode(m1,OUTPUT);
  pinMode(m2,OUTPUT);
  pinMode(m3,OUTPUT);
  pinMode(m4,OUTPUT);
  Serial.begin(9600);
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);

}

void loop()
{
 
  for (pos =40; pos <= 180; pos +=1) 
  { 
    myservo.write(pos);              

     digitalWrite(trigpin,HIGH); 
   delayMicroseconds(10);
   digitalWrite(trigpin,LOW);
   duration=pulseIn(echopin,HIGH);
   distance=(duration/2)/29.1;
   Serial.println(distance);
   delay(10);
   if(distance<sml)
   {
    sml=distance;
    save = pos;
    
   }
  
}
delay(100);
myservo.write(save);
delay(3000);
adj();
 
delay(400);
sml=100000;
}
void adj()
{
  for(i=0;i<10;i++)
  {
    if(save<110)
    {
      a=110-save;
 analogWrite(m1,LOW);
  
 analogWrite(m2,sped);
 
 analogWrite(m3,sped);
  
 analogWrite(m4,LOW); 
delay(a);

    }

    else
 {
  a=save-110;

 analogWrite(m1,sped);
  digitalWrite(m2,LOW);
  digitalWrite(m3,LOW);
  
 analogWrite(m4,sped); 
delay(a+1);
digitalWrite(m1,0);
  digitalWrite(m2,LOW);
  digitalWrite(m3,LOW);
  digitalWrite(m4,0); 

    }
  }   
digitalWrite(m1,0);
  digitalWrite(m2,LOW);
  digitalWrite(m3,LOW);
  digitalWrite(m4,0);

delay(400);
}
