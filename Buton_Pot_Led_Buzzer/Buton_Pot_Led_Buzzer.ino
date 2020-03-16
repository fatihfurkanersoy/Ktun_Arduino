#define buton 10
#define led 9
#define buzzer 6
#define pot A0
int butondurum = 0 ;
int potdurum = 0 ;
void setup() {
  pinMode(buton,INPUT);
  pinMode(led ,OUTPUT);
  Serial.begin(9600);
}
void loop() {
  butondurum = digitalRead(buton);
  potdurum = analogRead(pot);
  potdurum = map(potdurum, 0,1023,0,255);
  Serial.println(potdurum);
  if (butondurum == 1){
    digitalWrite(led,HIGH); 
    analogWrite(buzzer,potdurum); 
    }
  else {
    digitalWrite(led,LOW); 
    analogWrite(buzzer,0); 
}
}
