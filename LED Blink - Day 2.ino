int BlueLight = 12; // The HERO Board Pin that the LED is wired to
 
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(BlueLight, OUTPUT);
  digitalWrite(BlueLight, HIGH);
  
}
 
// the loop function runs over and over again forever
void loop() {
 digitalWrite(BlueLight, LOW);
 delay(200);
 digitalWrite(BlueLight, HIGH);
 delay(200);

}