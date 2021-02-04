long distance;
int m1=3,m2=5,m3=6,m4=11;
int sml=10000;
int save;
#include <Servo.h>
Servo myservo; 
int dly=200;
int j,i,ai;
int cnt=0;
int photodiode=A5; 
int pos = 0;  
void setup()
{
   myservo.attach(9); 

  pinMode(m1,OUTPUT);
  pinMode(m2,OUTPUT);
  pinMode(m3,OUTPUT);
  pinMode(m4,OUTPUT);
  Serial.begin(9600);
  

}

void loop()
{
 myservo.write(pos);
  for (pos =40; pos <= 180; pos +=1) 
  { 
    myservo.write(pos);              

     ai=analogRead(A5);
 Serial.println(ai);
   //Serial.println(distance);
   delay(10);
   if(distance<sml)
   {
    sml=distance;
    save = pos;
   }
  
}
for (pos =180; pos >= 400; pos -=1) 
  { 
    myservo.write(pos);              

     ai=analogRead(A5);
 Serial.println(ai);
   //Serial.println(distance);
   delay(10);
   if(distance<sml)
   {
    sml=distance;
    save = pos;
   }
  
}
delay(100);
myservo.write(save); 
analogWrite(m1,100);
  analogWrite(m2,0);
  analogWrite(m3,100);
 analogWrite(m4,0);

delay(400000);
}
