#define pot A0
#define led 5
#define ledbir 6
#define lediki 7
#define leduc 8
int deger = 0;

void setup() {
pinMode(led , OUTPUT);
pinMode(ledbir, OUTPUT);
pinMode(lediki, OUTPUT);
pinMode(leduc, OUTPUT);
Serial.begin(9600);
Serial.println("degerrr");

}

void loop() {

deger= analogRead(pot)*2;

Serial.println(deger); 
 
digitalWrite(led,HIGH);
delay(deger);
digitalWrite(led,LOW);
delay(deger);
digitalWrite(ledbir,HIGH);
delay(deger);
digitalWrite(ledbir,LOW);
delay(deger);
digitalWrite(lediki,HIGH);
delay(deger);
digitalWrite(lediki,LOW);
delay(deger);
digitalWrite(leduc,HIGH);
delay(deger);
digitalWrite(leduc,LOW);
delay(deger);

}
