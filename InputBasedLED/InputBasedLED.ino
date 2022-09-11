int redLED = 3;
int yellowLED = 4;
int greenLED = 5;
String inputLed;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Please enter the color of LED: ");
  while (Serial.available() == 0) {

  }

  inputLed = Serial.readString();

  Serial.print("You have entered: ");
  Serial.println(inputLed);

  if (inputLed == "red" || inputLed == "Red") {
    digitalWrite(redLED, HIGH);
    digitalWrite(yellowLED, LOW);
    digitalWrite(greenLED, LOW);
    Serial.print(inputLed);
    Serial.println(" has been turned ON");
  }
  else if (inputLed == "green" || inputLed == "Green") {
    digitalWrite(greenLED, HIGH);
    digitalWrite(redLED, LOW);
    digitalWrite(yellowLED, LOW);
    Serial.print(inputLed);
    Serial.println(" has been turned ON");
  }
  else if (inputLed == "yellow" || inputLed == "Yellow") {
    digitalWrite(yellowLED, HIGH);
    digitalWrite(redLED, LOW);
    digitalWrite(greenLED, LOW);
    Serial.print(inputLed);
    Serial.println(" has been turned ON");
  }
  else {
    digitalWrite(yellowLED, LOW);
    digitalWrite(redLED, LOW);
    digitalWrite(greenLED, LOW);
    Serial.println("Invalid Color Name! Please retry.");
  }

}
