void setup() {
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);

}

void loop() {
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  for(int i = 0; i < 256; i++){
    analogWrite(3, i);
    delay(10);
  }
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  delay(500);
  
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  for(int i = 0; i < 256; i++){
    analogWrite(3, i);
    delay(10);
  }
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  delay(500);
  
  

}
