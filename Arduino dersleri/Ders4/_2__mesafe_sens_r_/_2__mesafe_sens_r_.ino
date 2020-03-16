#define trig 11
#define echo 10
int sure ;
int uzaklik;

void setup() {
pinMode(trig,OUTPUT); //sesi gönderen pin olduğu için çıkış olarak belirledik
pinMode(echo,INPUT); // ses dalgasını alan pin olduğu için giriş
Serial.begin(9600); // Serial ekranı PC ile aynı baundda başlattık başlattık
}
void loop() {
digitalWrite(trig,HIGH);  // sesi gönderdim
delay(1);                 // 1 salise bekledim
digitalWrite(trig,LOW);   //ses dalgasını kapattım
sure = pulseIn(echo,HIGH); // pulseIn komutu ile sesi gönderdiği zaman ile aldığı zamanı hesapladık
uzaklik = sure /29.1/2 ;// gidiş geliş olduğu için 2 ye böldük , 
                           //29.1'e bölme sebebimiz ise sesin ortamdaki hızını cm cinsinden bulmak
Serial.println(uzaklik); //Serial Ekrana bulduğumuz uzaklığı yazdırdık
Serial.println("-----------------"); // daha rahat görmek için 
delay(100);   // daha rahat okumak için (yoksa çok hızlı akıyor okuyamıyoruz.)
}
