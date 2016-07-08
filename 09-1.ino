// direct FND
int pin[] = { 2, 3, 4, 5, 6, 7, 8 };  //A[0] B[1] C[2] D[3] E[4] F[5] G[6]
int pinSize = sizeof(pin) / sizeof(int);
int delaytimeTag = 200;

void setup() {
  for(int i=0; i < pinSize; i++) {
    pinMode(pin[i],OUTPUT);
    digitalWrite(pin[i],HIGH);
  }
}

void loop() {
  digitalWrite(pin[0],LOW);digitalWrite(pin[1],LOW);digitalWrite(pin[2],LOW);
  digitalWrite(pin[3],LOW);digitalWrite(pin[4],LOW);digitalWrite(pin[5],LOW);
  digitalWrite(pin[6],HIGH);delay(delaytimeTag);                                   // 0 ⇒ HIGH:G(6)

  digitalWrite(pin[0],HIGH);digitalWrite(pin[1],LOW);digitalWrite(pin[2],LOW);
  digitalWrite(pin[3],HIGH);digitalWrite(pin[4],HIGH);digitalWrite(pin[5],HIGH);
  digitalWrite(pin[6],HIGH);delay(delaytimeTag);                                   // 1 ⇒ HIGH:A(0),D(3),E(4),F(5),G(6)

  digitalWrite(pin[0],LOW);digitalWrite(pin[1],LOW);digitalWrite(pin[2],HIGH);
  digitalWrite(pin[3],LOW);digitalWrite(pin[4],LOW);digitalWrite(pin[5],HIGH);
  digitalWrite(pin[6],LOW);delay(delaytimeTag);                                    // 2 ⇒ HIGH:C(2),F(5)

  digitalWrite(pin[0],LOW);digitalWrite(pin[1],LOW);digitalWrite(pin[2],LOW);
  digitalWrite(pin[3],LOW);digitalWrite(pin[4],HIGH);digitalWrite(pin[5],HIGH);
  digitalWrite(pin[6],LOW);delay(delaytimeTag);                                    // 3 ⇒ HIGH:E(4),F(5)

  digitalWrite(pin[0],HIGH);digitalWrite(pin[1],LOW);digitalWrite(pin[2],LOW);
  digitalWrite(pin[3],HIGH);digitalWrite(pin[4],HIGH);digitalWrite(pin[5],LOW);
  digitalWrite(pin[6],LOW);delay(delaytimeTag);                                    // 4 ⇒ HIGH:A(0),D(3),E(4)

  digitalWrite(pin[0],LOW);digitalWrite(pin[1],HIGH);digitalWrite(pin[2],LOW);
  digitalWrite(pin[3],LOW);digitalWrite(pin[4],HIGH);digitalWrite(pin[5],LOW);
  digitalWrite(pin[6],LOW);delay(delaytimeTag);                                    // 5 ⇒ HIGH:B(1),E(4)

  digitalWrite(pin[0],HIGH);digitalWrite(pin[1],HIGH);digitalWrite(pin[2],LOW);
  digitalWrite(pin[3],LOW);digitalWrite(pin[4],LOW);digitalWrite(pin[5],LOW);
  digitalWrite(pin[6],LOW);delay(delaytimeTag);                                    // 6 ⇒ HIGH:A(0),B(1)

  digitalWrite(pin[0],LOW);digitalWrite(pin[1],LOW);digitalWrite(pin[2],LOW);
  digitalWrite(pin[3],HIGH);digitalWrite(pin[4],HIGH);digitalWrite(pin[5],LOW);
  digitalWrite(pin[6],HIGH);delay(delaytimeTag);                                   // 7 ⇒ HIGH:D(3),E(4),G(6)

  digitalWrite(pin[0],LOW);digitalWrite(pin[1],LOW);digitalWrite(pin[2],LOW);
  digitalWrite(pin[3],LOW);digitalWrite(pin[4],LOW);digitalWrite(pin[5],LOW);
  digitalWrite(pin[6],LOW);delay(delaytimeTag);                                    // 8 ⇒ HIGH: ․

  digitalWrite(pin[0],LOW);digitalWrite(pin[1],LOW);digitalWrite(pin[2],LOW);
  digitalWrite(pin[3],HIGH);digitalWrite(pin[4],HIGH);digitalWrite(pin[5],LOW);
  digitalWrite(pin[6],LOW);delay(delaytimeTag);                                    // 9 ⇒ HIGH:D(3),E(4)

}
