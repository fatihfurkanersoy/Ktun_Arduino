#define led 7
#define ldr A0
int ldrdurum=0;
void setup() {
  pinMode(led,OUTPUT);
  Serial.begin(9600); // serial ekranı başlattık
  Serial.println("LDR durumu"); 
}
void loop() {
ldrdurum = analogRead(ldr);// ldr durumunu değişkene atadık
Serial.println(ldrdurum); // serial ekrana ldr durumunu yazdırdık
delay(100);

if (ldrdurum < 300){ // eğer ldr 300'ün altında değer gösteriyorsa altındaki kodu çalıştır
  digitalWrite(led,HIGH); 
  Serial.println("HAVA: KARANLIK, LED : ON "); // Serial Ekrana şunu yaz
}
else {              // eğer ldr 300'ün altında bir değer göstermiyorsa altındaki kodları yap
  digitalWrite(led,LOW);
  Serial.println("HAVA: AYDINLIK, LED : OFF ");
}
}
