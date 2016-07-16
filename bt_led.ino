#include <SoftwareSerial.h>

SoftwareSerial BTSerial(3, 2); //Rx, Tx
const int ledPin = 13;
char indata;

void setup() {
  BTSerial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() { 
  if(BTSerial.available()) {
    indata = BTSerial.read();
  
    if(indata == 'H') 
      digitalWrite(ledPin, HIGH);
    if(indata == 'L') 
      digitalWrite(ledPin, LOW);
  }
} 
