#include "Buggy.h"

BUGGY motor(3);

void setup() {
  // put your setup code here, to run once:
  while (!Serial);
  delay(1000);
  Serial.begin(115200);
  Serial.println("Basic MOSFET Driver Test");
  //pinMode(driverPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  motor.goForwards();
  delay(1000);
  motor.stop();
  delay(2000);
}
