#include <Adafruit_CircuitPlayground.h>
//make variable value
int value;

void setup() {
 //initialize serial monitor 
  Serial.begin(9600);
//start the circuit playground  
  CircuitPlayground.begin();
  //turn lights white
    CircuitPlayground.setPixelColor(0, 255,   255,   255);
  CircuitPlayground.setPixelColor(1, 255, 255,   255);
  CircuitPlayground.setPixelColor(2,   255, 255,   255);
  CircuitPlayground.setPixelColor(3,   255, 255, 255);
  CircuitPlayground.setPixelColor(4,   255,   255, 255); 
  CircuitPlayground.setPixelColor(5, 255, 255 , 255);
  CircuitPlayground.setPixelColor(6, 255, 255, 255);
  CircuitPlayground.setPixelColor(7,255, 255, 255);
  CircuitPlayground.setPixelColor(8, 255, 255 , 255);
  CircuitPlayground.setPixelColor(9, 255, 255, 255);
   //delay 1/10 of a sec
   delay(1000);

}







void loop() {
//starts the neopixels and clears all the colors  
  CircuitPlayground.clearPixels();
//make the value the light sensor recieves assign it to variable value  
  value = CircuitPlayground.lightSensor();
//make a variable x assign a random value between 0-5000
  int x =  random(0,5000);
//make x the delay so randomly between 0 & 5sec the following steps happen
 
  delay(x);

int var = 0;
 while(var < 1){ 



  value = CircuitPlayground.lightSensor();
  Serial.print("Light Sensor: ");
  Serial.println(value);
  if(value < 180){
    //turn lights green
  CircuitPlayground.setPixelColor(0, 0,   255,   0);
  CircuitPlayground.setPixelColor(1, 0, 255,   0);
  CircuitPlayground.setPixelColor(2,   0, 255,   0);
  CircuitPlayground.setPixelColor(3,   0, 255, 0);
  CircuitPlayground.setPixelColor(4,   0,   255, 0); 
  CircuitPlayground.setPixelColor(5, 0, 255 , 0);
  CircuitPlayground.setPixelColor(6, 0, 255, 0);
  CircuitPlayground.setPixelColor(7,0, 255, 0);
  CircuitPlayground.setPixelColor(8, 0, 255 , 0);
  CircuitPlayground.setPixelColor(9, 0, 255, 0);
  CircuitPlayground.playTone(500, 100);
  var = 1;
  }
  else{
   //turn all pixels on the pixels ring red
  CircuitPlayground.setPixelColor(0, 63,   0,   0);
  CircuitPlayground.setPixelColor(1, 63, 0,   0);
  CircuitPlayground.setPixelColor(2,   63, 0,   0);
  CircuitPlayground.setPixelColor(3,   63, 0, 0);
  CircuitPlayground.setPixelColor(4,   63,   0, 0); 
  CircuitPlayground.setPixelColor(5, 63,0 , 0);
  CircuitPlayground.setPixelColor(6, 63, 0, 0);
  CircuitPlayground.setPixelColor(7,63, 0, 0);
  CircuitPlayground.setPixelColor(8,63, 0 , 0);
  CircuitPlayground.setPixelColor(9, 63, 0, 0);
}
  //set delay of it being green so theh user knows it worked
  delay( 200);
  
  }
    
    
    
    }


