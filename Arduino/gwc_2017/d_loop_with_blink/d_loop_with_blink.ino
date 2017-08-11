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

}
// -------------------------------------------------


// -------------------------------------------------
// The loop() function runs FOREVER.  Statements are run
// from top to bottom and then start over again from the top.
//
void loop() {
  // Put all of the statements here that you 
  // want to run FOREVER !!!
    CircuitPlayground.setPixelColor(5, 0, 0, 200);
    delay(1000);
    CircuitPlayground.setPixelColor(5, 0, 0, 0);
    delay(1000);

}
// -------------------------------------------------

