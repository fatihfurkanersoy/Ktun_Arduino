#include <LiquidCrystal.h>
#include <Servo.h>
Servo myservo;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

#define xPin A0
#define yPin A1
#define buton 7

int xPozisyon;
int yPozisyon;
int butondurum;
int xServo;

void setup() {
myservo.attach(6);
pinMode(buton,INPUT_PULLUP);
Serial.begin(9600); 
lcd.begin(16, 2);
}
void loop() {
xPozisyon=analogRead(xPin);
yPozisyon=analogRead(yPin);
butondurum=digitalRead(buton);

Serial.print("X POZİSYON: ");
Serial.print(xPozisyon);

Serial.print("| Y POZİSYON: ");
Serial.print(yPozisyon);

Serial.print("| BUTON DURUM: ");
Serial.print(butondurum);

lcd.clear();
lcd.print("X:");
lcd.print(xPozisyon);

lcd.setCursor(0,1);
lcd.print("Y:");
lcd.print(yPozisyon);


xServo=map(xPozisyon, 0, 1023, 0, 180);
myservo.write(xServo);

delay(200);
}
