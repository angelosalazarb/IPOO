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
  cout << "[";

  for (int count = 0; count < getSize(); count++){
    if(count == getSize()-1){
      cout << getValue(count);
    }
    else{
      cout << getValue(count) << ", "; 
    }
  }

  cout << "]";
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
  double value = 0;

  for(int count = 0; count < getSize(); count++){
    cin >> value;
    buffer[count] = value;
  }

}

double Vector::sum(){
  double sum = 0;

  for (int count = 0; count < getSize(); count++){
    sum += buffer[count];
  }
 return sum;
}

double Vector::min(){
  double min = buffer[0];

  for(int count = 0; count < getSize(); count++){
    if(min >= buffer[count]){
      min = buffer[count];
    }
  }
  return min;
}

double  Vector::avg(){
  double avg = 0;
  double sum2 = 0;

  for (int count = 0; count < getSize(); count++){
    sum2 += buffer[count];
  }

  avg = sum2/getSize();

  return avg;
}

double Vector::max(){
  double max = buffer[0];

  for(int count = 0; count < getSize(); count++){
    if(max <= buffer[count]){
      max = buffer[count];
    }
  }
  return max;
}

