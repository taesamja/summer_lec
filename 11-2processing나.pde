import processing.serial.*;
Serial myPort;

int data1;
PImage img;

int cellsize = 2;
int columns, rows;

void setup() {
       size(840, 600, P3D); 
       img = loadImage("food.jpg"); 
       columns = img.width / cellsize;
       rows = img.height / cellsize;
       println(Serial.list());
       myPort = new Serial(this, Serial.list()[2], 9600);
}

void draw() {
       background(0);
       while (myPort.available () > 0)
       {
               data1 = myPort.read();                
       }

       for ( int i = 0; i < columns; i++) {
               for ( int j = 0; j < rows; j++) {
                       int x = i*cellsize + cellsize/2;  
                       int y = j*cellsize + cellsize/2;  
                       int loc = x + y*img.width;  
                       color c = img.pixels[loc];  
                       float z = (data1*50 / float(width)) * brightness(img.pixels[loc]) - 20.0;
                       pushMatrix();
                       translate(x + 20, y + 20, z);
                       fill(c, 204);
                       noStroke();
                       rectMode(CENTER);
                       rect(0, 0, cellsize, cellsize);
                       popMatrix();
               }
       }
}
