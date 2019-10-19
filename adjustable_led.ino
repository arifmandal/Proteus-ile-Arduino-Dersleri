int potPin=A0;
int ledPin=9;
int potValue=0;
int mapValue=0;


void setup() {
  pinMode(potPin,INPUT);
  pinMode(ledPin,OUTPUT);

}

void loop() {
  potValue=analogRead(potPin);
  mapValue=map(potValue,0,1023,0,255);
  analogWrite(ledPin,mapValue);
  delay(5);

}
