//TRANSİSTÖR İLE DC MOTOR SÜRMEK
#define motor 3
void setup() {
pinMode(motor,OUTPUT);
}

void loop() {
analogWrite(motor,0);
}
