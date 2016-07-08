// analogWrite() 함수 이용
int piezo = 9;          
int del = 1000;         

void setup() {
     
}

void loop() 
{
  analogWrite(piezo, 64);           // PWM 25% 적용
  delay(del);                       // 1초 대기
  analogWrite(piezo, 128);          // PWM 50% 적용
  delay(del);                       // 1초 대기
  analogWrite(piezo, 255);          // PWM 100% 적용
  delay(del);                       // 1초 대기
}
