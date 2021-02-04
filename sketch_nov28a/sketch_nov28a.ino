int led[7]={2,3,4,5,6,7,8};
int sw=12,a=0;
int sw1=13;
int bz=10;
int dly=0,b,cnt,c;
void readd();
void setup() 
{
 
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(bz,OUTPUT);
  pinMode(12,INPUT);
  pinMode(sw1,INPUT);
 }
 void loop()
 {
  digitalWrite(sw1,HIGH);
  digitalWrite(sw,HIGH);
  if(!digitalRead(sw) || !digitalRead(sw1))
  {
  if(!digitalRead(sw))
  {
    a++;
  }
  
  if(!digitalRead(sw1))
  {
    a--;
  }
  if(a<10 && a>=0)
  {
    b=a;
    readd();
      digitalWrite(bz,HIGH);
  delay(200);
  digitalWrite(bz,LOW);
  }
 if(a>9)
 {
  cnt=a;
  b=a/10;
  readd();
  b=cnt%10;
  readd();
    digitalWrite(bz,HIGH);
  delay(200);
  digitalWrite(bz,LOW);
 }
 
while(!digitalRead(sw))
digitalWrite(sw,1);
while(!digitalRead(sw1))
digitalWrite(sw1,1);
delay(100);
}
 }
void readd()
  {

   
  if(b==0)
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
  if(b==1)
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
if(b==2)
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
if(b==3)
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
if(b==4)
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
if(b==5)
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
if(b==6)
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
if(b==7)
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
if(b==8)
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
if(b==9)
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
delay(500);
digitalWrite(led[0],0);
  digitalWrite(led[1],0);
  digitalWrite(led[2],0);
  digitalWrite(led[3],0);
  digitalWrite(led[4],0);
  digitalWrite(led[5],0);
  digitalWrite(led[6],0);
  delay(200);


 }
