#include "String.h"
#include <iostream>
using namespace std;

int main(){
  String aStr;

  int size;
  cin >> size;
  aStr.setSize(size);
  aStr.consoleFill();
  aStr.get(2);
  aStr.printStr();
  
  String oStr;
  oStr.setSize(size);
  oStr.consoleFill();
  /**oStr.equal(aStr);*/
  oStr.sustract(aStr);
  
}