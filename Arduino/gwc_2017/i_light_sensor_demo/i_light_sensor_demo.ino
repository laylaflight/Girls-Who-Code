// -------------------------------------------------
// This is a Circuit Playground program.
//
// The Circuit Playground is a type of Arduino board
// with many sensors (like buttons and a temperature 
// sensor) and many outputs (like LED's and a speaker).
//
// Michael Jamet, BlackRock, Girls Who Code 2017
// -------------------------------------------------

// -------------------------------------------------
// The line below MUST be included in all programs meant 
// for the Circuit Playground. Do not worry about its
// exact purpose at this time. 
//
#include <Adafruit_CircuitPlayground.h>
// -------------------------------------------------


// -------------------------------------------------
int brightness;
// -------------------------------------------------


// -------------------------------------------------
// The setup() function runs exactly ONCE when the computer
// first starts.  You (the programmer) put statements in this
// function to initialize things like the:
//    CircuitPlayground circuit board
//    communication with your computer 
//
void setup() {

  // This line MUST be included in the setup() function
  // of all programs meant for the Circuit Playground board.
  // It sets up the board so all of its sensors and outputs
  // may be used in your program.
  CircuitPlayground.begin();

  Serial.begin(9600);
  delay(2000);

  Serial.println("Starting the light sensor demo...");
}
// -------------------------------------------------


// -------------------------------------------------
// The loop() function runs FOREVER.  Statements are run
// from top to bottom and then start over again from the top.
void loop() {
  
  delay(1000);

  // Get a values from the Circuit Playground's light sensor
  // and print it out so you (the programmer) can see
  // the value.
  brightness = CircuitPlayground.lightSensor();
  Serial.print("Brightness is : ");
  Serial.println(brightness);


 if (brightness == 0) {
  CircuitPlayground.setPixelColor(0, 255, 0, 255);
  CircuitPlayground.setPixelColor(1, 255, 0, 255);
  CircuitPlayground.setPixelColor(2, 255, 0, 255);
  CircuitPlayground.setPixelColor(3, 255, 0, 255);
  CircuitPlayground.setPixelColor(4, 255, 0, 255);
  CircuitPlayground.setPixelColor(5,  255, 0, 255);
  CircuitPlayground.setPixelColor(6,  255, 0, 255);
  CircuitPlayground.setPixelColor(7,  255, 0, 255);
  CircuitPlayground.setPixelColor(8,  255, 0, 255);
  CircuitPlayground.setPixelColor(9,  255, 0, 255);
 }
else {
   CircuitPlayground.setPixelColor(0, 0, 0, 0);
   CircuitPlayground.setPixelColor(1, 0, 0, 0);
   CircuitPlayground.setPixelColor(2, 0, 0, 0);
   CircuitPlayground.setPixelColor(3, 0, 0, 0);
   CircuitPlayground.setPixelColor(4, 0, 0, 0);
   CircuitPlayground.setPixelColor(5, 0, 0, 0);
   CircuitPlayground.setPixelColor(6, 0, 0, 0);
   CircuitPlayground.setPixelColor(7, 0, 0, 0);
   CircuitPlayground.setPixelColor(8, 0, 0, 0);
   CircuitPlayground.setPixelColor(9, 0, 0, 0);
}
}

// -------------------------------------------------

