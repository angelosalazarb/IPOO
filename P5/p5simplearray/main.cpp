#include "Vector.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
 Vector aVector;

  int size ;
  cin >> size;
  aVector.setSize(size);
  aVector.consoleFill();
  aVector.path();

  string op = "";
  cin >> op;

  if(op == "asc"){
    aVector.ascendent();
  }
  else if(op == "desc"){
    aVector.descendent();
  }
}