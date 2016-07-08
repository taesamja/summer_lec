import processing.serial.*;
Serial port;
 
void setup(){
 port = new Serial(this, Serial.list()[2]);
}
 
void draw(){
 port.write('H');
 delay(1000);
 
 port.write('L');
 delay(1000);
} 
