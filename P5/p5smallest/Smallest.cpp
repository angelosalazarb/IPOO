#include "Smallest.h"
#include <iostream>
#include <string>
using namespace std;

Smallest::Smallest(){
  size = 100;
  pivot = 0;
  for (int index = 0; index < 100; index++){buffer[index] = 0;}
}

Smallest::Smallest(int nSize){
  size = nSize;
  pivot = 0;
  for (int index = 0; index < nSize; index++){buffer[index] = 0;}
}

Smallest::Smallest(int nSize, double fill){
  size = nSize;
  pivot = 0;
  for (int count = nSize; count >= 0; count++){buffer[count] = fill;}
}

Smallest::~Smallest(){
}

int Smallest::getSize(){
  return size;
}

int Smallest::getValue(int index){
  return buffer[index];
}

void Smallest::setSize(int nSize){
  size = nSize;
}

void Smallest::consoleFill(){
  int value;
  for(int index = 0; index < getSize() - 1; index++){
    cin >> value;
    buffer[index] = value;
    pivot++;
  }
}

void Smallest::printVector(){
  for (int count = 0; count < getSize(); count++){
      cout << getValue(count) << endl;
  }
}

double Smallest::missing(){
  double number = buffer[0];
  for (int i = 0;i < getSize(); i++){
    if(buffer[i] != number){
      number;
    }
    else{
      buffer[i];
      number++;
    }
   
  }
  cout << number << endl;
  
}