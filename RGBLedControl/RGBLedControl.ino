// LEDs must be connected to arduino PWM pins - see board pinout
#define RED 6     // pin that red led is connected to
#define GREEN 5   // pin that green led is connected to
#define BLUE 3    // pin that blue led is connected to
#define DELAY 20  // internal delay in ms

void setup() {
  // LED connection pins to be set as an output
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
}

void loop() {
  analogWrite(RED, 0);
  analogWrite(GREEN, 255);
  analogWrite(BLUE, 0);
}