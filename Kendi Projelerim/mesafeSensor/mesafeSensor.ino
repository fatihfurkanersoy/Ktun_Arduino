#define echoPin 6
#define trigPin 7
#define buzzer 8
#define aled 3
#define bled 2
#define cled 13
#define dled 12


float sure;
float mesafe;


void setup() {

pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
pinMode(buzzer,OUTPUT);
pinMode(aled,OUTPUT);
pinMode(bled,OUTPUT);
pinMode(cled,OUTPUT);
pinMode(dled,OUTPUT);
Serial.begin(9600);

}

void loop() {
  
digitalWrite(trigPin,HIGH);
delay(1);
digitalWrite(trigPin,LOW);
digitalWrite(echoPin,LOW);
sure = pulseIn(echoPin,HIGH);
mesafe = (sure/2) / 28.9;

Serial.print("cisme olan uzaklık ");
Serial.println(mesafe);
Serial.print("cm");
Serial.println("--------------------------");
delay(50);
 
if (mesafe <= 8){
  digitalWrite(aled,HIGH);
  digitalWrite(buzzer,HIGH);
  delay(50);
  digitalWrite(aled,LOW);
  digitalWrite(buzzer,LOW);
  delay(50);
  
}

else if (mesafe <= 21){
  digitalWrite(bled,HIGH);
  digitalWrite(buzzer,HIGH);
  delay(50);
  digitalWrite(bled,LOW);
  digitalWrite(buzzer,LOW);
  delay(450);
  
}

else if (mesafe <=40){
  digitalWrite(cled,HIGH);
  digitalWrite(buzzer,HIGH);
  delay(50);
  digitalWrite(cled,LOW);
  digitalWrite(buzzer,LOW);
  delay(750);
  
}
else if(mesafe < 60){
  digitalWrite(dled,HIGH);
  digitalWrite(buzzer,HIGH);
  delay(50);
  digitalWrite(dled,LOW);
  digitalWrite(buzzer,LOW);
  delay(1200);
  
}
else {
  return  0;
}
}
