boolean SW = HIGH;

void setup() {
  pinMode(2, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  SW = digitalRead(2);
  
  if(SW == LOW) {
    Serial.write(1);
  }
  else {
    Serial.write(0);
  }
  
  delay(100);
}
