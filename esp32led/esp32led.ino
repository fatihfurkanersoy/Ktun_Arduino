const int led = 12;
const int frekans = 5000 ;
const int ledChannel = 0 ;
const int cozunurluk = 8 ;


void setup() {
ledcSetup(ledChannel,frekans,cozunurluk);
ledcAttachPin(led,ledChannel);
}

void loop() {
for(int dutyCycle = 0 ; dutyCycle <= 255; dutyCycle++){
  ledcWrite(ledChannel,dutyCycle);
  delay(10);

}
for(int dutyCycle = 255 ; dutyCycle >= 0; dutyCycle--){
  ledcWrite(ledChannel,dutyCycle);
  delay(10);}
}
