int led[3]={3,6,9};
int sw=5;
int a, i,state=0;
int dly=100;
void setup() 
{
pinMode(sw,INPUT);
pinMode(3,OUTPUT);
pinMode(6,OUTPUT);
pinMode(9,OUTPUT);
digitalWrite(3,0);
digitalWrite(6,0);
digitalWrite(9,0);
delay(2000);
}
void loop() 
{
    digitalWrite(sw,HIGH);
  if(!digitalRead(sw))
  {
    a++;
  if(a==4)
  a=1;
  }
    if(a==1)
    {
     for(i=0;i<=255;i++)
      {
        analogWrite(3,i);
        delay(dly);
    while(!digitalRead(sw))
    {
      digitalWrite(sw,HIGH);
 
       }
       //break;
       }
    }
   /* if(a==2)
    {
     for(i=0;i<=255;i++)
      {
        analogWrite(6,i);
        delay(dly);
       
        while(!digitalRead(sw))
       
       {
        digitalWrite(sw,HIGH);
       
       }
       break;
      }
       }
       if(a==3)
    {
     for(i=0;i<=255;i++)
      {
        analogWrite(9,i);
        delay(dly);
       while(!digitalRead(sw))
       {
        digitalWrite(sw,HIGH);
       
       }
       break;
      }}*/
    }
