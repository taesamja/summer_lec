int switchPin = 2; 
long startTime;
long duration;

void setup()
{
  pinMode(switchPin, INPUT_PULLUP);  
  Serial.begin(9600);
}

void loop()
{
  if(digitalRead(switchPin) == LOW)
  {
    startTime = millis();
    while(digitalRead(switchPin) == LOW) ;
    long duration = millis() - startTime;
    Serial.println(duration);
  }
}
