#include <Adafruit_CircuitPlayground.h>
//make variable value
int value;
int lightRecieved;
int turnpoint;

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
   
int lightRecieved = CircuitPlayground.lightSensor();
if(lightRecieved > 900 and lightRecieved < 1000){ turnpoint = 600;}
if(lightRecieved > 800 and lightRecieved < 899){ turnpoint = 500;}
if(lightRecieved > 700 and lightRecieved < 799){ turnpoint = 450;}
if(lightRecieved > 600 and lightRecieved < 699){ turnpoint = 400;}
if(lightRecieved > 500 and lightRecieved < 599){ turnpoint = 300;}
if(lightRecieved > 400 and lightRecieved < 499){ turnpoint = 250;}
if(lightRecieved > 300 and lightRecieved < 399){ turnpoint = 200;}
if(lightRecieved > 200 and lightRecieved < 299){ turnpoint = 100;}
if(lightRecieved > 100 and lightRecieved < 199){ turnpoint = 70;} 
if(lightRecieved > 50 and lightRecieved < 99){ turnpoint = 45;}
if(lightRecieved > 30 and lightRecieved < 49){ turnpoint = 20;} 
if(lightRecieved > 15 and lightRecieved < 29){ turnpoint = 10;}
if(lightRecieved > 10 and lightRecieved < 14){ turnpoint = 5;}
if(lightRecieved >= 0 and lightRecieved < 9){ turnpoint = 0;}


   delay(1000);

}







void loop() {
//starts the neopixels and clears all the colors  
  CircuitPlayground.clearPixels();
//make the value the light sensor recieves assign it to variable value  
 
//make a variable x assign a random value between 0-5000
  int x =  random(1000,8000);
//make x the delay so randomly between 0 & 5sec the following steps happen
 
  delay(x);

int var = 0;
 while(var < 1){ 


  value = CircuitPlayground.lightSensor();
  Serial.print("Light Sensor: ");
  Serial.println(value);
  Serial.println(turnpoint);
  if(value < turnpoint){
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
 // CircuitPlayground.playTone(500, 100);
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


