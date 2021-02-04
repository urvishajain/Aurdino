int ldr=A5;
int a,b,c;
int led=8;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  a=analogRead(A5);
  Serial.println(a);
  delay(300);
  if(a>=800)
  {
    digitalWrite(led,HIGH);
    Serial.println("temp detected");
  }
  else
  digitalWrite(led,LOW);
  }

  
