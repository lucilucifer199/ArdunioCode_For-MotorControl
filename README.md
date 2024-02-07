#include <AFMotor.h>

 AF_DCMotor(1);  //for M1 terminal in Motor Shield 
 <br>
 AF_DCMotor(2);  //for M1 terminal in Motor Shield 
 <br>
 AF_DCMotor(3);  //for M1 terminal in Motor Shield 
 <br>
 AF_DCMotor(4);  //for M1 terminal in Motor Shield 

void setup() {
<br>
  // put your setup code here, to run once:

}

void loop() {
<br>
  // put your main code here, to run repeatedly:

  setSpeed(250);  // for control speed of motor(0-250)
  <br>
  run(forward/backward);   // use for motor direction(forward/backward)
  

}
