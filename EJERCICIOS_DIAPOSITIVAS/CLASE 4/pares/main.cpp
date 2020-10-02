#include "Pairs.h"
#include <iostream>
using namespace std;

int main(){
  Pairs pairs;
  int number;
  cin >> number;
  
  pairs.setSize(number);
  pairs.consoleFill();
  pairs.searchPairs();
  
}