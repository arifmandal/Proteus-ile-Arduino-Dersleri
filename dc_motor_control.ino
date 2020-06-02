int ln3=4;
int ln4=3;
int enb=5;



void setup() {
  pinMode(ln3,OUTPUT);
  pinMode(ln4,OUTPUT);
  pinMode(enb,OUTPUT);

}

void loop() {
  ileri();
  delay(3000);
  geri();
  delay(3000);

}

void ileri(){
  digitalWrite(ln3,HIGH);
  digitalWrite(ln4,LOW);
  analogWrite(enb,200);
  
  }
 void geri(){
  digitalWrite(ln3,LOW);
  digitalWrite(ln4,HIGH);
  analogWrite(enb,200);
  
  }
