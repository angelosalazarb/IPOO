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
    for(int i = 0; i < getSize()-1; i++){
      if(buffer[i] > buffer[i+1]){
        aux = buffer[i];
        set(i, buffer[i+1]);  
        set(i+1, aux);
      }
    }
  }
}

void Vector::sort(){
  string op = "";
  cin >> op;

  order();

  if(op == "asc"){
      cout << "[";
    for (int index = 0; index < getSize(); index++){
      if(index+1 == getSize()){
        cout << buffer[index];
      }
      else{
        cout << buffer[index]<< ",";
      }
    }
    cout << "]";
  }

  else if(op == "desc"){
      cout << "[";
    for (int index = getSize()-1; index >= 0; index--){
       if(index == 0){
        cout << buffer[index];
      }
      else{
        cout << buffer[index] << ",";
      }
    }
    cout << "]";
  }
}

void Vector::lookUp(int value){
  int counter = 0;
  for (int index = 0; index < getSize(); index++){
    if(buffer[index] == value){
      cout << index << endl;
      counter++;
    }
  }
  cout << "El valor esta: " << counter << " veces.";
}




