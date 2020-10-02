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

void Vector::setSize(int nSize){
  size =  nSize;
}

int Vector::getSize(){
  return size;
}

int Vector::getValue(int index){
  return buffer[index];
}

void Vector::consoleFill(){
  int value;
  
  for (int index = 0; index < getSize(); index++){
    cin >> value;
    buffer[index] = value;
    pivot++;
  }
}

void Vector::set(int index,int value){
  buffer[index] = value;
  pivot++;
}

void Vector::printVector(){
  cout << "[";
  for (int index = 0; index < getSize(); index++){
    if(buffer[index+1] < getSize()){
      cout << buffer[index] << ",";
    }
    else{
      cout << buffer[index];
    }
  }
  cout << "]";
}

void Vector::order(){
  int aux;
  for (int index = 0; index < getSize(); index++){
    for(int i = 1; index < getSize(); i++){
      if(buffer[i+1] > buffer[i]){
        aux = buffer[i];
        set(i+1, buffer[i+1]);
        set(i, buffer[aux]);
      }
    }
  }
}

void Vector::sort(){
  string op;
  cin >> op;

  int counter = 0;
  if(op == "asc"){
    for(int index = 0; index < getSize(); index++){
      buffer[index] = buffer[counter];
      counter++;
    }
  }

  else if(op == "desc"){
    for(int index = getSize()-1; index == 0 ; index--){
      buffer[index] = buffer[counter];
      counter++;
    }
  }
}




