int led[3]={3,6,9};
int sw=5;
int a, i;
int dly=100;
void readd();
void setup() 
{
pinMode(sw,INPUT);
pinMode(3,OUTPUT);
pinMode(6,OUTPUT);
pinMode(9,OUTPUT);
}
void loop() 
{
    readd();
    if(a==1)
    {
      for(i=0;i<=2;i++)
      {
        digitalWrite(led[i],HIGH);
        delay(dly);
        readd();
        }
        for(i=0;i<=2;i++)
      {
        digitalWrite(led[i],LOW);
        delay(dly);
        readd();
        }
        for(i=2;i>=0;i--)
      {
        digitalWrite(led[i],HIGH);
        delay(dly);
        readd();
        }
        for(i=2;i>=0;i--)
      {
        digitalWrite(led[i],LOW);
        delay(dly);
        readd();
        }
    }
    if(a==2)
    {
      for(i=0;i<=2;i++)
      {
        digitalWrite(led[i],HIGH);
        delay(dly);
        readd();
        digitalWrite(led[i],LOW);
        delay(dly);
        readd();
        }
        for(i=2;i>=0;i--)
      {
        digitalWrite(led[i],HIGH);
        delay(dly);
        readd();
        digitalWrite(led[i],LOW);
        delay(dly);
        readd();
        }}
        if(a==3)
        {
          for(i=0;i<=255;i++)
      {
        analogWrite(3,i);
        analogWrite(6,i);
        analogWrite(9,i);
        delay(5);
        readd();
        }
        for(i=255;i>=0;i--)
      {
      analogWrite(3,i);
      analogWrite(6,i);
      analogWrite(9,i);
      delay(5);
      readd();
   
        }
       
        }
        }
        void readd()
        {
  digitalWrite(sw,HIGH);
  if(!digitalRead(sw))
  a++;
  while(!digitalRead(sw))
  {
digitalWrite(sw,HIGH);
  }
  if(a==4)
  a=1;
  delay(10);
        }
