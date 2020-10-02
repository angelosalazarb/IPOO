#include "Coin.h"
#include <string>
using namespace std;


Coin::Coin(){
  number = 0;
}

Coin::~Coin(){}

void Coin::setNumber(int nNumber){
  number = nNumber;
}

int Coin::getNumber(){
  return number;
}

string Coin::getAnswer(){
  if (number % 2 == 0){
    return "El resultado es cara.";
  }
  else if(number % 5 == 0){
    return "El resultado es sello.";
  }

  else if(number % 7 == 0){
    return "El resultado es cara";
  }
  else{
    return "El resultado es sello.";
  }
}
