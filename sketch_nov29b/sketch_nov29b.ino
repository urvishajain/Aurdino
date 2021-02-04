int r1=2,r2=3,r3=4,r4=5,c1=7,c2=8,c3=9;
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
 if(!digitalRead(r2))
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
 }
  
  
 digitalWrite(c1,HIGH);
 digitalWrite(c2,LOW);
 digitalWrite(c3,HIGH);

 digitalWrite(r1,HIGH);
 digitalWrite(r2,HIGH);
 digitalWrite(r3,HIGH);
 digitalWrite(r4,HIGH);

 if(!digitalRead(r1))
 {
  Serial.println("2");
 }
 if(!digitalRead(r2))
 {
  Serial.println("5");
 }
 if(!digitalRead(r3))
 {
  Serial.println("8");
 }
 if(!digitalRead(r4))
 {
  Serial.println("0");
 }

 
 digitalWrite(c1,1);
 digitalWrite(c2,HIGH);
 digitalWrite(c3,0);

 digitalWrite(r1,HIGH);
 digitalWrite(r2,HIGH);
 digitalWrite(r3,HIGH);
 digitalWrite(r4,HIGH);

 if(!digitalRead(r1))
 {
  Serial.println("3");
 }
 if(!digitalRead(r2))
 {
  Serial.println("6");
 }
 if(!digitalRead(r3))
 {
  Serial.println("9");
 }
 if(!digitalRead(r4))
 {
  Serial.println("*");
 }
  
  while(!digitalRead(r1))
  digitalWrite(r1,1);
  while(!digitalRead(r2))
  digitalWrite(r2,1);
  while(!digitalRead(r3))
  digitalWrite(r3,1);
  while(!digitalRead(r4))
  digitalWrite(r4,1);
  delay(200);
}
