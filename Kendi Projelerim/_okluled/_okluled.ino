int ledler[]={2,3,4,5,6,7};

void setup() {
  
for ( int i=0; i<6 ; i++){

pinMode(ledler[i],OUTPUT);

}


}

void loop() {

  for(int i = 0; i<6; i++ ){
    digitalWrite(ledler[i],HIGH);
    delay(50);
    digitalWrite(ledler[i],LOW);
  
}
  for(int  b = 5; b>-1; b-- ){
    digitalWrite(ledler[b],HIGH);
    delay(50);
    digitalWrite(ledler[b],LOW);
}

}
