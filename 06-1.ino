int LED_output = 13;
int SW_input = 2;

void setup() {
  pinMode(LED_output, OUTPUT);
  pinMode(SW_input, INPUT);
}

void loop() { 
  int PUL_D_val = digitalRead(SW_input);
  if(PUL_D_val == HIGH) {                    //SW-ON
    digitalWrite(LED_output,HIGH); }
  else {                                     //SW-OFF
    digitalWrite(LED_output,LOW); }
} 
