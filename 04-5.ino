void setup(){
  Serial.begin(9600);
}

void loop(){
  if(Serial.available()){
   float value1 = Serial.parseFloat();
   float value2 = Serial.parseFloat();
   Serial.print("value 1 : ");
   Serial.println(value1);
   Serial.print("value 2 : ");
   Serial.println(value2);
   Serial.print("value1 + value2 = ");
   Serial.println(value1 + value2);
 } 
} 
