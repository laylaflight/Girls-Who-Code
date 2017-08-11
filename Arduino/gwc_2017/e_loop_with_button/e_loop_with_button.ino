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
// Here we declare a variable called leftButtonPressed
// It will be used in the code below to indicate whether
// or not the left button on the board has been pressed.
int leftButtonPressed;
int rightButtonPressed;
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
void loop() {

  // The built-in function "CircuitPlayground.leftButton()" 
  // returns 1 if the button is being pressed.
  // It returns 0 if the button is not being pressed.
  leftButtonPressed = CircuitPlayground.leftButton();
  rightButtonPressed = CircuitPlayground.rightButton();
  // This is an example of how to use an "if" statement.
  // The general form is:
  //    if (condition) {
  //       all of the code to run 
  //       when the condition is TRUE
  //       As many statements as we want...
  //       Can be empty...
  //    }
  //    else {
  //       all of the code to run
  //       when the condition is FALSE
  //       As many statements as we want...
  //       Can be empty...
  //    }
  //
  // It is important to note only ONE block of code 
  // is run: either the code for the true part
  // or the code for the false part NOT BOTH!
  //
  // We take one action if the button is being pressed else
  // we take another action...
  // The variable leftButtonPressed is updated at each time
  // the loop starts over.
  //
  //  The "else" part is OPTIONAL.
  //
  if (leftButtonPressed == 1) {
      CircuitPlayground.setPixelColor(5, 0, 0, 200);
    }
  else {
     CircuitPlayground.setPixelColor(5, 0, 0, 0);
  }
    
if (leftButtonPressed == 0) {
  CircuitPlayground.setPixelColor(7, 255, 50, 50);
}
else {
    CircuitPlayground.setPixelColor(7, 0, 0, 0);
}
if (rightButtonPressed == 0) {
   CircuitPlayground.setPixelColor(6, 20, 240, 50);
}
else{
   CircuitPlayground.setPixelColor(8, 255, 0, 0);
}
}
// -------------------------------------------------

