#define LED 6

int value;

void setup() {
  Serial.begin(9600);
}

void loop() {
  value = analogRead(A0) / 4;
  Serial.println(value);
  analogWrite(LED, value);
  delay(1000);
}
