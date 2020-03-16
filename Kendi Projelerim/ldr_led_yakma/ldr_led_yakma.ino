#define led 3

void setup() {
pinMode(led,OUTPUT);
Serial.begin(9600);
}

void loop() {
  
int isik = analogRead(A0);
Serial.println(isik);
delay(10);
if (isik < 650){

digitalWrite(led,HIGH);
}
else {
  digitalWrite(led,LOW);
}
  
}
