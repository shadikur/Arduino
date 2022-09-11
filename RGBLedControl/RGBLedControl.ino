int redPin = 8;
int greenPin = 9;
int bluePin = 10;
String myColor;
String msg = "Enter the color of LED you want: ";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while (Serial.available() == 0) {

  }
  myColor = Serial.readString();
  if (myColor == "red" || myColor == "Red") {
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, LOW);
    Serial.println("Red has been turned ON");
  }
  else if (myColor == "green" || myColor == "Green") {
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, HIGH);
    digitalWrite(bluePin, LOW);
    Serial.println("Green has been turned ON");
  }
  else if (myColor == "blue" || myColor == "Blue") {
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, HIGH);
    Serial.println("Blue has been turned ON");
  }
  else if (myColor == "purple" || myColor == "Purple") {
    analogWrite(redPin, 255);
    analogWrite(greenPin, 0);
    analogWrite(bluePin, 255);
    Serial.println("Purple has been turned ON");
  }
  else if (myColor == "orange" || myColor == "Orange") {
    analogWrite(redPin, 255);
    analogWrite(greenPin, 165);
    analogWrite(bluePin, 0);
    Serial.println("Orange has been turned ON");
  }
  else if (myColor == "cyan" || myColor == "Cyan") {
    analogWrite(redPin, 0);
    analogWrite(greenPin, 255);
    analogWrite(bluePin, 255);
    Serial.println("Orange has been turned ON");
  }
  else {
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, LOW);
    Serial.println("Invalid color name");
  }
}
