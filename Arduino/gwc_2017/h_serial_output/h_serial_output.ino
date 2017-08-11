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
int myCount;
int leftButtonPressed;
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

  // This line must included to make use of 
  // Serial Input and Output (AKA Serial I/O)
  // For now, do not worry about the 9600
  Serial.begin(9600);

  // Use a short delay after Serial.begin().
  // For now please accept this requirement without 
  // further explanation. - Michael Jamet
  delay(2000);
   leftButtonPressed = CircuitPlayground.leftButton();
  // Serial.println is used to "print" messages to the 
  // Serial monitor which you can start by pressing the 
  // magnifying glass icon on the right side of the Arduino window.
  //
  // Programmers use Serial.println() and related functions
  // to help debug their programs by allowing them to display
  // messages and variables as their programs run.
  Serial.println("In setup!");

  myCount = 0;
}
// -------------------------------------------------


// -------------------------------------------------
// The loop() function runs FOREVER.  Statements are run
// from top to bottom and then start over again from the top.
void loop() {

  // Notice how myCount keeps going up by 1 and that can
  // be seen in the Serial Monitor which you can start by 
  // pressing the magnifiying glass icon on the right
  // side of the Arduino window.
  myCount = myCount + 2;
  Serial.print("Layla is Awesome! ");
  Serial.println(myCount);
  delay(5000);


  if (leftButtonPressed){
    Serial.print("Layla is Awesome! ");
  }
  else{ 
  }
}
// -------------------------------------------------

