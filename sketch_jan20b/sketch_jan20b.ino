int trigpin=8;
int echopin=9;
long duration,distance;
int m1=3,m2=10,m3=6,m4=11;
int dly=200;
void setup()
{
  pinMode(m1,OUTPUT);
  pinMode(m2,OUTPUT);
  pinMode(m3,OUTPUT);
  pinMode(m4,OUTPUT);
  Serial.begin(9600);
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);

 


}
void loop()
{
  analogWrite(m1,100);
  analogWrite(m2,0);
  analogWrite(m3,120);
  analogWrite(m4,0);
  delay(2000);
  analogWrite(m1,0);
  analogWrite(m2,120);
  analogWrite(m3,0);
  analogWrite(m4,120);
  delay(2000);
}
