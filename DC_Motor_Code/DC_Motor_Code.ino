#include <AFMotor.h>

AF_DCMotor motor1(1);  //for motor shield terminal M1
AF_DCMotor motor2(2);  //for motor shield terminal M2
AF_DCMotor motor3(3);  //for motor shield terminal M3
AF_DCMotor motor4(4);  //for motor shield terminal M4

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
   
  motor1.setSpeed(70);
  motor1.run(FORWARD);
  
  motor2.setSpeed(70);
  motor2.run(FORWARD);

  motor3.setSpeed(70);
  motor3.run(FORWARD);
  
  motor4.setSpeed(70);
  motor4.run(FORWARD);
  delay(1000);

}
