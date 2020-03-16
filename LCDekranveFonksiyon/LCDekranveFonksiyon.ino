#include <Servo.h>
#include <LiquidCrystal.h>
LiquidCrystal ekran(12, 11, 5, 4, 3, 2);
Servo ali;//Ben Servoma ali ismini verdim siz istediğinizi verebilirsiniz.
#define trigPin  13 //trig i bağladığınız pin
#define  echoPin  12 //echoyu  bağladığınız pin
int sure ;
int uzaklik ;
int potdurum;
int yenipotdurum;

void setup() {
Serial.begin (9600);
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);

ekran.begin(16, 2);
ali.attach(9);//ismi ali olan servomun pinini harekete geçirdim.
ekran.print("LCD ekrana istediğini yazabilirsin");
}
void loop() {
hcsr(1000);
ali.write(uzaklik);
delay(15); 
}
void hcsr(int herfonksdadegistir){
digitalWrite(trigPin, LOW);
delayMicroseconds(10);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(echoPin, HIGH);
sure = pulseIn(echoPin,HIGH);
uzaklik = (sure/2) / 29.1;
delay(herfonksdadegistir);//Her fonskiyonda delayın süresini değiştirmek için

}
