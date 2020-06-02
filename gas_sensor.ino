int gasSensor      = 8;
int buttonPin      = 2;
int ledRed         = 13;
int ledGreen       = 12;
boolean gasStat    = 0;
boolean buttonStat = 0;
boolean systemFlag = 0;



void setup() {
  Serial.begin(9600);
  pinMode(ledRed,   OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(gasSensor, INPUT);
  pinMode(buttonPin, INPUT);
  digitalWrite(ledRed, LOW);
  digitalWrite(ledGreen, LOW);
  Serial.println("Sistem Baslatildi...");


}

void loop() {
  gasStat = digitalRead(gasSensor);
  delay(50);
  buttonStat = digitalRead(buttonPin);
  delay(50);

  if (gasStat == 1 && systemFlag == 0) {
    if (buttonStat == 1) {
       systemFlag = 1;
    }
    digitalWrite(ledGreen, LOW);
    digitalWrite(ledRed, HIGH);
    Serial.println("Gas!!!!");

  } else {
    if (gasStat == 0) {
      systemFlag = 0;
    }
    digitalWrite(ledGreen, HIGH);
    digitalWrite(ledRed, LOW);
    Serial.println("Normal!!!!");

  }

}
