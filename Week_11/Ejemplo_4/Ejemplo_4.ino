#define RED_LED 11
#define GREEN_LED 10
#define BLUE_LED 9

void setup() {
  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(BLUE_LED, OUTPUT);
}
void loop() {
  RGB_color(200, 225, 50);
}
void RGB_color(int redLed, int greenLed, int blueLed) {
  analogWrite(RED_LED, redLed);
  analogWrite(GREEN_LED, greenLed);
  analogWrite(BLUE_LED, blueLed);
}
