#include <Arduino.h>

void setup(){
  Serial.begin(9600);

  Serial.println("Hello, Embedded Systems!");
  Serial.println("Arduino is initializing...");
}

void loop(){
  Serial.println("Loop is running...");
  delay(1000);
}