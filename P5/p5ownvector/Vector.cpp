#include "Vector.h"
#include <iostream>
#include <string>
using namespace std;

Vector::Vector(){
  size = 100;
  pivot = 0;
  for (int index = 0; index < 100; index++){buffer[index] = 0;}
}

Vector::Vector(int nSize){
  size = nSize;
  pivot = 0;
  for (int index = 0; index < nSize; index++){buffer[index] = 0;}
}

Vector::Vector(int nSize, double fill){
  size = nSize;
  pivot = 0;
  for (int count = nSize; count >= 0; count--){buffer[count] = fill;}
}

Vector::~Vector(){
}

int Vector::getSize(){
  return size;
}

int Vector::getValue(int index){
  return buffer[index];
}

void Vector::setSize(int nSize){
  size = nSize;
}

void Vector::consoleFill(){
  int value;
  for(int index = 0; index < getSize(); index++){
    cin >> value;
    buffer[index] = value;
    pivot++;
  }
}

void Vector::printVector(){
  for (int count = 0; count < getSize(); count++){
      cout << getValue(count) << endl;
  }
}

void Vector::set(int index, double value){
  buffer[index] = value;
  pivot++;
}

void Vector::append(int value){
  
 
  if(getSize() > pivot){
    set(pivot, value);\
  }
  else if(getSize() <= pivot){
    setSize(getSize()*2);
    set(pivot, value);
  }
  
}

void Vector::remove(int index){

  for(int j = 0; j < getSize(); j++){
    if(j == index){
      size = getSize()-1;
      for(int i = j; i < size; i++){
        set(i, buffer[i+1]);
      }
    }
    
  }
}


void Vector::sort(){
  
  string op = "";
  cin >> op;

  path();

  if(op == "asc"){
    ascendent();
  }
  else if( op == "desc"){
    descendent();
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
        set(i, buffer[i+1]);
        set(i+1, min);
      }
    }
  }
}

void Vector::lookUp(int value){

}
