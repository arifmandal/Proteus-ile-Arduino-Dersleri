int redLight = 13; //pinlerin atamasını yaptık.Kırmızı 13, sarı 12, yeşil 11,
int yellowLight = 12;
int greenLight = 11;

const int REDTIME = 5000; //sabit değişken olarak süreleri atadık.Kırmızı 5 saniye, sarı 1 saniye, yeşil 4 saniye
const int YELLOWTIME = 1000;
const int GREENTIME = 4000;

int count = 0;// trafik lambasının kaç adet tur attığını tuttuk.

void setup() {
  Serial.begin(9600);//haberleşmeyi başlattık.
  pinMode(redLight, OUTPUT); //pinleri çıkış pini olarak atadık.
  pinMode(yellowLight, OUTPUT);
  pinMode(greenLight, OUTPUT);

  Serial.println("Trafik Isigi Uygulamasi!!!...");
  delay(100);

  digitalWrite(redLight, LOW); //ışıkları başlangıçta kapalı olarak başlattık.
  digitalWrite(yellowLight, LOW);
  digitalWrite(greenLight, LOW);


}

void loop() {
  Serial.println("Loop Number:" + String(++count)); //gerçekleşen döngü sayısını ekrana yazdırdık.

  Serial.println("Bekle!...");
  digitalWrite(redLight, HIGH); //5 saniye kırmızı ışık yanacak.
  delay(REDTIME);

  Serial.println("Hazir Ol!...");
  digitalWrite(yellowLight, HIGH); //1 saniye boyunca kırmızı sönmeden sarı da yanacak.
  delay(YELLOWTIME);

  digitalWrite(redLight, LOW); //kırmızı ve sarı sönecek.
  digitalWrite(yellowLight, LOW);

  Serial.println("Gec!...");
  digitalWrite(greenLight, HIGH); //yeşil ışık 4 saniye boyunca yanacak.
  delay(GREENTIME);

  digitalWrite(greenLight, LOW); //yeşil ışık sönecek ve döngü baştan başlayacak.

}
