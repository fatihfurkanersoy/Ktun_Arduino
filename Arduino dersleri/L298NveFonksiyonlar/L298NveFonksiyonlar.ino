#define in1 2
#define in2 3
#define in3 4
#define in4 5
#define enA 9
#define enB 10
#define pot A0
int potdurum;
int myenipot;
void setup() {
pinMode(in1, OUTPUT);
pinMode(in2, OUTPUT);
pinMode(in3, OUTPUT);
pinMode(in4, OUTPUT);
pinMode(enA, OUTPUT);
pinMode(enB, OUTPUT);
}
void loop() {
potdurum=analogRead(pot);
myenipot=map(potdurum,0,1023,0,255);
pothiz(myenipot);
ileri();
delay(200);
geri();
}
void ileri(){
digitalWrite(in1,HIGH );
digitalWrite(in2,LOW);
digitalWrite(in3,HIGH);
digitalWrite(in4,LOW);
}
void geri(){
digitalWrite(in1,LOW);
digitalWrite(in2,HIGH);
digitalWrite(in3,LOW);
digitalWrite(in4,HIGH);
}

void pothiz(int yenipot){
  
  analogWrite(enA,yenipot);
  analogWrite(enB,yenipot);
}
