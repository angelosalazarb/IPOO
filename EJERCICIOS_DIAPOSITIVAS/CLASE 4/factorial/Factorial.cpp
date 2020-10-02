#include "Factorial.h"
#include <iostream>
using namespace std;

Factorial::Factorial(){
  number = 0;
}

Factorial::Factorial(int nNumber){
  number = nNumber;
}

int Factorial::getNumber(){
  return number;
}

Factorial::~Factorial(){}

void Factorial::setNumber(int nNumber){
  number = nNumber;
}

void Factorial::result(){
  int factorial = number-1;
  int mult = number;

  do{
    mult = mult * factorial;
    factorial--;
  } while(factorial > 1);

  cout << mult;
}
