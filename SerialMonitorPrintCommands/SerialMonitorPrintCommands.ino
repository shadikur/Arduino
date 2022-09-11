int j=1;
int waitT = 750;
String myString = "J = ";

void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.print(myString);
Serial.println(j);
j=j+1;
delay(waitT);
}
