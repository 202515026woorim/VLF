void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  while(!Serial)
  {
    
  }
  Serial.println("Success to open Serial0");
  Serial.flush(); //통신이 완료될때 까지 기다린다.
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
