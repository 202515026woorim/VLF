void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);  // ← 세미콜론 추가
  while(!Serial) {
    // 시리얼 포트가 연결될 때까지 대기
  }
  Serial.println("Success to open Serial0");
  Serial.flush(); // 통신이 완료될 때까지 기다림

  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13,HIGH);
  Serial.println("Turn on Light");
  Serial.flush();
  delay(1000);

  digitalWrite(13,LOW);
  Serial.println("Turn off Light");
  Serial.flush();
  delay(1000);
}
