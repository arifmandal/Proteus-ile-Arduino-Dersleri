int ldrPin=A0;
int ldrValue=0;
int ledPin=13;


void setup() {
  Serial.begin(9600);
  pinMode(ldrPin,INPUT);
  pinMode(ledPin,OUTPUT);
  Serial.println("Started...");
  delay(1);

}

void loop() {
  ldrValue=analogRead(ldrPin);
  Serial.println(ldrValue);
  if(ldrValue>500){
    digitalWrite(ledPin,HIGH);
 
    }else{
    digitalWrite(ledPin,LOW);  
      
      }

}
