#include <HCSR04.h>

HCSR04 hc(4, 3); //initialisation class HCSR04 (trig pin , echo pin)
int sensor = 5;
void setup()
{
  pinMode(sensor, INPUT); 
  Serial.begin(9600); 
  
}

void loop()
{    
    int val = digitalRead(sensor);
    if(val == HIGH){
      Serial.println(val); 
      Serial.println( hc.dist() ); //return current distance (cm) in serial
      if(hc.dist() >= 90.0){
        Serial.println("YELLOW");
      //turn on yellow light turn off other LEDS
      }
      if(hc.dist() == 0 | hc.dist() > 200.0){
      //turn on the green LED and turn off all others
        Serial.println("GREEN");
      }
      if(hc.dist() != 0 && (hc.dist() < 90.0)){
      //turn on the red LED and turn off all others
        Serial.println("RED");
  }
  delay(500);
    }

                     // we suggest to use over 60ms measurement cycle, in order to prevent trigger signal to the echo signal.
}
