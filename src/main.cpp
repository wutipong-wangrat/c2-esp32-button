/* achorituies:Mr Wutipong */
#include <Arduino.h>
#define BUTTON_PIN 21//GPIO 21 INPUT / Switch
#define LED_PIN 22 //GPIO 22 / LED

int button_state = 0;

void setup() {
  Serial1.begin(115200);
  pinMode(LED_PIN,OUTPUT);
  pinMode(BUTTON_PIN,INPUT_PULLUP);
}

void loop() {
  button_state = digitalRead(BUTTON_PIN);
  if(button_state == LOW)
  {
    digitalWrite(LED_PIN,HIGH);
    Serial.print("ON");
  }else
  {
    digitalWrite(LED_PIN,LOW);
    Serial.print("OFF");
  }


}