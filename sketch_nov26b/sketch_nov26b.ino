int led[7]={2,3,4,5,6,7,8};
int sw1=12,sw2=13,a;
int dly=10;
int bz = 10;
void readd();
void printt();
void setup() 
{
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(12,INPUT);
  pinMode(10,OUTPUT);
  
  }
 void loop()
 {
  digitalWrite(sw1,HIGH);
  if(!digitalRead(sw1))
  readd();
  printt();
  digitalWrite(sw2,HIGH);
  if(!digitalRead(sw2))
 readd();
 printt();
 }
  void printt()
{  
  if(a==1)
  {
  digitalWrite(led[0],1);
  digitalWrite(led[1],1);
  digitalWrite(led[2],1);
  digitalWrite(led[3],1);
  digitalWrite(led[4],1);
  digitalWrite(led[5],1);
  digitalWrite(led[6],0);
  
  delay(dly);
  readd();
  }
  if(a==2)
  {
  digitalWrite(led[0],0);// 1
  digitalWrite(led[1],0);
  digitalWrite(led[2],1);
  digitalWrite(led[3],1);
  digitalWrite(led[4],0);
  digitalWrite(led[5],0);
  digitalWrite(led[6],0);
  delay(dly);
  readd();
  }
if(a==3)
{
  digitalWrite(led[0],1);
  digitalWrite(led[1],1);
  digitalWrite(led[2],0);
  digitalWrite(led[3],1);
  digitalWrite(led[4],1);
  digitalWrite(led[5],0);
  digitalWrite(led[6],1);
delay(dly);

readd();
}
if(a==4)
{
  digitalWrite(led[0],0);
  digitalWrite(led[1],1);
  digitalWrite(led[2],1);
  digitalWrite(led[3],1);
  digitalWrite(led[4],1);
  digitalWrite(led[5],0);
  digitalWrite(led[6],1);
  delay(dly);
readd();
}
if(a==5)
{

  digitalWrite(led[0],0);
  digitalWrite(led[1],0);
  digitalWrite(led[2],1);
  digitalWrite(led[3],1);
  digitalWrite(led[4],0);
  digitalWrite(led[5],1);
  digitalWrite(led[6],1);
  delay(dly);
readd();
}
if(a==6)
{
  digitalWrite(led[0],0);
  digitalWrite(led[1],1);
  digitalWrite(led[2],1);
  digitalWrite(led[3],0);
  digitalWrite(led[4],1);
  digitalWrite(led[5],1);
  digitalWrite(led[6],1);
delay(dly);
readd();
}
if(a==7)
{
  digitalWrite(led[0],1);
  digitalWrite(led[1],1);
  digitalWrite(led[2],1);
  digitalWrite(led[3],0);
  digitalWrite(led[4],1);
  digitalWrite(led[5],1);
  digitalWrite(led[6],1);
  delay(dly);
readd();
}
if(a==8)
{
  digitalWrite(led[0],0);
  digitalWrite(led[1],0);
  digitalWrite(led[2],1);
  digitalWrite(led[3],1);
  digitalWrite(led[4],1);
  digitalWrite(led[5],0);
  digitalWrite(led[6],0);
  delay(dly);
readd();
}
if(a==9)
{
  digitalWrite(led[0],1);
  digitalWrite(led[1],1);
  digitalWrite(led[2],1);
  digitalWrite(led[3],1);
  digitalWrite(led[4],1);
  digitalWrite(led[5],1);
  digitalWrite(led[6],1);
delay(dly);
readd();
}
if(a==10)
{
  digitalWrite(led[0],0);
  digitalWrite(led[1],1);
  digitalWrite(led[2],1);
  digitalWrite(led[3],1);
  digitalWrite(led[4],1);
  digitalWrite(led[5],1);
  digitalWrite(led[6],1);
  digitalWrite(bz,1);
 readd();
 a=0;
  delay(10);
 
}

while(!digitalRead(sw1))
{
digitalWrite(sw1,1);
delay(10);
}
while(!digitalRead(sw2))
{
digitalWrite(sw2,1);
delay(10);
}
}
 

void readd()
{
  digitalWrite(sw1,1);

  
  if(!digitalRead(sw1))
  {
    a++;
    if(a==10)
    digitalWrite(bz,1);
  }
  digitalWrite(sw2,1);
  if(!digitalRead(sw2))
  {
    a--;
    if(a==0)
    digitalWrite(bz,1);
  }
}
