int redPin = 10;
int greenPin = 11;
int tiltPin = 6;
int tiltVal;
int dt = 300;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(tiltPin, INPUT);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  digitalWrite(tiltPin, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  tiltVal = digitalRead(tiltPin);
  Serial.print("Tilt switch: ");
  Serial.println(tiltVal);
  if (tiltVal == 0) {
    digitalWrite(greenPin, HIGH);
    digitalWrite(redPin, LOW);
  }
  else {
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, LOW);
  }
  delay(dt);
}
