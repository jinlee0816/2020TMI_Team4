#include <Servo.h>
Servo servo;
int servopin=9;
void setup()
{
  Serial.begin(9600);
  servo.attach(servopin);
  servo.write(0);
  delay(1000);
}

void loop(){
   if(Serial.available()){
    char input = Serial.read(); //문자 입력

    if(input == 'p')
  {
    delay(3000);
    servo.write(90);
    delay(3000);
    servo.write(0);
    delay(3000);
    
   }
   
  }
}
