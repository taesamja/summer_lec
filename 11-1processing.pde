import processing.serial.*;
Serial myPort;
int val;      

void setup() 
{
       size(200, 200);
       println(Serial.list());
       myPort = new Serial(this, Serial.list()[2], 9600);
}

void draw()
{
       if ( myPort.available() > 0) { 
               val = myPort.read();   
       }
        
       background(255);             
       if (val == 0) {              
               fill(0);             
       } 
       else {                       
               fill(255,0,0);           
       }
       rect(50, 50, 100, 100);
       
}
