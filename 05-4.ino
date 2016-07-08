int LED1 = 6;	
int LED2 = 5;	
int LED3 = 3;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
}

void loop() {
  digitalWrite(LED1,HIGH);              //ON
  digitalWrite(LED2,LOW);               //OFF
  digitalWrite(LED3,LOW);delay(1000);   //OFF
  
  digitalWrite(LED1,LOW);               //OFF
  digitalWrite(LED2,HIGH);              //ON
  digitalWrite(LED3,LOW);delay(1000);   //OFF
  
  digitalWrite(LED1,LOW);               //OFF
  digitalWrite(LED2,LOW);               //OFF
  digitalWrite(LED3,HIGH);delay(1000);  //ON  
}

