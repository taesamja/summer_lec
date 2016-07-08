int motor = 2;

void setup() {
  pinMode(motor, OUTPUT);
}

void loop() {
  digitalWrite(motor, HIGH); // 정회전
  delay(1000);               // 1초 유지
  digitalWrite(motor, LOW);  // 정지
  delay(1000);               // 1초 유지
}
