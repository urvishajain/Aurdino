int led[3]={3,6,9};
int sw=5;
int a, i,state=0;
int dly=300;
void setup() 
{
pinMode(sw,INPUT);
pinMode(3,OUTPUT);
pinMode(6,OUTPUT);
pinMode(9,OUTPUT);
}
void loop() 
{
  while(state==0)
  {
  
   
      for(i=0;i<=2;i++)
      {
        digitalWrite(led[i],HIGH);
        delay(dly);
        }
        for(i=0;i<=2;i++)
      {
        digitalWrite(led[i],LOW);
        delay(dly);
        }
        for(i=2;i>=0;i--)
      {
        digitalWrite(led[i],HIGH);
        delay(dly);
        }
        for(i=2;i>=0;i--)
      {
        digitalWrite(led[i],LOW);
        delay(dly);
        }
    }
    while(state==1)
    {
      for(i=0;i<=2;i++)
      {
        digitalWrite(led[i],HIGH);
        delay(dly);
        digitalWrite(led[i],LOW);
        delay(dly);
        }
        for(i=2;i>=0;i--)
      {
        digitalWrite(led[i],HIGH);
        delay(dly);
        digitalWrite(led[i],HIGH);
        delay(dly);
        }}
       while
          for(i=0;i<=255;i++)
      {
        analogWrite(3,i);
        analogWrite(6,i);
        analogWrite(9,i);
        delay(dly);
        }
        for(i=255;i>=0;i--)
      {
      analogWrite(3,i);
      analogWrite(6,i);
      analogWrite(9,i);
      delay(dly);
   
        }
        a=0;
        }
        }
