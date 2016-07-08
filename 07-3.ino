int pin[] = {2,3,4,5,6,7,8,9};
int pinSize = sizeof(pin) / sizeof(pin[0]);
int POT = A0;

boolean LED_ON = LOW;
boolean LED_OFF = HIGH;

int sensor_val = 0;
int led_level = 0;

void setup() {
  for(int led=0;led<pinSize;led++) {
    pinMode(pin[led],OUTPUT);
  }
}

void loop() {
  sensor_val = analogRead(POT);
  led_level = map(sensor_val, 0, 1023, 0, pinSize);
  
  for(int led=0;led<pinSize;led++) {
    if(led<led_level) {
      digitalWrite(pin[led],LED_ON); 
    }
    else {
      digitalWrite(pin[led],LED_OFF); 
    }
  }
  
}

