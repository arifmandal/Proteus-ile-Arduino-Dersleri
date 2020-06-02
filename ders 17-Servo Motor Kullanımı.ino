#include<Servo.h>//kütüphanemizi dahil ettik.
Servo servo;//servo objesi oluşturduk.

int servoPin=9;//pinlerimizi tanımladık.
int potPin=A0;
int potValue=0;//pot değerimizi sıfır olarak tuttuk.


void setup() {
  Serial.begin(9600);//değerleri görebilmek için haberleşmeyi başlattık.
  pinMode(potPin,INPUT);//pot pinini giriş olarak atadık.
  servo.attach(servoPin);//servo pinimizi attach keyword ile atadık.
  
}

void loop() {
  potValue=analogRead(potPin);//potu okuduk.
  Serial.println("Pot Degeri: "+String(potValue));//yazdırdık.
  delay(100);//gecikme verdik.
  int mapValue=map(potValue,0,1023,0,180);//map foksiyonu ile dönüştürdük 0 ile 180 arasındaki değere
  int constrainValue=constrain(mapValue,0,180);
  Serial.println("constrain Degeri: "+String(constrainValue));//map değerimizi yazdırdık.
  delay(100);//gecikme verdik.
  servo.write(constrainValue);//servoya constrainValue miktarında dönmesini sağladık.


}
