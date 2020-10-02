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

 for (int i = 2; number3 > 1; i++){
   for(int j = 0; number3 % i == 0; j++){
    number3 = number3 / i;
      if(number3 >= 2){
        cout << i << "*";
      }
      else{
        cout << i;
      }
    }
  }
  return "";
}
