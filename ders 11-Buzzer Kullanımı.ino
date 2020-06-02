int buzzerPin=8;

void setup() {
  pinMode(buzzerPin,OUTPUT);

}

void loop() {
  digitalWrite(buzzerPin,HIGH);
  delay(800);
  digitalWrite(buzzerPin,LOW);
  delay(400);

}
