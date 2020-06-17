int i=0;
void setup()
{
  for(i=0;i<14;i++){
  	pinMode(i, OUTPUT);
  }
}

void loop()
{
  for(i=0;i<14;i++){
  	digitalWrite(i,HIGH);
    delay(50);
    digitalWrite(i,LOW);
  }
}