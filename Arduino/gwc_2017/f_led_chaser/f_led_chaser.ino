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
// Declare a variable called ledNum which will be used 
// to store the number of the led being lit.
int ledNum;
int leftButtonPressed;
int rightButtonpressed;
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

  ledNum = 9;
}
// -------------------------------------------------


// -------------------------------------------------
// The loop() function runs FOREVER.  Statements are run
// from top to bottom and then start over again from the top.
void loop() {

  CircuitPlayground.setPixelColor(ledNum, 255, 0, 255);
  delay(200);
  CircuitPlayground.setPixelColor(ledNum, 0, 0, 0);
  delay(200);
   CircuitPlayground.setPixelColor(ledNum, 25, 50, 255);
  delay(200);
  CircuitPlayground.setPixelColor(ledNum, 0, 0, 0);
  delay(200);
   CircuitPlayground.setPixelColor(ledNum, 0, 255, 0);
  delay(200);
  CircuitPlayground.setPixelColor(ledNum, 0, 0, 0);
  delay(200);
  leftButtonPressed = CircuitPlayground.leftButton();
  
  // Notice how we make ledNum increase its value by 1.
  // So for example, if ledNum is 7 when the statement 
  // below is executed, the right side will calculate
  // ledNum + 1 (and get 8)
  // and then 8 will be assigned to ledNum.
  //
  // ledNum was initially set to have the value 0 in setup().
  ledNum = ledNum - 1;

  // if the ledNum is 10, it means we've gone 
  // far enough and should start over!
  // This is because the leds on the CircuitPlayground
  // are numbered from 0 to 9.
  // Notice when we compare values, we use == NOT =
  // to tell if two values are equal.
  if (ledNum == -1) {
    ledNum = 9;
  }
 if (leftButtonPressed){
   delay (0);
 }
else {
  delay(1000);
}

}
// -------------------------------------------------

