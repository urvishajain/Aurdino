int led[3]={3,6,9};
int sw=5;
int bz = 10;
int a, i,state=0;
int dly=100;
void readd();
void setup() 
{
pinMode(sw,INPUT);
pinMode(bz,OUTPUT);
pinMode(3,OUTPUT);
pinMode(6,OUTPUT);
pinMode(9,OUTPUT);
}
void loop() 
{
  readd();
  digitalWrite(sw,HIGH);
  if(!digitalRead(sw))
  {
    a++;
  
  if(a==1)
    {
       for(i=0;i<=255;i++)
      {
        analogWrite(3,i);
        readd();
        delay(5);
       
        }
        for(i=255;i>=0;i--)
      {
      analogWrite(3,i);
     readd();
      delay(5);
        }
    }
    if(a==2)
      {
        for(i=0;i<=255;i++)
      {
        analogWrite(6,i);
        delay(5);
        readd();
        }
        for(i=255;i>=0;i--)
      {
      analogWrite(6,i);
      readd();
      delay(5);
      } }
        if(a==3)
        {
          for(i=0;i<=255;i++)
      {
        analogWrite(9,i);
        delay(5);
        readd();
        }
        for(i=255;i>=0;i--)
      {
      analogWrite(9,i);
      delay(5);
      readd();
      }
        }
}
 void readd()
 {
while(!digitalRead(sw))
  {
    if(!a==0||!a==1)
    {
  digitalWrite(bz,HIGH);
  delay(50);
  digitalWrite(bz,LOW);
  delay(50);
    }
  }
