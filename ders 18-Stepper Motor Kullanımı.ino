#include <Stepper.h>//stepper kütüphanesini dahil ettik.
 
#define ADIM 40 //bir turda atacağı adım sayısı
 
Stepper stepper(ADIM, 8, 9, 10, 11);//obje oluşturduk.

int yon=-1, hiz=20;//motorun yön ve hızını belirledik.

void setup()
{
 //.... 
}

void loop()
{
  stepper.setSpeed(hiz);//hızını verdik.
  stepper.step(yon);//yönünü verdik.
}
