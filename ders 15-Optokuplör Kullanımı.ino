int ldrPin=A0;
int optoPin=13;
int ldrValue=0;


void setup() {
   Serial.begin(9600);
   pinMode(ldrPin,INPUT);
   pinMode(optoPin,OUTPUT);
   digitalWrite(optoPin,LOW);

}

void loop() {
   ldrValue=analogRead(ldrPin);
   Serial.println(ldrValue);
   delay(200);

   if(ldrValue>=512){
    digitalWrite(optoPin,HIGH);
    
    }else{
    digitalWrite(optoPin,LOW);  
      
      }


}
