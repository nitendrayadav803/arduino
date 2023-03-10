// Hello friends welcome to "TECHNO-E-SOLUTION"
// Here is a code for control servomotor using Potentiometer


#include <Servo.h>

Servo myservo;

int potpin = 0;  // analog pin used to connect the potentiometer
int val;    // variable to read the value from the analog pin

void setup() {
  myservo.attach(11);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  val = analogRead(potpin);            
  val = map(val, 0, 1023, 0, 180);     
  myservo.write(val);                  
  delay(15);                           
}