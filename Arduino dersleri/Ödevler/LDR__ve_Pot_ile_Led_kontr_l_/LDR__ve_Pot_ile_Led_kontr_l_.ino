#define led 9  // pwm çıkışı olan bir port seçmelisiniz
#define ldr A0
#define pot A1
int ldrdurum = 0 ;
int potdurum = 0 ;
void setup() {
  Serial.begin(9600); // serial ekranı başlattık
}
void loop() {
ldrdurum = analogRead(ldr); // ldr durumunu değişkene atadık
potdurum = analogRead(pot); // Burada potun durumunu okuduk
potdurum = map(potdurum,0,1023,0,255);  //pwm çıkışı için potun değerini orantılı şekilde 0-255 arasına çevirdik
Serial.println("Pot durum : ");
Serial.println(potdurum);
Serial.println("LDR durum : ");
Serial.println(ldrdurum); // serial ekrana ldr durumunu yazdırdık
delay(110);
if (ldrdurum < 300){ // eğer ldr 300'ün altında değer gösteriyorsa altındaki kodu çalıştır
  analogWrite(led,potdurum); 
  Serial.println("HAVA: KARANLIK, LED : ON "); // Serial Ekrana şunu yaz
}
else {              // eğer ldr 300'ün altında bir değer göstermiyorsa altındaki kodları yap
    analogWrite(led,0); 
  Serial.println("HAVA: AYDINLIK, LED : OFF ");
}
}
