#define led 7
#define ldr A0 
int ldr_durumu = 0;

void setup() {
pinMode(led,OUTPUT);
Serial.begin(9600);
Serial.print("LDR DURUMU");
}

void loop() {
ldr_durumu = analogRead(ldr);
Serial.println(ldr_durumu);
Serial.println("---------------------");
delay(1000);
if (ldr_durumu < 500){
  digitalWrite(led,HIGH);
  Serial.println("HAVA: KARANLIK , LED : ON ");
}
else {
  digitalWrite(led,LOW);
  Serial.println("HAVA : AYDINLIK , LED : OFF"); 
}
}
