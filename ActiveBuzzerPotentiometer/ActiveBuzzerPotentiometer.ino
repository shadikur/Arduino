int myNum;
int buzzPin = 8;
int potPin = A5;
float potVal;
String msg = "Pot reading is: ";
int dt = 100;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buzzPin, OUTPUT);
  pinMode(potPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  potVal = analogRead(potPin);
  Serial.print(msg);
  Serial.println(potVal);
  if (potVal > 1000) {
    digitalWrite(buzzPin, HIGH);
    delay(dt);
    digitalWrite(buzzPin, LOW);
    delay(dt);
  }
  delay(dt);
}
