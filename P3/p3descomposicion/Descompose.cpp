#include "Descompose.h"
#include <string>
#include <iostream>
using namespace std;

Descompose::Descompose(){
  number = 0;
  factor = "";
  count = 1;
  result = "";

}

Descompose::Descompose(int nNumber){
  number = nNumber;
  factor = "";
  count = 1;
}

Descompose::~Descompose(){}

int Descompose::getNumber(){
  return number;
}

void Descompose::setNumber(int newNum){
  number = newNum;
}

string Descompose::getFactor(){
 int number3 = getNumber();

 for (int contador = 1; number3 > 1; contador++){

    if (number3 % 2 == 0){
      number3 = number3/2;
      cout << 2;
    }
    else if(number3 % 3 == 0){
      number3 = number3/3;
      cout << 3;
    }

    else if(number3 % 5 == 0){
      number3 = number3/5;
      cout << 5;
    }
    
    if(number3 >= 2){
    cout<< " * ";
    }
  }
  return "";
}
