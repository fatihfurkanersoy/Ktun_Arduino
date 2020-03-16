#include <Servo.h>
#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);


#define xPin A0 
#define yPin  A1 
#define butonPin 7 

Servo xServo;
int xPozisyon;
int yPozisyon;
int butonDurum;
int servopozisyon;
void setup() {
xServo.attach(6);
Serial.begin(9600);
pinMode(xPin, INPUT);
pinMode(yPin, INPUT);
pinMode(butonPin, INPUT_PULLUP);
lcd.begin(16, 2);

}
 
void loop() {

xPozisyon = analogRead(xPin);
yPozisyon = analogRead(yPin);
butonDurum = digitalRead(butonPin);

Serial.print("X Pozisyonu: ");
Serial.print(xPozisyon);
Serial.print(" | Y Pozisyonu: ");
Serial.print(yPozisyon);
Serial.print(" | Buton Durum: ");
Serial.println(butonDurum);
delay(100);

servopozisyon=map(xPozisyon,0,1023,0,180);
xServo.write(servopozisyon);
Serial.println(servopozisyon);
lcd.print("hello, world!");







}
