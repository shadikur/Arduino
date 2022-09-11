int myNumber;
String msg = "Please enter the number of Blink: ";
int redPin = 12;
int delayTime = 500;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while (Serial.available() == 0) {

  }
  myNumber = Serial.parseInt();
  Serial.println(myNumber);
  for (int i = 1; i <= myNumber; i++) {
    digitalWrite(redPin, HIGH);
    delay(delayTime);
    digitalWrite(redPin, LOW);
    delay(delayTime);
    Serial.print("Blink number ");
    Serial.println(i);
  }
}
