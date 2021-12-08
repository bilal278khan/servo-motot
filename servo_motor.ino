#include<Servo.h>
Servo servo_motor;
void setup() {
  // put your setup code here, to run once:
servo_motor.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
for(int i=0; i<=180; i++){
  servo_motor.write(i);
  delay(10);
}
for(int i=180; i>=0; i--){
  servo_motor.write(i);
  delay(10);
  
}
delay(100);
}
