#include <Servo.h>

long distance;
int m1=3,m2=5,m3=6,m4=11;
int sml=1000;
int save;
int sped=60;
int dly;
#include <Servo.h>
Servo myservo; 
int j,ai,i=0;
int cnt=0;
int pos = 0;
int ang;          
int photodiode=A5;
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
  Serial.println("begin");
 myservo.write(pos);
 ai=analogRead(A5);
  for (pos =40; pos <= 180; pos +=1) 
  {
    myservo.write(pos);
  
                  
distance=analogRead(A5);
distance=distance-ai;
  
  delay(20);
     
   if(distance<sml)
   {
    sml=distance;
    save = pos;
   // Serial.println("save update");
   }
  
}
myservo.write(save);
delayMicroseconds(10);
//Serial.println(save);



if(sml<50)
adj();
Serial.println("uj");
delay(100);

 
sml=1000;

 ai=analogRead(A5);
  for (pos =180; pos >= 40; pos -=1) 
  {
    myservo.write(pos);              

      distance=analogRead(A5);
  distance=distance-ai;
  Serial.println(distance);
  delay(20);
   if(distance<sml)
   {
    sml=distance;
    save = pos;
    //Serial.println("save update");
   }
  
}
delayMicroseconds(10);
myservo.write(save);
//Serial.println(save);


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
  delay(1000);
if(sml<10)
{
  analogWrite(m1,LOW);
  analogWrite(m2,LOW);
  analogWrite(m3,LOW);
  digitalWrite(m4,LOW);
  
  
  }
  else if( sml>=10)
{
for(i=0;i>0;i++)
{
  analogWrite(m1,sped);
  analogWrite(m2,LOW);
  analogWrite(m3,sped);
  digitalWrite(m4,LOW);
if(sml==10)
break;
}
}
digitalWrite(m1,LOW);
  analogWrite(m2,LOW);
  analogWrite(m3,LOW);
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
  
  for(i=0;i<ang;i++)
  {
    delay(5);
    //Serial.println(distance);
  }
  

if(sml>=10)
{
 
for(i=0;i>0;i++)
{
  analogWrite(m1,sped);
  analogWrite(m2,LOW);
  analogWrite(m3,sped);
  digitalWrite(m4,LOW);
  
  
  
  if(sml==10)

break;

}}
digitalWrite(m1,LOW);
  analogWrite(m2,LOW);
  analogWrite(m3,LOW);
  digitalWrite(m4,LOW);  

Serial.println(save);
}
}
