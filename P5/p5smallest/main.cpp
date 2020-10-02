#include "Smallest.h"
#include <iostream>
using namespace std;

int main(){
 Smallest aVector;

  int size ;
  cin >> size;
  aVector.setSize(size);
  aVector.consoleFill();
  aVector.missing();
}