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
  Serial.begin(9600);
}
void loop()
{
  digitalWrite(sw1,HIGH);
 
  if(!digitalRead(sw1))
  { 
    Serial.println(a);
    a++;

  
     while(!digitalRead(sw1))

 digitalWrite(sw1,HIGH);
   delay(10);
    }
  

}
 
