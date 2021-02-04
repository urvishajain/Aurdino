int led=3;
int i;
int dly=5;
void setup() 
{
 pinMode(led,OUTPUT);

}

void loop() 
{
  for(i=0;i<=250;i++)
  {
    analogWrite(led,i);
    delay(dly);
  }
  for(i=250;i>=0;i--)
  {
    analogWrite(led,i);
    delay(dly);
  }
}
