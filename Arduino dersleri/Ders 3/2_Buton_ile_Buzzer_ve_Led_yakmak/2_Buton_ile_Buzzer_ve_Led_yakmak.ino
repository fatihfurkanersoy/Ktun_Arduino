#define led 6
#define buzzer 9
#define pot A0
int potdurum = 0 ;
void setup() {
  Serial.begin(9600);
  Serial.print("POT'UN DURUMU");
}
void loop() {
potdurum=analogRead(pot);
potdurum=map(potdurum,0,1023,0,255);
Serial.println(potdurum);
analogWrite(led , potdurum);
analogWrite(buzzer,potdurum);

 
}
