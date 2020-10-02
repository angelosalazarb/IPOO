#include "Factorial.h"
#include <iostream>
using namespace std;

int main(){
  Factorial factorial;
  int number;
  cin >> number;
  
  factorial.setNumber(number);
  factorial.result();
  
}