#include <AFMotor.h>

AF_DCMotor motor1(3);
AF_DCMotor motor2(4);

int angle=90;

void setup() {
  motor1.setSpeed(200);
  motor2.setSpeed(200);
  motor1.run(RELEASE);
  motor2.run(RELEASE);
}

void loop() {
  servo.write(angle);
  delay(50); // 초음파회전

  int distance = sonar.ping_cm();

  if(distance>0&&distance<15){
    movePattern();
    motor1.run(FORWARD);
    motor2.run(FORWARD);
  }
}

void movePattern(){
     motor1.run(BACKWARD);
     motor2.run(BACKWARD);
     delay(500);   
    if(angle>=90){
      motor1.run(FORWARD);
      motor2.run(BACKWARD);
      delay(500);   
    }
    else{
      motor1.run(BACKWARD);
      motor2.run(FORWARD);
      delay(500);   
    }
    angle=90;
    servo.write(angle);
    delay(100);
}
