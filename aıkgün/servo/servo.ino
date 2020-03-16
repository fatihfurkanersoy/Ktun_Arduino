#include <nRF24L01p.h>
#include <regMapCmds.h>
#include <SPI.h>

int msg[1];
//SCK -> 13//MISO -> 12//MOSI -> 11//CSN -> 7//CE -> 8
nRF24L01p radio(7,8);
const uint64_t pipe = 0xE8E8F0F0E1LL; 
int potpin = 0; 
int val; 
void setup(void){ 
radio.begin();
radio.openWritingPipe(pipe); 
}
void loop(void){ 
val = analogRead(potpin); 
val = map(val, 0, 1023, 0, 179); 
msg[0] = val;
radio.write(msg, 1);
}
