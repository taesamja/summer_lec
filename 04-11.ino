/*
//Serial.read() 함수 사용
void setup(){
  Serial.begin(9600);
}

void loop(){
  if(Serial.available()){
    Serial.println(Serial.read());
  }
}
*/

//Serial.peek() 함수 사용
void setup(){
  Serial.begin(9600);
}

void loop(){
  if(Serial.available()){
    Serial.println(Serial.peek());
  }
}
