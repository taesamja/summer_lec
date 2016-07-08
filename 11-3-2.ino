int light = 0;  
int pwmled = 9;  
 
void setup() {
  Serial.begin(9600);
}
 
void loop() {
  if(Serial.available() > 0){
    light = Serial.read();
    analogWrite(pwmled, light);
  }
}
