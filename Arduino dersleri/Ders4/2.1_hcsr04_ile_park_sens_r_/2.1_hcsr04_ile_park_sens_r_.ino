#define trig 11
#define echo 10
#define led1 2 // kırmızı
#define led2 3
#define led3 4
#define led4 5
#define led5 6
#define led6 7 //yeşil
#define buzzer 8
int sure ;
int uzaklik;
void setup() {
pinMode(trig,OUTPUT); //sesi gönderen pin olduğu için çıkış olarak belirledik
pinMode(echo,INPUT); // ses dalgasını alan pin olduğu için giriş
Serial.begin(9600); // Serial ekranı PC ile aynı baundda başlattık başlattık
pinMode(buzzer,OUTPUT);
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
pinMode(led4,OUTPUT);
pinMode(led5,OUTPUT);
pinMode(led6,OUTPUT);
}
void loop() {
digitalWrite(trig,HIGH);  // sesi gönderdim
delayMicroseconds(1);        // 1 salise bekledim
digitalWrite(trig,LOW);   //ses dalgasını kapattım
sure = pulseIn(echo,HIGH); // pulseIn komutu ile sesi gönderdiği zaman ile aldığı zamanı hesapladık
uzaklik = sure /29.1/2 ;// gidiş geliş olduğu için 2 ye böldük , 29.1'e bölme sebebimiz ise sesin ortamdaki hızını cm cinsinden bulmak
Serial.println(uzaklik); //Serial Ekrana bulduğumuz uzaklığı yazdırdık
Serial.println("-----------------"); // daha rahat görmek için 
delay(10);   // daha rahat okumak için (yoksa çok hızlı akıyor okuyamıyoruz.)
if (uzaklik <=15 ){
  digitalWrite(buzzer,HIGH);                // BU İF , ELSE KOMUTLARINI DAHA ÖNCE GÖRMÜŞTÜK
  digitalWrite(led6,HIGH);
  digitalWrite(led5,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led1,HIGH);
  delay(120);
  digitalWrite(buzzer,LOW);
  digitalWrite(led6,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led1,LOW);
  delay(120);
}
else if (uzaklik <= 30){
  digitalWrite(buzzer,HIGH);
  digitalWrite(led6,HIGH);
  digitalWrite(led5,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led2,HIGH);
  delay(350);
  digitalWrite(buzzer,LOW);
  digitalWrite(led6,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led2,LOW);
  delay(350);
}
else if (uzaklik <= 50){
  digitalWrite(buzzer,HIGH);
  digitalWrite(led6,HIGH);
  digitalWrite(led5,HIGH);
  digitalWrite(led4,HIGH);
  delay(650);
  digitalWrite(buzzer,LOW);
  digitalWrite(led6,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led4,LOW);
  delay(650);
}
else if (uzaklik <= 70){
  digitalWrite(buzzer,HIGH);
  digitalWrite(led6,HIGH); 
  delay(800);
  digitalWrite(buzzer,LOW);
  digitalWrite(led6,LOW); 
  delay(800);
}
}
