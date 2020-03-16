long previous=0;

void setup() {
Serial.begin(9600);

}

void loop() {
long current = millis();
if(current - previous >=1000){
  previous-current;
  Serial.println("----------RUN-------");
}
Serial.println(current);
}
