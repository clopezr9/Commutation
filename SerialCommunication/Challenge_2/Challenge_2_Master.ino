#include <SoftwareSerial.h>

char option;

void setup() {
  
  Serial.begin(9600);
  Serial1.begin(9600);
}

void loop() {
  if (Serial.available()>0) {
    option = Serial.read();
    Serial.println(option);
    Serial1.write(option); //Write the serial data
  }
}