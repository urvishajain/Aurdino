int r1=2,r2=3,r3=4,r4=5,c1=7,c2=8,c3=9;
int pswd;
int led=13;
int a,b,c,d;
void process();
void setup() 
{
  pinMode(r1,INPUT);
  pinMode(r2,INPUT);
pinMode(r3,INPUT); 
pinMode(r4,INPUT);
pinMode(c1,OUTPUT);
pinMode(c2,OUTPUT);
pinMode(c3,OUTPUT);
pinMode(led,OUTPUT);
Serial.begin(9600);
 }
void loop() 
{
 Serial.println("enter the one no");
 process(); 
 a=pswd;
 Serial.println("enter the second no");
 process(); 
 b=pswd;
 Serial.println("enter the third no");
 process(); 
 c=pswd;
 Serial.println("enter the fourth no");
 process(); 
 d=pswd;
 if(a==7 && b==6 && c==3 && d==4)
 {
  Serial.println("U r Accessed");
  digitalWrite(led,HIGH);
 }
 else
 {
  Serial.println(" U r Declined");
  digitalWrite(led,LOW);
 }
 
 //Serial.println(pswd);
  while(1);
  
}

void process()
{
  while(1)
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
  while(!digitalRead(r1))
  digitalWrite(r1,HIGH);
  pswd=1;
  break;
 }
 if(!digitalRead(r2))
 {
  Serial.println("4");
  while(!digitalRead(r2))
  digitalWrite(r2,HIGH);
  pswd=4;
  break;
 }
 if(!digitalRead(r3))
 {
  Serial.println("7");
  while(!digitalRead(r3))
  digitalWrite(r3,HIGH);
  pswd=7;
  break;
 }
 if(!digitalRead(r4))
 {
  Serial.println("#");
  while(!digitalRead(r4))
  digitalWrite(r4,HIGH);
  pswd=22;
  break;
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
  while(!digitalRead(r1))
  digitalWrite(r1,HIGH);
  pswd=2;
  break;
 }
 if(!digitalRead(r2))
 {
  Serial.println("5");
  while(!digitalRead(r2))
  digitalWrite(r2,HIGH);
  pswd=5;
  break;
 }
 if(!digitalRead(r3))
 {
  Serial.println("8");
  while(!digitalRead(r3))
  digitalWrite(r3,HIGH);
  pswd=8;
  break;
 }
 if(!digitalRead(r4))
 {
  Serial.println("0");
  
  while(!digitalRead(r4))
  digitalWrite(r4,HIGH);
  pswd=0;
  break;
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
  while(!digitalRead(r1))
  digitalWrite(r1,HIGH);
  pswd=3;
  break;
 }
 if(!digitalRead(r2))
 {
  Serial.println("6");
  while(!digitalRead(r2))
  digitalWrite(r2,HIGH);
  pswd=6;
  break;
 }
 if(!digitalRead(r3))
 {
  Serial.println("9");
  while(!digitalRead(r3))
  digitalWrite(r3,HIGH);
  pswd=9;
  break;
 }
 if(!digitalRead(r4))
 {
  Serial.println("*");
  while(!digitalRead(r4))
  digitalWrite(r4,HIGH);
  pswd=22;
  break;
 }
  delay(200);
  }
}
