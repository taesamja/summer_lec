// tone() 함수 이용
#define PI 3.141592
#define piezoPin 9 

float sinVal;
int toneVal;

void setup()
{
   pinMode(piezoPin, OUTPUT);
}
void loop()
{
   for(int i=0;i<180;i++)
   {
      sinVal=sin(i*PI/180); 
      toneVal=(int)(1000*sinVal);
      tone(piezoPin,toneVal);
      delay(10);
   }
}
