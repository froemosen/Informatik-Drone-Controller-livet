#include <Arduino.h>
#define onboard 13

void setup() {
  pinMode(onboard, OUTPUT);
  
}

void loop() {
  digitalWrite(onboard, LOW);
  delay(500);
  digitalWrite(onboard, HIGH);
  delay(200);
    digitalWrite(onboard, LOW);
  delay(100);
  digitalWrite(onboard, HIGH);
  delay(200);
  
}