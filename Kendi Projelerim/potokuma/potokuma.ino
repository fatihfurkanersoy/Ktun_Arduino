#define potpin A0
int deger = 0;
void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);
Serial.print("Pot değer okuma");


}

void loop() {
  // put your main code here, to run repeatedly:

deger = analogRead(potpin);
float gerilim = (5.00/1024.00)*deger ;

Serial.println(gerilim);
delay(300);
}
