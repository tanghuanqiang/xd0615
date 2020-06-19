char ch=' ';
int i=0;
void setup()
{
  Serial.begin(9600);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  Serial.println("The motors are ready!!\n You can enter f or b or r or l or s or m or M");
}

/*
预定
'f':表示前进
'b':表示后退
'r':表示右转
'l':表示左转
's':表示停止
'M':加速
'm'：减速
*/
void loop()
{
  if(Serial.available()>0)
  {
  	ch=Serial.read();
    switch(ch)
    {
    case 'f':
      digitalWrite(5,HIGH);
      digitalWrite(6,LOW);
      digitalWrite(9,HIGH);
      digitalWrite(10,LOW);
      break;
    case 'M':
      for(i=0;i<=255;i+=5)
      {
      	analogWrite(5, i);
        analogWrite(6, LOW);
        analogWrite(9, i);
        analogWrite(10, LOW);
        delay(200);
      }
      break;
    case 'm':
      for(i=255;i>=0;i-=5)
      {
      	analogWrite(5, i);
        analogWrite(6, LOW);
        analogWrite(9, i);
        analogWrite(10, LOW);
        delay(200);
      }
      break;
    case 'b':
      digitalWrite(6,HIGH);
      digitalWrite(5,LOW);
      digitalWrite(10,HIGH);
      digitalWrite(9,LOW);
      break;
    case 'l':
      digitalWrite(6,HIGH);
      digitalWrite(5,LOW);
      digitalWrite(9,HIGH);
      digitalWrite(10,LOW);
      break;
    case 'r':
      digitalWrite(5,HIGH);
      digitalWrite(6,LOW);
      digitalWrite(10,HIGH);
      digitalWrite(9,LOW);
      break;
    case 's':
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      digitalWrite(9,LOW);
      digitalWrite(10,LOW);
      break;
    default:
      break;
    }
  }
}
