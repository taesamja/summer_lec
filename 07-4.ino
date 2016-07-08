int sensorMin = 0;       //실험치
int sensorMax = 600;     //실험치
int CDS = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensor_val = analogRead(CDS);
  int range = map(sensor_val, sensorMin, sensorMax, 0, 3);
  
  switch(range) {
    case 0:     
            Serial.println("dark");    
            break;
    case 1:     
            Serial.println("dim");     
            break;
    case 2: 
            Serial.println("medium");  
            break;
    case 3:     
            Serial.println("bright");  
            break;
  }
  
  delay(1);                    //입력 안정화를 위한 지연시간
}


