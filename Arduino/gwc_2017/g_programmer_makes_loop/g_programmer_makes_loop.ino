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
int ledNum;
int startupLedNum;
int i;
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

  ledNum = 0;
  startupLedNum = 5;


  // This is a demonstration of a programmer written loop.
  // Remember YOU are the programmer!
  //
  // There are MANY ways to create loops. 
  // We will use the "while" statement to execute a bunch of 
  // statements within the {} body as long as the condition
  // inside the while part is true.
  //
  // In the example, below,
  // all of the code "inside" the while loop will be executed 3
  // times.  Do you see why?
  i = 0;
  while (i < 8) {
    CircuitPlayground.setPixelColor(startupLedNum, 255, 0, 255);
    delay(1000);
    CircuitPlayground.setPixelColor(startupLedNum, 0, 0, 0);
    delay(1000);  
    i = i + 1;
  }
}
// -------------------------------------------------


// -------------------------------------------------
// The loop() function runs FOREVER.  Statements are run
// from top to bottom and then start over again from the top.
void loop() {
  CircuitPlayground.setPixelColor(ledNum, 0, 0, 200);
  delay(100);
  CircuitPlayground.setPixelColor(ledNum, 0, 0, 0);
  delay(100);

  ledNum = ledNum + 1;
  

  // if the ledNum is 10, it means we've gone 
  // far enough and should start over!
  if (ledNum == 10) {
    ledNum = 0;
  }
  
}
// -------------------------------------------------

