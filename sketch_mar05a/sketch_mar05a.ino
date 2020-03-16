#define pot A0
#include <Servo.h>
Servo ali;
int potdurum
void setup() {

ali.attach(9);
}

void loop() {
potdurum = analogRead(pot);  
ali.write(potdurum); 
}
