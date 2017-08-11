// -------------------------------------------------
// This is a Circuit Playground demo program.
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
// Declare the variables your program will use here!
// A typical declaration looks like
//    int x;
// A declaration like "int x;" means your program
// will have a space called x and that space can hold
// integer numbers like 35 and -427.
// Your program can assign to variables and can use them
// in any place where you would normally type a number.
//
int layla_time;
int other_time;
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

  // Assign 1000 to delay_time.
  // We are using a variable called delay_time so that if we
  // want to change our delays; we only have to make the change
  // in one place.
  layla_time = 5000;
  other_time = 3000;
  // Pause the program
  // delay(n) stops your program for n milliseconds
  // so, for example, delay(5000) will delay your program for 5 seconds
  delay(layla_time);
  delay(other_time);
  // Light a CircuitPlayground NeoPixel.  It is called like this
  //  CircuitPlayground.setPixel(p, r, g, b)
  //    p is the pixel number (0..9)
  //    r is the red value (0..255)
  //    g is the green value (0..255)
  //    b is the blue value (0..255)
  CircuitPlayground.setPixelColor(2, 0, 127, 127);

  delay(layla_time);

  CircuitPlayground.setPixelColor(7, 255, 127, 127);

  delay(other_time);

  CircuitPlayground.setPixelColor(9, 0, 0, 255);

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

