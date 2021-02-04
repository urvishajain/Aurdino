int led=8;
int sw=5;
int a=0;
int bz=10;
void setup()
{
  pinMode(led,OUTPUT);
  pinMode(bz,OUTPUT);
  pinMode(sw,INPUT);
}
void loop()
{
  digitalWrite(sw,HIGH);
 
  if(!digitalRead(sw))
  {
    a++;
    if(a==1)
    {
      digitalWrite(led,HIGH);
      digitalWrite(bz,LOW);
    }
    if(a==2)
    {
      digitalWrite(led,LOW);
      digitalWrite(bz,HIGH);
    }
    if(a==3)
   
    {
      digitalWrite(bz,LOW);
      digitalWrite(led,LOW);
      a=0;
    }
    delay(500);
    }
}
 
 
