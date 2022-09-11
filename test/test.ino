void setup() {
  // put your setup code here, to run once:
pinMode(8,OUTPUT);
pinMode(12,OUTPUT);
pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for (int i=0; i <5; i++)
{
digitalWrite(8,HIGH);
delay(50);
digitalWrite(8,LOW);
delay(500);
}
for (int i=0; i <10; i++)
{
digitalWrite(12,HIGH);
delay(50);
digitalWrite(12,LOW);
delay(500);
}
for (int i=0; i <15; i++)
{
digitalWrite(13,HIGH);
delay(50);
digitalWrite(13,LOW);
delay(500);
}
}
