int i;
int a=0;
int trigpin=8;
int echopin=9;
long duration,distance;
int m1=3,m2=10,m3=6,m4=11;
int dly=200;
void setup()
{
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
  
 digitalWrite(trigpin,HIGH); 
   delayMicroseconds(10);
   digitalWrite(trigpin,LOW);
   duration=pulseIn(echopin,HIGH);
   distance=(duration/2)/29.1;

  
Serial.println(distance);
  delay(50);
  if(distance<=20)
  {
  if(distance==10 || distance==11)
  {
    analogWrite(m1,0);
  analogWrite(m2,0);
  analogWrite(m3,0);
  analogWrite(m4,0);
  }
  else if(distance<10)
  {
   if(distance == 9 || distance==8)
   {
  analogWrite(m1,0);
  analogWrite(m2,100);
  analogWrite(m3,0);
  analogWrite(m4,120);
   }
   else
   {
  analogWrite(m1,0);
  analogWrite(m2,180);
  analogWrite(m3,0);
  analogWrite(m4,180);
   }

    
  }
  else if(distance > 11)
  {
   if(distance==12 || distance==13)
   {
    analogWrite(m1,100);
  analogWrite(m2,0);
  analogWrite(m3,120);
  analogWrite(m4,0);
   }
   else
   {
    analogWrite(m1,180);
  analogWrite(m2,0);
  analogWrite(m3,180);
  analogWrite(m4,0);
   }

    
  }
  
  }
  else
  {
    analogWrite(m1,0);
  analogWrite(m2,0);
  analogWrite(m3,0);
  analogWrite(m4,0);
  }
  }
