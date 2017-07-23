#include <Adafruit_CircuitPlayground.h>
#include <Wire.h>
#include <SPI.h>


//make variables
int value;
int p;
#define CLICKTHRESHHOLD 120
void setup() {
 //initialize srial monitore 
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
   //delay 1 sec
   delay(1000);
  //set the amount of force needed to detect a click
 CircuitPlayground.setAccelRange(LIS3DH_RANGE_2_G); 
//start clicking detection for single taps  
 CircuitPlayground.setAccelTap(1, CLICKTHRESHHOLD);
}







void loop() {
  //assign the clicking detection to variable p (if there is a click value recieved should be one of none should be 0)
   p = CircuitPlayground.getAccelTap();
//starts the neopixels and clears all the colors  
  CircuitPlayground.clearPixels();

//make a variable x assign a random value between 1000-8000
  int x =  random(1000,8000);
//make x the delay so randomly between 0 & 8sec the following steps happen
 
  delay(x);
//make a while loop to repeat funtions
int var = 0;
 while(var < 1){ 



  //print data in serial monitor

  Serial.print("taps detected: " + p ); 
 //if the accelerometer feels a tap start the next steps or if the light sensor doesnt detect light
  if(p == 1){
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
    // play noise everytime it works
  //  CircuitPlayground.playTone(500, 100);
   //if the following steps happen exit the while loop 
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
  C ircuitPlayground.setPixelColor(9, 63, 0, 0);
}
  //set delay of it being green so theh user knows it worked
  delay( 200);
  
  }
    
    
    
    }


