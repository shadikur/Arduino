int readPin = A2;
int redPin = 9;
int greenPin = 10;
float warnValue = 4.0;
int delayTime = 500;
float readValue;
float calVal;
void setup() {
  // put your setup code here, to run once:
pinMode(readPin, INPUT);
pinMode(redPin, OUTPUT);
pinMode(greenPin, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
readValue = analogRead(readPin);
calVal = (5./1023.)*readValue;
Serial.print("Potentiometer Voltage is = ");
Serial.println(calVal);
if (calVal >= warnValue){
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin,LOW);
  Serial.println("High voltage alert!!");
}
else {
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin,HIGH);
}
delay(delayTime);
}
