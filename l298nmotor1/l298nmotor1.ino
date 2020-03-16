#define enA 6
#define enB 11
#define in1 7
#define in2 8
#define in3 9
#define in4 10


void setup() {
  pinMode(enA , OUTPUT );
  pinMode(enB , OUTPUT );
  pinMode(in1 , OUTPUT );
  pinMode(in2 , OUTPUT );
  pinMode(in3 , OUTPUT );
  pinMode(in4 , OUTPUT );


}

void loop() {
//---- A ve B Cikis olarak etkinlestir------//
digitalWrite(enA, HIGH);
digitalWrite(enB, HIGH);
//----------Run motors-----------//
digitalWrite(in1, LOW);
digitalWrite(in2, HIGH);
digitalWrite(in3 , LOW);
digitalWrite(in4, HIGH);
}
