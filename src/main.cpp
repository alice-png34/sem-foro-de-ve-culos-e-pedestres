#include <Arduino.h>
int LED_1 = 11;
int LED_2 = 10;
int LED_3 = 9;
int LED_4 = 4;
int LED_5 = 3;

void setup() {
   pinMode(LED_1,OUTPUT);
  pinMode(LED_2,OUTPUT);
  pinMode(LED_3,OUTPUT);
  pinMode(LED_4,OUTPUT);
  pinMode(LED_5,OUTPUT);
}

void loop() {
  digitalWrite(LED_1, HIGH);
  digitalWrite(LED_5, HIGH);
  delay(3000);
  digitalWrite(LED_1, LOW);
  delay(500);
  digitalWrite(LED_2, HIGH);
  delay(2000);
  digitalWrite(LED_2, LOW); 
  digitalWrite(LED_5, LOW);
  delay(500);
  digitalWrite(LED_3, HIGH);
  digitalWrite(LED_4, HIGH);
  delay(5000);
  digitalWrite(LED_3, LOW);
  digitalWrite(LED_4, LOW);
  delay(300);
}

