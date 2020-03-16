#define buzzer 9
#define led4 6
#define pot A0
int potdurum = 0;
void setup() {
  Serial.begin(9600);
  Serial.println("Potansiyometrenin Durumu");
}
void loop() {
  potdurum = analogRead(pot);
  potdurum = map(potdurum,0,1023,0,255);
  Serial.println(potdurum);
    analogWrite(buzzer ,potdurum);
    analogWrite(led4,potdurum);
}
