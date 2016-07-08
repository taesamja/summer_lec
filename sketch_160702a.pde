import processing.serial.*;
Serial port;
PImage img;

void setup() {
  port = new Serial(this,Serial.list()[1],9600);
  size(706,561); 
  img = loadImage("이미지파일"); 
  image(img,0,0,width,height);
}

void draw() {
  color sample = get(mouseX,mouseY); 
  //Red, Green, Blue
  int R = int(red(sample));
  int G = int(green(sample));
  int B = int(blue(sample));
  port.write(R + " " + G + " " + B + "\n");  
  println(R);
  println(G);
  println(B);
  delay(20);
}