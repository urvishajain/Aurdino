int trigpin=8;
int echopin=10;
long duration,distance;
int m1=3,m2=5,m3=6,m4=11;
int sml=1000;
int save;
int sped=70;
int dly;
#include <Servo.h>
Servo myservo; 

int j,a,i=0;
int cnt=0;
int pos = 0;
int ang;  
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
 myservo.write(pos);
  for (pos =40; pos <= 180; pos +=1) 
  {
    myservo.write(pos);              

     digitalWrite(trigpin,HIGH); 
   //delayMicroseconds(10);
   digitalWrite(trigpin,LOW);
   duration=pulseIn(echopin,HIGH);
   distance=(duration/2)/29.1;
   Serial.println(distance);
   //delay(10);
   if(distance<sml)
   {
    sml=distance;
    save = pos;
    //Serial.println("save update");
   }
  
}
delayMicroseconds(10);
//Serial.println(save);
//myservo.write(save);
//myservo.write(120);
//delay(1000);
//myservo.write(60);
//delay(1000);
if(sml<50)
adj();
 
sml=1000;


  for (pos =180; pos >= 40; pos -=1) 
  {
    myservo.write(pos);              

     digitalWrite(trigpin,HIGH); 
   //delayMicroseconds(10);
   digitalWrite(trigpin,LOW);
   duration=pulseIn(echopin,HIGH);
   distance=(duration/2)/29.1;
   Serial.println(distance);
   //delay(10);
   if(distance<sml)
   {
    sml=distance;
    save = pos;
   // Serial.println("save update");
   }
  
}
delayMicroseconds(10)
;
Serial.println(save);
//myservo.write(save);
//myservo.write(120);
//delay(1000);
//myservo.write(60);
//delay(1000);
if(sml<50)
adj();

 
sml=1000;
}
void adj()
{
  if(save<=120)
  {
    ang = 120 - save;
      Serial.println("right side");
  digitalWrite(m1,LOW);
  analogWrite(m2,sped);
  analogWrite(m3,sped);
  digitalWrite(m4,LOW);
  
  
  }
  else
  {
    ang = save - 120;
     // Serial.println("right side");
  analogWrite(m1,sped);
  analogWrite(m2,0);
  analogWrite(m3,0);
  analogWrite(m4,sped);
  }
  for(i=0;i<ang;i++)
  {
    delay(5);
    //Serial.println(distance);
    }
  if(sml<10)
  {

  digitalWrite(m1,LOW);
  digitalWrite(m2,LOW);
  digitalWrite(m3,LOW);
  digitalWrite(m4,LOW);

}
else
{
 analogWrite(m1,sped);
  analogWrite(m2,0);
  analogWrite(m3,sped);
  analogWrite(m4,0);
  dly=sml-10;
  for(j=0;j<=50;j++)
  {
    delay(dly);
  }
  }
  digitalWrite(m1,LOW);
  digitalWrite(m2,LOW);
  digitalWrite(m3,LOW);
  digitalWrite(m4,LOW);

}
