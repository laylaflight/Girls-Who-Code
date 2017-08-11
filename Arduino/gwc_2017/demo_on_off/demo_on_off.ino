// -------------------------------------------------
// This is a Circuit Playground program.
//
// The Circuit Playground is a type of Arduino board
// with many sensors (like buttons and a temperature 
// sensor) and many outputs (like LED's and a speaker).
//
// This program lights NeoPixels and shows how to add 
// delays to your programs.
//
// It can be used as a starting point for experiments 
// with NeoPixels like changing colors and lighting multiple
// NeoPixels.
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


  // Wait until the user moves the slide switch to the right
  // Here's how we do it.  
  // The function CircuitPlayground.slideSwitch returns 
  //    1 when the switch is to the LEFT
  //    0 when the switch is to the RIGHT
  // The while() loop keeps checking the slide switch
  // As long as the function returns 1, it means the switch
  // is to the LEFT and we do nothing but keep checking 
  // until the function no longer returns 1 which means
  // the user has moved the switch to the right.
  while (CircuitPlayground.slideSwitch() == 1) 
  {
    
  }

}
// -------------------------------------------------


// -------------------------------------------------
// The loop() function runs FOREVER.  Statements are run
// from top to bottom and then start over again from the top.
//
void loop() {
  // Put all of the statements here that you 
  // want to run FOREVER !!!


  CircuitPlayground.setPixelColor(5, 0, 127, 0);
  delay(200);
  CircuitPlayground.setPixelColor(5, 0, 0, 0);
  delay(200);

}
// -------------------------------------------------

