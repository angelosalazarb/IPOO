#include "Descompose.h"
#include <string>
#include <iostream>
using namespace std;

void show(Descompose d){
  cout << d.getFactor();
}

int main(int argc, char* argv[]){
  Descompose d1;

  if(argc > 1){
    d1.setNumber(atoi(argv[1]));
  }
  else{
    int num;
    cin >> num; d1.setNumber(num);
  }
  show(d1);
}