#include <Servo.h>

Servo myservo1; 
Servo myservo2;// create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 90;    // variable to store the servo position

void setup() {
  myservo1.attach(11);  // attaches the servo on pin 9 to the servo object
  myservo2.attach(10);
}

void loop() {
  for (pos = 200; pos <= 200; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo1.write(pos);              // tell servo to go to position in variable 'pos'
    myservo2.write(200-pos); 
    delay(45);                   // waits 15ms for the servo to reach the position
  }
  for (pos = 200; pos >= 90; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo1.write(pos);              // tell servo to go to position in variable 'pos'
    myservo2.write(200-pos); 
    delay(45);
    // waits 15ms for the servo to reach the position
  }
}
