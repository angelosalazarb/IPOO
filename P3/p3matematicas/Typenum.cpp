#include "Typenum.h"
#include <string>
using namespace std;

Typenum::Typenum(){
  number = 0;
  result = "";
}

Typenum::Typenum(double nNumber){
  number = nNumber;
}

Typenum::~Typenum(){}

double Typenum::getNumber(){
  return number;
}

void Typenum::setNumber(double nNumber){
  number = nNumber;
}

string Typenum::getResult(){
  if(getNumber() < 0){
    return "negativo";
  }
  else if(getNumber() > 0){
    return "positivo";
  }
  else{
    return "cero";
  }
}