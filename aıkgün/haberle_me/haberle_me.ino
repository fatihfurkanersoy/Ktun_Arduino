#include <SoftwareSerial.h>

SoftwareSerial mySerial(10, 11); // RX, TX
void setup() {
Serial.begin(9600);
mySerial.begin(9600);
mySerial.println("YENİ SERİAL");
}
void loop() {
if(Serial.available() > 0) {
  Serial.print("FFE >> ");
  Serial.println(Serial.readString());
}
if(mySerial.available() > 0) {
  mySerial.print("FFE my serial >> ");
  mySerial.println(mySerial.readString());
}
}
