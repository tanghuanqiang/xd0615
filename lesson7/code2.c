#include <MsTimer2.h>
int pinInterrupt=2;
int IN1 =6;
int IN2 =7;
int IN3 =8;
int IN4 =9;
byte number;
int tick = 0; //计数
//中断服务程序
void change()
{
	tick = 0;
}
void myfunc()
{
  number = byte(tick);
  digitalWrite(IN1,number&0x1);
  digitalWrite(IN2,(number>>1)&0x1);
  digitalWrite(IN3,(number>>2)&0x1);
  digitalWrite(IN4,(number>>3)&0x1);
  if(tick==9)
    tick=0;
  else
    tick++;
  
}
void setup()
{
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(12,HIGH);
  //
  Serial.begin(9600); //初始化串口
  //
  MsTimer2::set(1000,myfunc);
  MsTimer2::start();
  //
  attachInterrupt( digitalPinToInterrupt(pinInterrupt), change, CHANGE);
}
 
void loop()
{
  
}

