#include <Servo.h>
int servoPin = 9;
float servoPosition = 0;
int photoPin = A0;
int photoValue;
int dt = 300;
Servo myServo;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myServo.attach(servoPin);
  pinMode(photoPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  photoValue = analogRead(photoPin);
  Serial.print("Photo Registor value: ");
  Serial.println(photoValue); //PhotoValue usuall between 0 to 780
  servoPosition = photoValue / 4.33;
  myServo.write(servoPosition);
  delay(dt);
}
