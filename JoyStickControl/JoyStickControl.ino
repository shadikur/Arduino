int XPin = A0;
int YPin = A1;
int SWPin = 2;
int XVal, YVal, SWVal;
int dt = 300;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(XPin, INPUT);
pinMode(YPin, INPUT);
pinMode(SWPin, INPUT);
digitalWrite(SWPin, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  XVal = analogRead(XPin);
  YVal = analogRead(YPin);
  SWVal = digitalRead(SWPin);
  delay(dt);
  Serial.print("X Value = ");
  Serial.print(XVal);
  Serial.print(" , Y Value = ");
  Serial.print(YVal);
  Serial.print(" , Switch state is ");
  Serial.println(SWVal);
}
