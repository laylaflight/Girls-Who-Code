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
int capValue;
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

  Serial.println("Starting the cap sensor demo...");
}
// -------------------------------------------------


// -------------------------------------------------
// The loop() function runs FOREVER.  Statements are run
// from top to bottom and then start over again from the top.
void loop() {
  
  delay(1000);

  // Read one of the cap sensors
  // A cap sensor can be thought of as a TOUCH sensor
  //   CircuitPlayground.readCap(s)
  //     s is one of (0, 1, 2, 3, 6, 9, 10, 12)
  //
  capValue = CircuitPlayground.readCap(10);
  Serial.print("cap value is : ");
  Serial.println(capValue);
 
}
// -------------------------------------------------

