void setup(){
  Serial.begin(9600);
}

long temp = 0;

void loop(){
  while(Serial.available()){
   if(Serial.find("f")){
     temp = Serial.parseInt();
   }else{
    temp = 0;
   }
   Serial.print("Temp Value = ");
   Serial.println(temp);
  }
}
