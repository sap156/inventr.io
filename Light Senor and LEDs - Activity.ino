int sensorPin = A0;   // select the *analog zero* input pin for probing the photoresistor
//int onboardLED = 13;  // select the pin for the HERO's built-in LED
int sensorValue = 0;  // variable that we'll use to store the value reading from the sensor
int REDLight = 10; 
int YELLOWLight = 11; 
int GREENLight = 12; 
void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 //pinMode(onboardLED, OUTPUT);
 pinMode(REDLight, OUTPUT);
 pinMode(YELLOWLight, OUTPUT);
 pinMode(GREENLight, OUTPUT);

 
}
 
void loop() {
   // Pulse the builtin LED for a time determined by the sensor
  sensorValue = analogRead(sensorPin);
  
  if(sensorValue < 10){
    digitalWrite(GREENLight, HIGH);
  }
  else{
     digitalWrite(GREENLight, LOW);
  }
   if (sensorValue > 10 && sensorValue < 300)
  {
    digitalWrite(YELLOWLight, HIGH);
   
  }
  else{
     digitalWrite(YELLOWLight, LOW);
  }

  if  (sensorValue > 300)
 {
   digitalWrite(REDLight, HIGH);
   
 }
 else
 {
    digitalWrite(REDLight, LOW);
 }


   // Read the analog sensor value and send it to serial
  Serial.println(sensorValue);
  delay(sensorValue);
 
}
