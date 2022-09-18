int readPin = 12;
int delayTime = 100;
int redLed = 4;
int greenLed = 3;
int ledState = 0;
int buttonNew;
int buttonOld = 1;

void setup()
{
  pinMode(readPin, INPUT);
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  Serial.begin(9600);
}

void loop()
{

  buttonNew = digitalRead(readPin);
  Serial.println("Reading Value: ");
  Serial.println(buttonNew);
  if (buttonOld == 0 && buttonNew == 1){
    if (ledState == 0){
      digitalWrite(redLed, HIGH);
      digitalWrite(greenLed, HIGH);
      ledState = 1;
    }
    else {
      digitalWrite(redLed, LOW);
      digitalWrite(greenLed, LOW);
      ledState = 0;
    }
  }
  buttonOld = buttonNew;
  delay(delayTime);

}
