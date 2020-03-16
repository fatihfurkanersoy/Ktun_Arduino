const int analogPin = A0;
float gerilimDeger = 0;
float sensorDeger = 0;
float sicaklikDeger = 0;
 
void setup() {
 
  // Seri port ekranını 9600 baund değerinde başlatıyoruz.
  Serial.begin(9600);         
}
 
void loop() {
 
 // analogRead() fonksiyonu ile A0 pinindeki değeri okuyoruz.
 sensorDeger = analogRead(analogPin);
 
 Serial.print("Sensör Değeri:  ");
 Serial.println(sensorDeger);
 
 // A0 pininden okunan değeri mV cinsinden gerilim değerine dönüştürüyoruz.
 gerilimDeger = (sensorDeger/1023)*5000;
 
 Serial.print("Gerilim Değeri: ");
 Serial.println(gerilimDeger);
 
 // Gerilim değerini sıcaklık değerine dönüştürüyoruz.
 sicaklikDeger = gerilimDeger / 10.0;
 
 Serial.print("Sıcaklık Değeri: ");
 Serial.println(sicaklikDeger);
 Serial.println("**********************************");
 delay(1000);
}
