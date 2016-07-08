void setup(){
  Serial.begin(9600);
}

void loop(){ 
  
}

void serialEvent(){
  char text = Serial.read();
  Serial.print("data : ");
  Serial.println(text);
}
