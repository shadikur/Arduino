int GREEN=10;
int YELLOW=11;
int RED=12;
void setup() {
  // put your setup code here, to run once:
pinMode(GREEN,OUTPUT);
pinMode(YELLOW,OUTPUT);
pinMode(RED,OUTPUT);

digitalWrite(GREEN, LOW);
digitalWrite(YELLOW, LOW);
digitalWrite(RED, LOW);

Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(GREEN, LOW);
digitalWrite(YELLOW, HIGH);
digitalWrite(RED, LOW);

Serial.println(" Light Mode: Yield ");
delay(1500);

//Go Mode
digitalWrite(GREEN, HIGH);
digitalWrite(YELLOW, LOW);
digitalWrite(RED, LOW);

Serial.println(" Light Mode: Go ");
delay(3000);

//Stop Mode
digitalWrite(GREEN, LOW);
digitalWrite(YELLOW, LOW);
digitalWrite(RED, HIGH);

Serial.println(" Light Mode: Stop ");
delay(3000);
}
