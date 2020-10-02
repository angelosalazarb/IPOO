#include "Major.h"
#include <string>
using namespace std;

Major::Major(){
  number = 0;
  number2 = 0;
  number3 = 0;
  majorNum = 0;
}

Major::Major(double nNumber, double nNumber2, double nNumber3){
  number = nNumber;
  number2 = nNumber2;
  number3 = nNumber3;
}

Major::~Major(){}

double Major::getNumber(){
  return number;
}

double Major::getNumber2(){
  return number2;
}

double Major::getNumber3(){
  return number3;
}

void Major::setNumber(double nNumber){
  number = nNumber;
}

void Major::setNumber2(double nNumber2){
  number2 = nNumber2;
}

void Major::setNumber3(double nNumber3){
  number3 = nNumber3;
}

double Major::getMajorNum(){
  if(getNumber() > getNumber2() && getNumber() > getNumber3()){
    return number;
  }
  else if(getNumber2() > getNumber() && getNumber2() > getNumber3()){
    return number2;
  }
  else if(getNumber3() > getNumber() && getNumber3() > getNumber2()){
    return number3;
  }
  else{
    return 0;
  }
}
