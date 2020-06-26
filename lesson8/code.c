int pos = 0;

void setup()
{
  pinMode(8, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  // 关闭pin8的的tone函数（首次循环无效果）
  noTone(8);
  // 在pin6演奏200ms的音符
  tone(6, 880, 200); // 演奏音符 69 (A5 = 880 Hz)
  delay(200); // 等待200秒
  // 关闭pin6的的tone函数
  noTone(6);
  // 在pin7演奏500ms的音符
  tone(7, 988, 500); // 演奏音符 71 (B5 = 988 Hz)
  delay(500); // 等待500秒
  // 关闭pin7的的tone函数
  noTone(7);
  //在pin8演奏300ms的音符
  tone(8, 1047, 300); // 演奏音符 72 (C6 = 1047 Hz)
  delay(300); // 等待300秒
}
