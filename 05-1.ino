int LED1 = 6;
int LED2 = 5;
int LED3 = 3;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
}

void loop() {
  digitalWrite(LED1, HIGH);delay(1000);
  digitalWrite(LED1, LOW); delay(1000);
  
  digitalWrite(LED2, HIGH);delay(1000);
  digitalWrite(LED2, LOW); delay(1000);
  
  digitalWrite(LED3, HIGH);delay(1000);
  digitalWrite(LED3, LOW); delay(1000);
}
