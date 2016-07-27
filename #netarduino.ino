const int ledPin = 13;
char indata;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  if(Serial.available()) {
    indata = Serial.read();
    if(indata== 'H') {
      digitalWrite(ledPin, HIGH);
    }
    if(indata== 'L') {
      digitalWrite(ledPin, LOW);
    }
  }
}
