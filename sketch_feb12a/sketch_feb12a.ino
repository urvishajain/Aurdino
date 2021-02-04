
long distance;
int m1=3,m2=5,m3=6,m4=11;
int sml=10000;
int save;
int sped=70;
#include <Servo.h>
Servo myservo;
int dly=200;
int j,a,i=0;
int cnt=0;
int pos = 0;
int ang,ai; 
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
// myservo.write(pos);
  
  
  for (pos =40; pos <= 180; pos +=1) 
  {
    myservo.write(pos);
  ai=analogRead(A5);
 Serial.println(ai);
                  
distance=ai;       //analogRead(A5);
distance=267-ai;
//Serial.println("distnce=");
Serial.println(distance);  
  delay(20);
   if(distance<sml)
   {
    sml=distance;
    save = pos;
    //Serial.println("save update");
   }
}
delay(100);

//Serial.println("save=");
Serial.println(save);
//Serial.println("sml=");
Serial.println(sml);

myservo.write(save);
//myservo.write(120);
//delay(1000);
//myservo.write(60);
delay(1000);
adj();
 
sml=1000;
}
void adj()
{
  if(save<=120)
  {
    ang = 120 - save;
      //Serial.println("right side");
  analogWrite(m1,0);
  analogWrite(m2,sped);
  analogWrite(m3,sped);
 analogWrite(m4,0);
 
  }
  else
  {
    ang = save - 120;
      //Serial.println("right side");
  analogWrite(m1,sped);
  analogWrite(m2,0);
  analogWrite(m3,0);
  analogWrite(m4,sped);
  }
  for(i=0;i<ang;i++)
  {
    delay(5);
  }

  digitalWrite(m1,LOW);
  digitalWrite(m2,LOW);
  digitalWrite(m3,LOW);
  digitalWrite(m4,LOW);

}
