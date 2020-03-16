#define led 3
#define led1 4
#define led2 5
#define led3 6
#define led4 7
#define buton 10 
int butondurum = 0;
void setup() {
  pinMode(led,OUTPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(buton,INPUT);
}
void loop() {
butondurum = digitalRead(buton);
if (butondurum == 1 ){
  digitalWrite(led,HIGH);
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,LOW);
  }
else {
  digitalWrite(led,LOW);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,HIGH);
}
}
