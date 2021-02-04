int r1=2,r2=4,r3=7,r4=8,c1=9,c2=10,c3=11;
void setup() 
{
  pinMode(r1,INPUT);
  pinMode(r2,INPUT);
pinMode(r3,INPUT); 
pinMode(r4,INPUT);
pinMode(c1,OUTPUT);
pinMode(c2,OUTPUT);
pinMode(c3,OUTPUT);
Serial.begin(9600);
 }
void loop() 
{
 digitalWrite(c1,LOW);
 digitalWrite(c2,HIGH);
 digitalWrite(c3,HIGH);

 digitalWrite(r1,HIGH);
 digitalWrite(r2,HIGH);
 digitalWrite(r3,HIGH);
 digitalWrite(r4,HIGH);

 if(!digitalRead(r1))
 {
  Serial.println("1");
 }
 /*if(!digitalRead(r2))
 {
  Serial.println("4");
 }
 if(!digitalRead(r3))
 {
  Serial.println("7");
 }
 if(!digitalRead(r4))
 {
  Serial.println("#");
 }*/
 
 
}
 
