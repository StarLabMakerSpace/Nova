#include "Nova.h"
DS18B20 DS18B20(S0);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  //Serial.println(DS18B20.getTemp());
  Serial.print(DS18B20.getCelsiusTemp());
 // Serial.println(DS18B20.getFahrenheitTemp());
  delay(100);
}
