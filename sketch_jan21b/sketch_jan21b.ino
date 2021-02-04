int trigpin=8;
int echopin=10;
long duration,distance;
int m1=3,m2=10,m3=6,m4=11;
#include <Servo.h>
Servo myservo; 
int dly=200;
int j,i;
int A[200];
int pos = 0;  
int small;
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
 
  for (pos =0; pos <= 120; pos += 1) 
  { 
    myservo.write(pos);              
  delay(10);
     digitalWrite(trigpin,HIGH); 
   delayMicroseconds(10);
   digitalWrite(trigpin,LOW);
   duration=pulseIn(echopin,HIGH);
   distance=(duration/2)/29.1;

  
Serial.println(distance);
  delay(10);
  i=pos;
A[i]=distance;
small=A[i];

 for(j=pos+1;j<120;j++)
 {
  
  // Serial.println("distance");
    if(A[j]<small)
    small=A[j];
 }
  // Serial.println(small); 
  

 }
  for (pos=120; pos>=0; pos -= 1) 
  { 
    myservo.write(pos);             
    delay(50);
    Serial.println("adistance");
    
      if(A[pos]==small && small>1)
    {
      adj();
    
    }
     
      
  
  }
}
void adj()
{

Serial.println(small);
delay(9000);
}
