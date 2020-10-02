#include "Years.h"
#include <iostream>
using namespace std;

Years::Years(){
  year1 = 0;
  year2 = 0;
}

Years::Years(int nYear1, int nYear2){
  year1 = nYear1;
  year2 = nYear2;
}

Years::~Years(){}

int Years::getYear1(){
  return year1;
}

int Years::getYear2(){
  return year2;
}

void Years::setYear1(int nYear1){
  year1 = nYear1;
}

void Years::setYear2(int nYear2){
  year2 = nYear2;
}

void Years::getYears(){
  int count = getYear1();
  for (count; count < year2; count++){
    if(count % 400 == 0 || count % 4 == 0 && count % 100 != 0){
      cout << count << " ";
    }
    else{
      cout << "";
    }
  }
}