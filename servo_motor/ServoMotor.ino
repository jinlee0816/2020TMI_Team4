#include <Servo.h>
 
Servo myservo;
int sw = 6;
int angle = 0;
 
void setup() {
  myservo.attach(9);
  // 스위치가 열려있다면 (누르지 않은 상태) HIGH
  // 스위치를 닫혀있다면 (누른 상태), LOW
  pinMode(sw, INPUT_PULLUP);
}

void loop(){
  if(digitalRead(sw)==LOW){
    
    delay(3000);
    myservo.write(15);
    delay(3000);
    myservo.write(0);
    delay(3000);
    
   }
   
  }
