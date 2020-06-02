int     sensor      = 8;
boolean sensorValue = 0;
int     tetik       = 7;


void setup() {
  Serial.begin(9600);
  pinMode(sensor, INPUT);
  pinMode(tetik, OUTPUT);
  Serial.println("Started...");
  delay(10);

}

void loop() {
  sensorValue = digitalRead(sensor);
  Serial.println("Sensor Value="+String(sensorValue));
  delay(100);

  if (sensorValue == 1) {
    digitalWrite(tetik, HIGH);

  } else {
    digitalWrite(tetik, LOW);
  }



}
