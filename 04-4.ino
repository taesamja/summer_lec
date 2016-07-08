void setup(){
  Serial.begin(9600);
}

void loop(){
  if(Serial.available()){
   long value1 = Serial.parseInt();
   long value2 = Serial.parseInt();
   Serial.print("value 1 : ");
   Serial.println(value1);
   Serial.print("value 2 : ");
   Serial.println(value2);
   Serial.print("value1 + value2 = ");
   Serial.println(value1 + value2);
  } 
}
