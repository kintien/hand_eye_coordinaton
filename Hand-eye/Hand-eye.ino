#include <Adafruit_CircuitPlayground.h>
//make variable value
int value;

void setup() {
 //initialize srial monitore 
  Serial.begin(9600);
//start the circuit playground  
  CircuitPlayground.begin();
}

void loop() {
//starts the neopixels and clears all the colors  
  CircuitPlayground.clearPixels();
//make the value the light sensor recieves assign it to variable value  
  value = CircuitPlayground.lightSensor();
//make a variable x assign a random value between 0-15000
  int x =  random(0,15001);
//make x the delay so randomly between 0 & 15sec the following steps happen
  delay(x);
  //turn all pixels on the pixels ring red
  CircuitPlayground.setPixelColor(0, 255,   0,   0);
  CircuitPlayground.setPixelColor(1, 255, 0,   0);
  CircuitPlayground.setPixelColor(2,   255, 0,   0);
  CircuitPlayground.setPixelColor(3,   255, 0, 0);
  CircuitPlayground.setPixelColor(4,   255,   0, 0); 
  CircuitPlayground.setPixelColor(5, 255,0 , 0);
  CircuitPlayground.setPixelColor(6, 255, 0, 0);
  CircuitPlayground.setPixelColor(7,255, 0, 0);
  CircuitPlayground.setPixelColor(8,255, 0 , 0);
  CircuitPlayground.setPixelColor(9, 255, 0, 0);
 //see the value  in the serial monitor the values the light sensor is picking up
  Serial.print("Light Sensor: ");
  Serial.println(value);
//if the value is less than 10 turn pixels green(so if hand goes over sensor then turn lights green)
  if (value < 10 ){
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
  //set delay of it being green so theh user knows it worked
  delay( 200);
  //turn lights white
    CircuitPlayground.setPixelColor(0, 255,   255,   255);
  CircuitPlayground.setPixelColor(1, 255, 255,   255);
  CircuitPlayground.setPixelColor(2,   255, 255,   255);
  CircuitPlayground.setPixelColor(3,   255, 255, 255);
  CircuitPlayground.setPixelColor(4,   255,   255, 255); 
  CircuitPlayground.setPixelColor(5, 255, 255 , 255);
  CircuitPlayground.setPixelColor(6, 255, 255, 255);
  CircuitPlayground.setPixelColor(7,255, 255, 255);
  CircuitPlayground.setPixelColor(8, 0, 255 , 255);
  CircuitPlayground.setPixelColor(9, 255, 255, 255);
   //delay 1/10 of a sec
   delay(100);
  //restart void loop
    }



}
