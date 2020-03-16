//Proje Hocam - I2C LCD Test Kodu
#include <Wire.h> 

#include "LiquidCrystal_I2C.h"  // I2C kütüphanesini verdiğim linkten indirip   include edebilirsiniz
LiquidCrystal_I2C lcd(0x27,16,2); 
void setup()
{
// LCD yi çalıştır
lcd.begin();
lcd.backlight();
 
// Ekrana yazdırılacak metin
lcd.print("Proje Hocam");
}
 
void loop()
{
}
