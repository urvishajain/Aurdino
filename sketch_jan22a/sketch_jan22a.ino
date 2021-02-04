int trigpin=8;
int echopin=10;
long duration,distance;
int m1=3,m2=10,m3=6,m4=11;
int sml=10000;
int save;
#include <Servo.h>
Servo myservo; 
int dly=200;
int j,i;
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
delay(1000);
myservo.write(save); 
delay(400000);
}
