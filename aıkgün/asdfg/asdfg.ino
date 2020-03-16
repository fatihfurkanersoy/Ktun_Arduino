int x;
#define pot A0
#define led 9
void setup() {
Serial.begin(9600);
}
void loop() {
x=analogRead(pot);
x=map(x,0,1023,10,255);
Serial.println(x);
analogWrite(led,x);



}
