#include <Key.h>
#include <Keypad.h>


const byte ROWS = 4;
const byte COLS = 4;
 
char buttons[ROWS][COLS] = {
  {'A', 'B', 'C', 'D'},  // 1st row
  {'1', '2', '3', 'E'},  // 2nd row
  {'4', '5', '6', 'F'},  // 3rd row
  {'7', '8', '9', '0'}   // 4th row
};
 
byte rowPins[ROWS] = {5, 4, 3, 2};
byte colPins[COLS] = {6, 7, 8, 9};
 
Keypad myAwesomePad = Keypad(makeKeymap(buttons), rowPins, colPins, ROWS, COLS);
 
 
void setup() {
  Serial.begin(9600); // Begin monitoring via the serial monitor
}
 
void loop() {
  char result = myAwesomePad.getKey();
 
  if (result){                    // if a button is pressed
    Serial.println(result);
  }
 
}
