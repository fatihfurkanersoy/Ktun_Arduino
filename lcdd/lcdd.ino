#include <LiquidCrystal.h>
#include <Servo.h>
int x ;
Servo nesne;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); 
void setup() {
  nesne.attach(9);
  lcd.begin(16, 2); /* Kullandigimiz LCDnin sutun ve satir sayisini belirtmeliyiz */
  lcd.print("  IYI GECELER "); /* Ekrana yazi yazalim */
}
void loop() {
  x = 180 ;
  nesne.write(x);  /* Motorun mili 100. dereceye donuyor */
  delay(1000);
  nesne.write(0);  /* Motorun mili 100. dereceye donuyor */
  delay(1000);
   
  lcd.setCursor(5,2);
  
  lcd.write("dedfasf");
  
  
  
  
  
  lcd.setCursor(15, 2); /* Imlecin yeri 1. satir 0. sutun olarak ayarlandi */
  /* Artik LCDye yazilanlar alt satirda gorunecektir */
  lcd.print(millis()/1000); /* LCDye Arduinonun calisma suresi saniye cinsinden yaziliyor*/
  /*
  millis() fonksiyonu Arduino calismaya basladiginda calisan bir Kronometredir. 
  Fonksiyon cagirildiginda gecen sureyi milisaniye olarak dondurur
  Ekrana gecen sureyi saniye cinsinden yazdirmak icin fonksiyonun degeri 1000e bolunmustur
  */  
}
