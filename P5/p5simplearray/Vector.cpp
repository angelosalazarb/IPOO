#include "Vector.h"
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

Vector::Vector(){
  size = 100;
  pivot = 0;
  for(int index = 0; index < size; index++){
    buffer[index] = 0;
  }
}

Vector::Vector(int nSize){
  size = nSize;
  pivot = 0;
  for(int index = 0; index < nSize; index++){
    buffer[index] = 0;
  }
}

Vector::Vector(int nSize, double fill){
  size = nSize;
  pivot = 0;
  for(int index = 0; index < nSize; index++){
    buffer[index] = fill;
  }
}

Vector::~Vector(){}

int Vector::getSize(){
  return size;
}

double Vector::getValue(int index){
  return buffer[index];
}

void Vector::setSize(int nSize){
  size = nSize;
}

void Vector::setVec(int index, double value){
  buffer[index] = value;
}

void Vector::printVector(){
  for (int count = 0; count < getSize(); count++){
      cout << getValue(count) << endl;
  }
}


void Vector::append(double value){
  if(getSize() > pivot){
    setVec(pivot, value);
  }
  else if(getSize() <= pivot){
    setSize(getSize()*2);
    setVec(pivot, value);
  }
}

void Vector::consoleFill(){
  int value;
  for(int index = 0; index < getSize(); index++){
    cin >> value;
    buffer[index] = value;
  }
}

void Vector::ascendent(){
 for(int count = 0; count < getSize(); count++){
   cout << buffer[count] << endl;
 }
}

void Vector::descendent(){
 for(int count = getSize()-1; count >= 0; count--){
   cout << buffer[count] << endl;
 }
}

void Vector::path(){
  double min;
  
  for(int count = 0; count < getSize(); count++){
    for(int i = 0 ; i < getSize()-1; i++){
      if(buffer[i] > buffer[i+1]){
        min = buffer[i];
        setVec(i, buffer[i+1]);
        setVec(i+1, min);
      }
    }
  }

}



