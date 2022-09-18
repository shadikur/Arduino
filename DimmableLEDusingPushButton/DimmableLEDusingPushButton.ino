int buttonOne = 12;
int buttonTwo = 13;
int buttOneRead, buttTwoRead;
int ledPin = 3;
int dt = 150;
int buzzer = 10;
int brightness = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonOne, INPUT);
  pinMode(buttonTwo, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttOneRead = digitalRead(buttonOne);
  buttTwoRead = digitalRead(buttonTwo);
  Serial.print("Current reading button one: ");
  Serial.println(buttOneRead);
  Serial.print("Current reading button two: ");
  Serial.println(buttTwoRead);
  delay(dt);
  Serial.println();

  if (buttOneRead != 1 && brightness <= 255) {
    analogWrite(ledPin, brightness);
    brightness += 5;
    Serial.print("Button One Pressed. Brightness value: ");
    Serial.println(brightness);
  }

  if (buttTwoRead != 1 && brightness >= 0) {
    analogWrite(ledPin, brightness);
    Serial.print("Button Two Pressed. Brightness value: ");
    Serial.println(brightness);
    brightness -= 5;
  }

  if (brightness >= 250) {
    digitalWrite(buzzer, HIGH);
    delay(dt);
    digitalWrite(buzzer, LOW);
  }
  if (brightness <= 0) {
    digitalWrite(buzzer, HIGH);
    delay(dt);
    digitalWrite(buzzer, LOW);
  }

}
