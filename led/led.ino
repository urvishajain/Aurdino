int led=8;
int sw=5;
int a=0;
void setup()
{
  pinMode(led,OUTPUT);
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
    }
    if(a==2)
    {
      digitalWrite(led,LOW);
      a=0;
    }
    delay(500);
    }
}
 
 
