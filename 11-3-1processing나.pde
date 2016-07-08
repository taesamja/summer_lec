import processing.serial.*;
Serial port;

void setup() { 
 size(200, 200); 
 noStroke(); 
 frameRate(10);
 port = new Serial(this, Serial.list()[2], 9600);
}

void draw() {
 background(255);
 
 if (mouseOverRect() == true)  { 
   fill(255,0,0);                     
   port.write('H');              
 } else {                        
   fill(0);                      
   port.write('L');              
 }
 rect(50, 50, 100, 100); 
 
}

boolean mouseOverRect() {        
 return ((mouseX >= 50) && (mouseX <= 150) && (mouseY >= 50) && (mouseY <= 150));
}
