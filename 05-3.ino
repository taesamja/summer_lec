int pin[] = {2,3,4,5,6,7,8,9};
int pinSize = sizeof(pin) / sizeof(pin[0]);
int wait = 30;

void setup() {
  for(int led=0;led<pinSize;led++) {
    pinMode(pin[led],OUTPUT);
  }
}

void loop() {
  //LED를 왼쪽에서 오른쪽으로 이동 동작
  for(int led=0;led<pinSize-1;led++) {
    digitalWrite(pin[led],HIGH);
    delay(wait);    
    digitalWrite(pin[led+1],HIGH);
    delay(wait);
    digitalWrite(pin[led],LOW);
    delay(wait*2);
  }
  //LED를 오른쪽에서 왼쪽으로 이동 동작
  for(int led=pinSize-1;led>0;led--) {
    digitalWrite(pin[led],HIGH);
    delay(wait);
    digitalWrite(pin[led-1],HIGH);
    delay(wait);
    digitalWrite(pin[led],LOW);
    delay(wait*2);
  }
}

