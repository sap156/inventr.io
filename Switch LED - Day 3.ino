int BlueLED = 12;
int Switch1 = 2; //pin 2 will be attached to our switch

void setup() {
  // put your setup code here, to run once:
pinMode(BlueLED, OUTPUT);
pinMode(Switch1, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(Switch1)==HIGH){
  digitalWrite(BlueLED, HIGH);
  delay(150);
  digitalWrite(BlueLED, LOW);
  delay(150);
  digitalWrite(BlueLED, HIGH);
  delay(150);
  digitalWrite(BlueLED, LOW);
  delay(150);


}
else{
  digitalWrite(BlueLED, LOW);
}
}
