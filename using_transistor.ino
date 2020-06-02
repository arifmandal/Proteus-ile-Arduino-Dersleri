int transPin = 11;
int buttonPin = 2;
boolean state = false;

void setup() {
  pinMode(transPin, OUTPUT);
  pinMode(buttonPin, INPUT);

}

void loop() {
  /*if (digitalRead(buttonPin) == 1) {
    digitalWrite(transPin, HIGH);

  } else {
    digitalWrite(transPin, LOW);
  }*/

  if (digitalRead(buttonPin) == 1) {
    if (state == false) {
      digitalWrite(transPin, HIGH);
      state = true;

    } else {
      digitalWrite(transPin, LOW);
      state = false;
    }
    }
    delay(200);

}
