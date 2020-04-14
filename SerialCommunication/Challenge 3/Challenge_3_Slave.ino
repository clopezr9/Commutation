#include <SoftwareSerial.h>
#define LED_1 13
#define LED_2 12
#define LED_3 8

char option;

void setup() {
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  pinMode(LED_3, OUTPUT);
  Serial1.begin(9600);
}

void loop() {
  if (Serial1.available()) {
    option = Serial1.read();
    switch (option) {
      case '0':
        digitalWrite(LED_1, LOW);
        break;
      case '1':
        digitalWrite(LED_1, HIGH);
        break;
      case '2':
        digitalWrite(LED_2, LOW);
        break;
      case '3':
        digitalWrite(LED_2, HIGH);
        break;
      case '4':
        digitalWrite(LED_3, LOW);
        break;
      case '5':
        digitalWrite(LED_3, HIGH);
        break;
      default:
        break;
    }
  }
}