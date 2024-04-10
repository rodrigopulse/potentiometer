#include <Arduino.h>

const int potentiometer = A0;
int value = 0;

void setup()
{
  pinMode (potentiometer, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int potenciometerValue = analogRead(potentiometer);

  value = map(potenciometerValue, 0, 1023, 0, 100);

  Serial.print("Value: ");
  Serial.println(value);
}