#define led 9

void ledsondur(){
digitalWrite(led,LOW);
attachInterrupt(0,ledyak,HIGH);
delay(1000);
digitalWrite(led,HIGH);
}
void ledyak(){
digitalWrite(led,HIGH);
attachInterrupt(0,ledsondur,LOW);
delay(1000);
digitalWrite(led,LOW);
}
void setup() {
pinMode(led,OUTPUT);
attachInterrupt(0,ledyak,HIGH);
Serial.begin(9600);
}

void loop() {
delay(100);
}
