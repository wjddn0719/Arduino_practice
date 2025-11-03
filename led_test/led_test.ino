void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(6, OUTPUT);
  Serial.begin(9600); //초당 9,600bit를 전송하도록 시리얼 통신 속도를 초기화, 아두이노와 PC가 같은 속도로 통신하기 위해 약속(프로토콜)을 맞추는 과정
}

void loop() {
  if(Serial.read() == '1'){
    digitalWrite(6, HIGH);
  }
  if(Serial.read() == '0'){
    digitalWrite(6, LOW);
  }       // wait for a second
}
