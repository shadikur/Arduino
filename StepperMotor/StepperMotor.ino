#include <Stepper.h>

int stepsPerRevolution = 2048;
int motorSpeed = 12;
int dt = 500;
Stepper myStepper(stepsPerRevolution, 8,10,9,11);

int buttonPin = 2;
int motDir = 1;
int buttonValNew, buttonValOld=1;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
myStepper.setSpeed(motorSpeed);
pinMode(buttonPin, INPUT);
digitalWrite(buttonPin, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonValNew = digitalRead(buttonPin);
  if (buttonValOld == 1 && buttonValNew == 0) {
    motDir = motDir* (-1);
  }
myStepper.step(motDir*1);
Serial.println(stepsPerRevolution);
delay(dt);
}
