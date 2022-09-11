int redLed=4;
int dit=50;
int dah=250;
int longWait=1000;

void setup() {
  // put your setup code here, to run once:
pinMode(redLed,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 for(int i=0; i <3; i++){
  digitalWrite(redLed,HIGH);
  delay(dit);
  digitalWrite(redLed,LOW);
  delay(dit);
 }

digitalWrite(redLed,HIGH);
delay(50);
digitalWrite(redLed,LOW);
delay(50);

 for(int i=0; i <3; i++){
  digitalWrite(redLed,HIGH);
  delay(dah);
  digitalWrite(redLed,LOW);
  delay(dah);
 }
  for(int i=0; i <3; i++){
  digitalWrite(redLed,HIGH);
  delay(dit);
  digitalWrite(redLed,LOW);
  delay(dit);
 }

delay(longWait);
}
