int readPin = 12;
int delayTime = 100;
float readVal;
int redLed = 4;
int greenLed = 3;
int ledState;

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
    
    delay(delayTime);
  
}
