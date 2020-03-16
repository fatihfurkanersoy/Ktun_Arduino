#include "Wire.h"
void setup() {
Wire.begin();
Serial.begin(9600);
}
void loop() {
  Wire.beginTransmission(12);
  Wire.write("Sayı:selam ");
  Wire.println(12);
  Wire.endTransmission();
  delay(500);

  Wire.beginTransmission(14);
  Wire.write("Sayı digital DESIGN ne veriiyim abime ?: ");
  Wire.println(14);
  Wire.endTransmission();
  delay(500);

  Wire.beginTransmission(15);
  Wire.write("Sayı:SAYISAL DESIGN ne veriiyim abime ? ");
  Wire.println(15);
  Wire.endTransmission();
  delay(500);
}
