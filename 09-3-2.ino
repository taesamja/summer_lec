// 74HC595와 시리얼 입력을 통한 FND 출력
// 0->63,    1->6,     2->91,  3->79,    4->102,
// 5->109,   6->124,   7->7,   8->127,   9->103
int dataPin = 10; 
int latchPin = 11; 
int clockPin = 12;

int val;

void setup() {
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  while(Serial.available()) {
    val = Serial.parseInt();
    Serial.println(val, BIN);
   
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, ~val);
    digitalWrite(latchPin, HIGH);   
    
    delay(1000);
  }
  
}
