int potPin=A0;
int potValue=0;
float voltage=0;


void setup() {
  Serial.begin(9600);
  pinMode(potPin,INPUT);
  Serial.println("Started...");
  delay(1);
  

}

void loop() {
  potValue=analogRead(potPin);
  voltage= potValue*(5.0/1023.0);
  Serial.print("Voltaj Degeri: ");
  Serial.print(voltage);
  Serial.println("V");
  delay(200);


}
