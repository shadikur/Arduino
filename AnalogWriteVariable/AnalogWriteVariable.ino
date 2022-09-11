int redPin = 9;
void setup() {
  // put your setup code here, to run once:
pinMode(redPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//Low to High Brightness
for (int i=0; i < 256; i++){
  analogWrite(redPin, i);
  delay(50);
}

//High to Low brightness
for (int i=255; i >= 0 ; i--){
  analogWrite(redPin, i);
  delay(50);
}
delay(2000);
}
