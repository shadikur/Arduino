int readPin = A2;
int delayTime = 500;
float readValue;
float calVal;
void setup() {
  // put your setup code here, to run once:
pinMode(readPin, INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
readValue = analogRead(readPin);
calVal = (5./1023.)*readValue;
Serial.println(calVal);
delay(delayTime);
}
