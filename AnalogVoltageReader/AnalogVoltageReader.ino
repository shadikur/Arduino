int readPin = A3;
float v2 = 0;
int delayTime = 500;
float readVal;

void setup() {
  // put your setup code here, to run once:
 pinMode(readPin, INPUT);
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal = analogRead(readPin);
  v2 = (5./1023.)*readVal;
  Serial.println(v2);
  delay(delayTime);
}
