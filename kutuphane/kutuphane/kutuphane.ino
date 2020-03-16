#include <akgun.h>

akgun gonder;
void setup() {

}

void loop() {
  ////***** 500ms lik manuel olarak yapılan flip flop *****///////
  gonder.led_yak();
  delay(500);
  gonder.led_sondur();
  delay(500);
  
  ////***** 2000ms lik kütüphaneden kullanarak yapılan flip flop *****///////
  gonder.led_flipflop(2000);
  
  gonder.led_flipflop(2000);
}
