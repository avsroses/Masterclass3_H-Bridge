// Buggy.cpp
# include "Buggy.h"

BUGGY::BUGGY(int pin) {
  buggyPin = pin;
  motorState = LOW;
  pinMode(buggyPin, OUTPUT);
}

void BUGGY::goForwards() {
  motorState = HIGH;
  digitalWrite(buggyPin, motorState);
}

void BUGGY::stop() {
  motorState = LOW;
  digitalWrite(buggyPin, motorState);
}

int BUGGY::getState() {
  return motorState;
}