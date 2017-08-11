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

int XAcceleration;
int YAcceleration;
int ZAcceleration;

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

  Serial.println("Starting...");
}
// -------------------------------------------------


// -------------------------------------------------
// The loop() function runs FOREVER.  Statements are run
// from top to bottom and then start over again from the top.
void loop() {


  XAcceleration = CircuitPlayground.motionX();
  YAcceleration = CircuitPlayground.motionY();
  ZAcceleration = CircuitPlayground.motionZ();

  Serial.print("X : "); Serial.print(XAcceleration); Serial.print(" ");
  Serial.print("Y : "); Serial.print(YAcceleration); Serial.print(" ");
  Serial.print("Z : "); Serial.print(ZAcceleration); Serial.print(" ");
  Serial.println();

  if (ZAcceleration > 8) {
    Serial.println("The Circuit Playground IS flat on the table.");
  }
  else {
    Serial.println("The board is NOT flat on the table.");
      // Use the speaker to play a tone.  Here is how you use it:
    //  CircuitPlayground.playTone(frequency, time, wait)
    //    frequency is the "pitch" of the sound; bigger number means higher pitch
    //    time is the time is millisecond so for example 500 = 1/2 second
    //    wait is a little complicated; for now always set to false
    CircuitPlayground.playTone(500, 20, false);
  }

}
// -------------------------------------------------

