#include <Arduino.h>
int gLoop= 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("\n\nWake Up");

  pinMode(LED_BUILTIN,OUTPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
  gLoop++;
  for(int i=0;i < 1 + gLoop%4; i++) {
    digitalWrite(LED_BUILTIN,LOW);    delay(100);
    digitalWrite(LED_BUILTIN,HIGH);   delay(100);
  }
  Serial.print(gLoop);
  Serial.print(" ");
  Serial.println(millis());
  delay(1000);
}