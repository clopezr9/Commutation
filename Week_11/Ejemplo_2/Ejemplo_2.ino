int value;

void setup() {
  Serial.begin(9600);
}

void loop() {
  value = (analogRead(A0) * 5) / 1023;
  Serial.println(value);
  delay(1000);
}
