int LED_output = 13;
int SW_input = 2;

void setup() {
  pinMode(LED_output, OUTPUT);
  pinMode(SW_input, INPUT_PULLUP);
}

void loop() { 
  int val = digitalRead(SW_input);
  
  if(val == LOW) {                       //SW-ON
    digitalWrite(LED_output,LOW); }
  else {                                 //SW-OFF
    digitalWrite(LED_output,HIGH); }
} 
