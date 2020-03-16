#define Buton 8
#define Led 10
int buton_durum = 0 ;
void setup() {
  // put your setup code here, to run once:
pinMode(Buton,INPUT);
pinMode(Led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
buton_durum = digitalRead(Buton);
if (buton_durum == 1){
digitalWrite(Led,HIGH);
}else {
digitalWrite(Led,LOW);
}
}
