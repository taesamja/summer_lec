import processing.serial.*;
import processing.net.*;

Serial wifi_port;
Server wifi_server;
Client wifi_client;

String in_msg;
char indata;
PFont f;

void setup() {
   size(200,200);
   println(Serial.list()); 
   wifi_port = new Serial(this,
               Serial.list()[0],9600); 
   wifi_server = new Server(this,5204);
   
   f=createFont("Arial",32,true);
   textFont(f);textAlign(CENTER);fill(0);
   text("WiFi Smart",width/2, height/2);
}

void draw() {
 wifi_client = wifi_server.available();
 if(wifi_client != null) {
  in_msg = wifi_client.readString();
  indata=in_msg.charAt(in_msg.length()-1);

  if (indata == 'H') {
    wifi_port.write('H');
    background(255,0,0);fill(255);
    text("LED ON", width/2, height/2);
   } 
   else if(indata == 'L') {
     wifi_port.write('L');
     background(0);fill(255);      
     text("LED OFF", width/2, height/2);
   }
  }
}


