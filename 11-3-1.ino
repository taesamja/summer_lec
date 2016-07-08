char val = 'H';
int led = 9;
 
void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}
 
void loop() {
  if(Serial.available()>0){
    val = Serial.read();
    if(val == 'H'){
      digitalWrite(led, HIGH);
    } else {
      digitalWrite(led, LOW);
    }
  }
  
} 
