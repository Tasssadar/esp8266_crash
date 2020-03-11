#include <Arduino.h>

void setup() {
  Serial.begin(74880);
  // put your setup code here, to run once:
  Serial.print("sdasdsad\n");

  delay(1000);

  *((volatile int*)NULL) = 42;
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("sdasdsad\n");
  delay(1000);
}
