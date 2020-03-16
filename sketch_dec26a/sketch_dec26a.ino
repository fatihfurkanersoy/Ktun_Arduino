#define lm A0 
int sensor_deger ;
float voltaj_deger ;
float sicaklik ;

void setup() {
Serial.begin(9600);
}

void loop() {
sensor_deger = analogRead (lm);
Serial.print("SENSOR DEĞER  ");
Serial.println(sensor_deger);

voltaj_deger = (sensor_deger / 1023.0) * 5000 ;
Serial.print("  VOLTAJ DEĞER   ");
Serial.println(voltaj_deger);

sicaklik = voltaj_deger / 10 ;
Serial.print(" ORTAM  SICAKLIĞI  ");
Serial.println(sicaklik);



delay(1000);
}
