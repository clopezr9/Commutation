#include <SoftwareSerial.h>
#define LED 13

char option;

void setup() {
  pinMode(LED, OUTPUT);
  Serial1.begin(9600);
}

void loop() {
  if (Serial1.available()) {
    option = Serial1.read();
    switch (option) {
      case '0':
        digitalWrite(LED, LOW);
        break;
      case '1':
        digitalWrite(LED, HIGH);
        break;
      default:
        break;
    }
  }
}