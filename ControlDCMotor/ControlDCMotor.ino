int speedPin = 5;
int direcPinOne =4;
int direcPinTwo = 3;
int mSpeed = 20;
void setup() {
  // put your setup code here, to run once:
pinMode(speedPin, OUTPUT);
pinMode(direcPinOne, OUTPUT);
pinMode(direcPinTwo, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(direcPinOne, LOW);
digitalWrite(direcPinTwo, HIGH);

for (int i=0; i <= 255; i++) {
  analogWrite(speedPin, i);
  delay(500);
  Serial.print("Current Speed: ");
  Serial.println(i);
}

}
