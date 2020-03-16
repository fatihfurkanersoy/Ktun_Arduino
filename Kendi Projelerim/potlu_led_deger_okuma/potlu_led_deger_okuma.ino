#define led 3
#define pot A0


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println("Pot Değer");


}

void loop() {
  // put your main code here, to run repeatedly:

int deger = analogRead(pot);

deger = map(deger, 0,1023,0,255) ; 
analogWrite(led , deger );
deger = map(deger, 0,255,0,5);
Serial.println(deger);
delay(300);


}
