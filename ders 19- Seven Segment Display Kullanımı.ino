int pins[7]={8,7,6,5,4,3,2};

const int numbers[10]={0X7E,0X30,0X6D,0X79,0X33,0X5B,0X5F,0X70,0X7F,0X7B};
/*
const int SIFIR = 0X7E;
const int BIR = 0X30;
const int IKI = 0X6D;
const int  UC = 0X79;
const int  DORT = 0X33;
const int  BES = 0X5B;
const int  ALTI = 0X5F;
const int  YEDI = 0X70;
const int   SEKIZ = 0X7F;
const int  DOKUZ = 0X7B;
*/

void setup() {
  
  for(int i=0; i<8;i++){
    pinMode(pins[i],OUTPUT);
    } 
}

void loop() {
  for(int i=0; i<10;i++){
    yazdir(numbers[i]);
    
    }
  for(int j=9; j>0;j--){
    yazdir(numbers[j]);
    
    }
}

/*bitRead(x, n)
x: the number from which to read.
n: which bit to read, starting at 0 for the least-significant (rightmost) bit.
 */
void yazdir(const int number)
{
  for(int i=2,j=0;i<=8;i++,j++)
  {
    digitalWrite(i,bitRead(number,j));

  }
  delay(500);
}
