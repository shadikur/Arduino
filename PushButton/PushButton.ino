// C++ code
//
int readPin = 12;
int delayTime = 100;
float readVal;
int redLed = 4;
int greenLed = 3;

void setup()
{
  pinMode(readPin, INPUT);
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  readVal = digitalRead(readPin);
    Serial.println("Reading Value: ");
    Serial.println(readVal);
  if (readVal >0) {
    digitalWrite(redLed, HIGH);
    digitalWrite(greenLed, LOW);
  }
  else {
    digitalWrite(greenLed, HIGH);
    digitalWrite(redLed, LOW);
  }
    delay(delayTime);
  
}
