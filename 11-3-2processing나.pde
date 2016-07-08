import processing.serial.*;
import controlP5.*;

Serial port; 
ControlP5 cp5;
 
int sliderValue = 100;
 
void setup() {
 size(600,200);
 println(Serial.list());
 port = new Serial(this, Serial.list()[2], 9600);
 
 cp5 = new ControlP5(this);
 cp5.addSlider("sliderValue")
    .setPosition(100,50)
    .setRange(0,255)
    .setSize(400,40)
    ;     
}
 
void draw() {
 background(0);
 port.write(sliderValue);
 
 fill(sliderValue);
 rect(0,0,width,200);
}
