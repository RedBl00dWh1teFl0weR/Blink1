#include <Arduino.h>

#define LED_Pin_Blink 4

void setup() {
  pinMode(LED_Pin_Blink, OUTPUT);

}

void loop() {
  digitalWrite(LED_Pin_Blink, HIGH);
  delay(1000);

  digitalWrite(LED_Pin_Blink, LOW);
  delay(1000);

}
