#define led1 8  //Arduino'ya led1 yazdığımız yerlere "8" yaz komutunu verdim
#define led2 9 //Arduino'ya led2 yazdığımız yerlere "9" yaz komutunu verdim
#define led3 10 //Arduino'ya led3 yazdığımız yerlere "10" yaz komutunu verdim
void setup() {
pinMode(led1,OUTPUT); //Ledlerimizden 5V çıkışı almak istediğimiz için çıkış olarak belirledik.
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
}

void loop() {
digitalWrite(led1,HIGH);  //kodun bağlantıları yapılıp çalıştırılması durumunda her ledin 1 saniye ara ile  
delay(1000);              // yandığı görülecektir.
digitalWrite(led1,LOW);
delay(1000);
digitalWrite(led2,HIGH);
delay(1000);
digitalWrite(led2,LOW);
delay(1000);
digitalWrite(led3,HIGH);
delay(1000);
digitalWrite(led3,LOW);
delay(1000);
}
