
#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  myservo.attach(A0);  // attaches the servo on pin 9 to the servo object
  myservo.write(80);
  delay(1000);
}

void loop() {
  servo_ON();
  delay(10000);
  servo_OFF();
  delay(10000);
}

void servo_ON(){
  myservo.attach(A0);  // attaches the servo on pin 9 to the servo object
  myservo.write(80);
  delay(500);
  myservo.detach();
}

void servo_OFF(){
  myservo.attach(A0);  // attaches the servo on pin 9 to the servo object
  myservo.write(0);
  delay(500);
  myservo.detach();
}
