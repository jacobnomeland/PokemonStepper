#include <Servo.h>
Servo myServo;

void setup() {
  myServo.attach(2);
  Serial.begin(9600);
  myServo.write(90);
  delay(5000);
}

void loop() {
  myServo.write(90-10);
  delay(250);
  myServo.write(90+10);
  delay(250);
}
