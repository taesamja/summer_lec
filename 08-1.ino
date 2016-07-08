int LED1 = 6;
int LED2 = 5;
int LED3 = 3;

int brightness = 0;
int increment = 1;

void setup() {
  
}

void loop() {
  if(brightness > 255) 
    increment = -1;
  else if(brightness < 1)
    increment = 1;

  brightness = brightness + increment;

  analogWrite(LED1, brightness);
  analogWrite(LED2, brightness);
  analogWrite(LED3, brightness);
 
 delay(10);
}
