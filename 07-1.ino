int LED = 13;
int POT = A0;
int val_time = 0;

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() { 
  val_time = analogRead(POT);

  digitalWrite(LED, HIGH);delay(val_time);
  digitalWrite(LED, LOW);delay(val_time);
}
