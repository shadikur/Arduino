int yellowLed = 9;
int yellowLimit = 5;
int redLimit = 3;
int redLed = 10;
int miniDelay = 500;
int delayTime = 2000;
void setup() {
  // put your setup code here, to run once:
  pinMode(yellowLed, OUTPUT);
  pinMode(redLed, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 1; i <= yellowLimit; i++) {
    digitalWrite(yellowLed, HIGH);
    delay(miniDelay);
    digitalWrite(yellowLed, LOW);
    delay(miniDelay);
    Serial.print("Yellow blink = ");
    Serial.println(i);

  }

  for (int i = 1; i <= redLimit; i++) {
    digitalWrite(redLed, HIGH);
    delay(miniDelay);
    digitalWrite(redLed, LOW);
    delay(miniDelay);
    Serial.print("Red blink = ");
    Serial.println(i);
  }
  delay(delayTime);
}
