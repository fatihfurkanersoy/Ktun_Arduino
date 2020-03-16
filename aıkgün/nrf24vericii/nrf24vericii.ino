#include <SPI.h>
#include <nRF24L01p.h>
#include <regMapCmds.h>

nRF24L01p verici(8,7); //CSN , CE

void setup() {
delay(150);
Serial.begin(115200);
SPI.begin();
SPI.setBitOrder(MSBFIRST);
verici.channel(3);
verici.TXaddress("FFE");
verici.init();

}
void loop() {
  if(Serial.available() > 0){
   String gelenDeger = Serial.readString();
   verici.txPL(gelenDeger);
   verici.send(SLOW);
  }
}
