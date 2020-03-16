#define lm A0
float okunan_deger;
float gerilim;
float sicaklik;


void setup() {
Serial.begin(9600);
Serial.println(lm);
Serial.println("LM35 ilk durumu");
}
void loop() {
okunan_deger = analogRead(lm);
sicaklik = map (okunan_deger , 0,1023, 0,5000);
Serial.println("sicaklik değeri");
Serial.println(sicaklik);


//Serial.println(okunan_deger);
//gerilim = ((okunan_deger/1023.0)*5000.0);
//Serial.println(gerilim);

//sicaklik = (gerilim / 10.0);
//Serial.println(sicaklik);

delay(1000);


}
