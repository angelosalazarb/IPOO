#include "Complex.h"

int main(){
  Complex a(2, 3);
  Complex b(4, 1);
  Complex c(2, 2);
  Complex d(1, 9);
  Complex e(8, 6);

  Complex complex1 = a + b;
  Complex complex2 = b + c;
  //*Complex complex3 = 4 - a;
  Complex complex4 = e * d;
  Complex complex5 = d + d;

  complex1.getComplex();
  complex2.getComplex();
  //*complex3.getComplex();
  complex4.getComplex();
  complex5.getComplex();

}