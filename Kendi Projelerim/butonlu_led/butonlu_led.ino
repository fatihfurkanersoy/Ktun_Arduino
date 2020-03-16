#define buton 6
#define led4 7
#define buzzer 8
int butondurum = 0 ;
void setup() {
  pinMode(buton,INPUT);
  pinMode(led4, OUTPUT);
  pinMode(buzzer,OUTPUT);
}
void loop() {
  butondurum = digitalRead(buton);
  if (butondurum == 1){
    digitalWrite(led4,LOW);
    digitalWrite(buzzer,HIGH);
    }
  else {
    digitalWrite(led4,HIGH);
    digitalWrite(buzzer,LOW);
}
}
