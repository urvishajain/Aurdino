int led[7]={2,3,4,5,6,7,8};
int bz=10;
int sw=12,a=1;
int sw1=13;
int dly=0;
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
  pinMode(sw1,INPUT);
  pinMode(bz,OUTPUT);
  }
 void loop()
 {
  digitalWrite(sw1,HIGH);
  digitalWrite(sw,HIGH);
  if(!digitalRead(sw) || !digitalRead(sw1))
  {
  if(!digitalRead(sw))
  a++;
  if(!digitalRead(sw1))
  a--;
 
  if(a<1)
  {
    a=1;
    digitalWrite(bz,HIGH);
  }
  else if(a>10)
  {
    a=10;
    digitalWrite(bz,HIGH);
  }
  else
  digitalWrite(bz,LOW);
  
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
  delay(dly);
}

while(!digitalRead(sw))
digitalWrite(sw,1);
while(!digitalRead(sw1))
digitalWrite(sw1,1);
delay(100);
}
 }
 
  
  
  
  
  
  
