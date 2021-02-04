int led[3]={3,6,9};
int sw=5;
int bz = 10;
int a, i,state=0;
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
    digitalWrite(sw,HIGH);
  if(!digitalRead(sw))
  {
    a++;
    while(!digitalRead(sw))
  {
digitalWrite(sw,HIGH);
  }
  //if(a==4)
 // a=1;
    if(a==1)
    {
     for(i=0;i<=255;i++)
      {
        analogWrite(3,i);
        delay(20);
        digitalWrite(sw,HIGH);
  if(!digitalRead(sw))
  {
    break;
  }
        }
        if(i>255)
        analogWrite(3,0);
        
  
    }
    if(a==2)
    {
      for(i=0;i<=255;i++)
      {
        analogWrite(6,i);
        delay(20);
        digitalWrite(sw,HIGH);
  if(!digitalRead(sw))
  {
    break;
  }
        }
        if(i>255)
        analogWrite(6,0);
        
     }
        if(a==3)
        {
          
       for(i=0;i<=255;i++)
      {
        analogWrite(9,i);
        delay(20);
        digitalWrite(sw,HIGH);
  if(!digitalRead(sw))
  {
    break;
  }
        }
        if(i>255)
        analogWrite(9,0);
        }
  }
        }
