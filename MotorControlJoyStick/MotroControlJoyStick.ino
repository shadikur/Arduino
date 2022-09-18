int speedPin = 5;
int direcPinOne = 3;
int direcPinTwo = 4;
int mSpeed = 255;
int XPin = A0, YPin = A1;
int XValue, YValue;
int dt = 300;
void setup() {
  // put your setup code here, to run once:
  pinMode(speedPin, OUTPUT);
  pinMode(direcPinOne, OUTPUT);
  pinMode(direcPinTwo, OUTPUT);
  pinMode(XPin, INPUT);
  pinMode(YPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  XValue = analogRead(XPin);
  Serial.print("X Value: ");
  Serial.println(XValue);
  delay(dt);

  if (XValue >= 500 && XValue <= 510) {
    digitalWrite(direcPinOne, LOW);
    digitalWrite(direcPinTwo, LOW);
    analogWrite(speedPin, 0);
  }
  else if (XValue >= 510) {
  digitalWrite(direcPinOne, HIGH);
  digitalWrite(direcPinTwo, LOW);
  mSpeed = (255./512.)*XValue -255.;
  analogWrite(speedPin, mSpeed);
  }
  else {
  digitalWrite(direcPinOne, LOW);
  digitalWrite(direcPinTwo, HIGH);
  mSpeed = -255./512. *XValue +255.;
  analogWrite(speedPin, mSpeed);
  }
}
