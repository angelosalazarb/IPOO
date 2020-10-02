#include "Vector.h"
#include <iostream>
#include <string>
using namespace std;

Vector::Vector(){
  size = 100;
  for (int index = 0; index < size; index++){
    buffer[index] = 0;
  }
}

Vector::Vector(int nSize){
  size = nSize;
  for (int index = 0; index < size; index++){
    buffer[index] = 0;
  }
}

Vector::Vector(int nSize, int fill){
  size = nSize;
  for (int index = 0; index < size; index++){
    buffer[index] = fill;
  }
}

Vector::~Vector(){}


