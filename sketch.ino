#include <Servo.h>
int servoPin=9;
int servoPos=165;
Servo myServo;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
myServo.attach(servoPin);
}

void loop() {
  Serial.println("What Angle for the Servo? ");
  while (Serial.available()==0){
  }
  servoPos=Serial.parseInt();
  // put your main code here, to run repeatedly:
myServo.write(servoPos); 
}
