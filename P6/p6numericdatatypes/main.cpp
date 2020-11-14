#include "Complex.h"
#include "Fraction.h"

int main(){
  Fraction fa(1,2);
  Fraction fb(3,2);
  Fraction fc(6,8);
  Fraction fd(4,7);

  Fraction fraction1 = fa + fb;
  Fraction fraction2 = fb - fa;
  Fraction fraction3 = fa / fc;
  Fraction fraction4 = fa + 2;
  Fraction fraction5 = fd * 4;

  fraction1.getFraction();
  fraction2.getFraction();
  fraction3.getFraction();
  fraction4.getFraction();
  fraction5.getFraction();

  Complex a(2, 3);
  Complex b(4, 1);
  Complex c(2, 2);
  Complex d(1, 9);
  Complex e(8, 6);

  Complex complex1 = a + b;
  Complex complex2 = b + c;
  Complex complex3 = a - 4;
  Complex complex4 = e * d;
  Complex complex5 = d + d;

  complex1.getComplex();
  complex2.getComplex();
  complex3.getComplex();
  complex4.getComplex();
  complex5.getComplex();
  
}