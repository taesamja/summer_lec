int R = 11;
int G = 10;
int B = 9;

void setup() {
  Serial.begin(9600);
}

void loop() {
  while (Serial.available()) {
    int red = Serial.parseInt();
    int green = Serial.parseInt();
    int blue = Serial.parseInt();
    if (Serial.read() == '\n') {
      analogWrite(R,red);
      analogWrite(G,green);
      analogWrite(B,blue);
    }
  }
  
}
