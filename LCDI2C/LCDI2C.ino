#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27 , 16, 2); //ekrana görüntü gelmezse LiquidCrystal_I2C lcd(0x3f , 16, 2);

void setup()
{
lcd.begin();
lcd.setCursor(0,0);
lcd.print("1. SATIR ");
lcd.setCursor(0,1);
lcd.print("2. SATIR ");
}

void loop()
{
}
