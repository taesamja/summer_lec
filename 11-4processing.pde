import processing.serial.*;
Serial port;
PImage img;

void setup() {
 println(Serial.list());
 port = new Serial(this, Serial.list()[2], 9600);
 
 size(800,600); 
 img = loadImage("color.png"); 
 image(img,0,0,width,height);
}

void draw() {
 color sample = get(mouseX,mouseY); 
 int R = int(red(sample));
 int G = int(green(sample));
 int B = int(blue(sample));
 port.write(R + " " + G + " " + B + "\n");  
  
 print(R);print(" ");print(G);print(" ");print(B);print(" ");
 println();
 delay(20);
}
