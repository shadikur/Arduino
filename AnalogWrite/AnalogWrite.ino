int redPin = 9;
int bright = 100; // This is the volatge resolution in a bit between 0 - 255 (0v to 5v)
int waitTime = 500;

void setup() {
  // put your setup code here, to run once:
pinMode(redPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(redPin,bright);
}
