int ldr=A5;
int a,b,c;
int led=10;
void setup()
{
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  
}

void loop()
{
  a=analogRead(A5);
  Serial.println(a);
  delay(300);
  if(a<=150)
  {
    for(int i=0;i<=255;i++)
    {
      analogWrite(10,i);
      delay(20);
      }
while(a<=150)
{
  a=analogRead(A5);
}
  }

  else
  {
     
    for(int i=255;i>=0;i--)
    {
      analogWrite(10,i);
      delay(20);
      }
      while(a>150)
{
  a=analogRead(A5);
}
  }
  }

    
  
