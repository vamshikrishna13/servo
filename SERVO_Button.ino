
// constants won't change. They're used here to set pin numbers:
const int buttonPin = D0;     // the number of the pushbutton pin
const int ledPin = D5;      // the number of the LED pin

#include <Servo.h>

Servo myservo; 
// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
  myservo.attach(D2);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
int pos;
  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
if(pos==180){    
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  
  pos=180;
}  
  }
  else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
  if (pos==0){  
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
    
  }
  pos=0;
  }
  }
}
