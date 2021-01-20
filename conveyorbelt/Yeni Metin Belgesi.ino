#include <Stepper.h>

#define STEPS 200 // motor 1.8 derecelik açıya sahip olduğundan tam tur atması için

Stepper stepper1(STEPS, 2, 5); //step motorun step ve direction pinleri

void setup() {

stepper1.setSpeed(500); //motorun hızı için

}

void loop()

{

stepper1.step(STEPS); //her turda atılacak adım delay(500); }