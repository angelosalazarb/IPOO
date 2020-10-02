#include "Pairs.h"
#include <iostream>
using namespace std;

Pairs::Pairs(){
  size = 100;
  pivot = 0;
  for (int index = 0; index < 100; index++){buffer[index] = 0;}
}

Pairs::Pairs(int nSize){
  size = 100;
  pivot = 0;
  for (int index = 0; index < 100; index++){buffer[index] = 0;}
}

Pairs::Pairs(int nSize, double fill){
  size = nSize;
  pivot = 0;
  for (int index = 0; index < size; index++){buffer[index] = fill;}
}

Pairs::~Pairs(){}

int Pairs::getSize(){
  return size;
}

int Pairs::getValue(int index){
  return buffer[index];
}

void Pairs::setSize(int nSize){
  size = nSize;
}

void Pairs::consoleFill(){
  int value;
  for(int index = 0; index < getSize(); index++){
    cin >> value;
    buffer[index] = value;
    pivot++;
  }
}

void Pairs::printVector(){

  for (int count = 0; count < getSize(); count++){
      cout << getValue(count) << endl;
  }
}

double Pairs::searchPairs(){

  int pairs = 0;

  for (int i = 0; i < getSize(); i++){
    if (buffer[i] % 2 == 0){
      pairs++;
    }

    else{
      pairs;
    }
  }
  cout << pairs;
}
