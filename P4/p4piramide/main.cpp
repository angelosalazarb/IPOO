#include "Pyramid.h"
#include <iostream>
using namespace std;

void show(Pyramid py){
  cout << py.getDraw();
}

int main(int argc, char* argv[]){
  Pyramid py1;

  if (argc > 1){
    py1.setAlture(atoi(argv[1]));
  }
  else{
    int num1;
    cin >> num1;
    py1.setAlture(num1);
  }

  show(py1);
}