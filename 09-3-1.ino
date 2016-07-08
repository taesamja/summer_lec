// 74HC595를 이용한 FND : 0 ~ 9 반복
int dataPin = 10; 
int latchPin = 11; 
int clockPin = 12;
byte dec_digits[] = {0b0111111, 0b0000110, 0b1011011, 0b1001111, 0b1100110, 
                     0b1101101, 0b1111100, 0b0000111, 0b1111111, 0b1100111 };

void setup() {
  pinMode(latchPin, OUTPUT); 
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
}

void loop() {
    for (int numberToDisplay = 0; numberToDisplay < 10; numberToDisplay++) {
      digitalWrite(latchPin, LOW);
      shiftOut(dataPin, clockPin, MSBFIRST, ~dec_digits[numberToDisplay]);
      digitalWrite(latchPin, HIGH);
      
      delay(300);
    }
    
}
