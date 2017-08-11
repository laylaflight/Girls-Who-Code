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

  // Pause the program
  // delay(n) stops your program for n milliseconds
  // so, for example, delay(5000) will delay your program for 5 seconds
  delay(2000);

  // Light a CircuitPlayground NeoPixel.  It is called like this
  //  CircuitPlayground.setPixel(p, r, g, b)
  //    p is the pixel number (0..9)
  //    r is the red value (0..255)
  //    g is the green value (0..255)
  //    b is the blue value (0..255)
  CircuitPlayground.setPixelColor(2, 0, 127, 127);

  delay(2000);

  CircuitPlayground.setPixelColor(7, 255, 127, 127);

}
// -------------------------------------------------


// -------------------------------------------------
// The loop() function runs FOREVER.  Statements are run
// from top to bottom and then start over again from the top.
//
void loop() {
  // Put all of the statements here that you 
  // want to run FOREVER !!!


}
// -------------------------------------------------

