#define driverPin 3

void setup() {
  while (!Serial);
  delay(1000);
  // Set baud rate on serial monitor to 115200 as well
  Serial.begin(115200);
  Serial.println("Basic MOSFET Driver Test");
  pinMode(driverPin, OUTPUT);
}

void loop() {
  // Motor is turned on
  digitalWrite(driverPin, HIGH);
  Serial.println("The MOSFET driver is triggered.");
  delay(1000);
  // Motor is turned off
  digitalWrite(driverPin, LOW);
  Serial.println("The MOSFET driver is not triggered.");
  delay(1000);
}
