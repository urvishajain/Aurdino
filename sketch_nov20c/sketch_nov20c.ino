int led1=8;
int sw1=5;
int b=0;
int a=0;
int led2=11;
int sw2=12;
void setup()
{
  pinMode(led1,OUTPUT);
  pinMode(sw1,INPUT);
   pinMode(led2,OUTPUT);
  pinMode(sw2,INPUT);
}
void loop()
{
  digitalWrite(sw1,HIGH);
 
  if(!digitalRead(sw1))
  { 
    a++;

    if(a==1)
  
    {
      digitalWrite(led1,HIGH);
     
    }
    if(a==2)
   
    {
      digitalWrite(led1,LOW);
      a=0;
      
    }
     while(!digitalRead(sw1))

 digitalWrite(sw1,HIGH);
   delay(10);
    }
    digitalWrite(sw2,HIGH);
if(!digitalRead(sw2))
  { 
    a++;

    if(a==1)
  
    {
      digitalWrite(led2,HIGH);
     
    }
    if(a==2)
   
    {
      digitalWrite(led2,LOW);
      a=0;
      
    }
     while(!digitalRead(sw2))

 digitalWrite(sw2,HIGH);
   delay(10);
    }
}
 
