#define buton 6
#define led4 7
int butondurum = 0 ;
void setup() {
  pinMode(buton,INPUT);
  pinMode(led4, OUTPUT);
}
void loop() {
  butondurum = digitalRead(buton);
  if (butondurum == 1){
    digitalWrite(led4,HIGH);
    }
  else {
    digitalWrite(led4,LOW);
}
}
