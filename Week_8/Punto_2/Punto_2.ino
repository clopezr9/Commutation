#include <TimerOne.h>

#define P_INCREMENT 21
#define P_DECREMENT 20
#define P_AUTOMATIC 19
#define P_PAUSE 18

int counter = 0;
bool changeState;

void setup() {
  attachInterrupt(digitalPinToInterrupt(P_INCREMENT), incrementCounter, RISING);
  attachInterrupt(digitalPinToInterrupt(P_DECREMENT), decrementCounter, RISING);
  attachInterrupt(digitalPinToInterrupt(P_AUTOMATIC), incrementCounter, RISING);
  attachInterrupt(digitalPinToInterrupt(P_PAUSE), decrementCounter, RISING);

  Serial.begin(9600);
  Serial.println(counter);
  changeState = true;
}

void loop() {}

void incrementCounter() {
  if (changeState && digitalRead(P_INCREMENT)) {
    counter++;
    if (counter > 99)
      counter = 99;
    Serial.println(counter);
    changeState = false;
  }

  if (!changeState && digitalRead(P_INCREMENT))
    changeState = true;
}

void decrementCounter() {
  if (changeState && digitalRead(P_DECREMENT)) {
    counter--;
    if (counter < 0)
      counter = 0;
    Serial.println(counter);
    changeState = false;
  }

  if (!changeState && digitalRead(P_DECREMENT))
    changeState = true;
}
