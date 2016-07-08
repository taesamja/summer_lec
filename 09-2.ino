//00000000 ~ 11111111 repeat
int dataPin = 10; 
int latchPin = 11; 
int clockPin = 12;

void setup() {
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
}

void loop() {
  for (int num = 0; num < 256; num++) { 
    digitalWrite(latchPin, LOW); 
    shiftOut(dataPin, clockPin, MSBFIRST, num);
    digitalWrite(latchPin, HIGH); 
    
    delay(1000);
  }
  
}
