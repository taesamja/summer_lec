int LED = 13;
int POT = A0;

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() { 
  int val, percent;
  
  val = analogRead(POT);
  percent = map(val, 0, 1023, 0, 100);
  
  digitalWrite(LED, HIGH); delay(percent);
  digitalWrite(LED, LOW);  delay(100-percent);
  Serial.println(percent);
}
