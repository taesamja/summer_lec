import processing.serial.*;

Serial port;

void setup() {
 size(250, 200);
 println(Serial.list());
 port = new Serial(this, Serial.list()[2], 9600);
}

void draw() {
 background(0, 0, 255);
 textSize(50);
 text(mouseX, width/4, height*2/3);
 println(mouseX);
 port.write(mouseX);
}
