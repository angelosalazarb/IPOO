#include "Frecuency.h"
#include <iostream>
using namespace std;

void show(Frecuency freq){
  freq.getFrecuencies();
}

int main(int argc, char* argv[]){
  Frecuency f1;
 
  string data;
  getline(cin, data);
  f1.setData(data);
  
  show(f1);
}