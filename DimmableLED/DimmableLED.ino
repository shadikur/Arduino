int readPin = A2;
int greenPin = 6;
int delayTime = 500;
float readValue;
float calVal;
float ledVal;
void setup() {
  // put your setup code here, to run once:
pinMode(readPin, INPUT);
pinMode(greenPin, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
readValue = analogRead(readPin);
calVal = (5./1023.)*readValue;
Serial.print("Potentiometer Voltage is = ");
Serial.println(calVal);
ledVal = (255. / 1023.) * readValue;
analogWrite(greenPin, ledVal);
Serial.print("LED Value is = ");
Serial.println(ledVal);

delay(delayTime);
}
