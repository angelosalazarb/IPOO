#include "Vector.h"
#include <iostream>
#include <string>
using namespace std;

Vector::Vector(){
  capacity = 10;
  size = 0;
  int *buffer = new int[capacity];

  /**for (int index = 0; index < capacity; index++){buffer[size++] = 0;}*/
}

Vector::Vector(int nSize){
capacity = 5;
size = nSize;
int *buffer = new int[capacity];

for (int count = nSize; count >= capacity; count--){buffer[size++] = 0;}
}

Vector::Vector(int nSize, int fill){
capacity = 5;
size = 0;
buffer = new int[capacity];

for (int count = nSize; count >= capacity; count--){buffer[size++] = fill;}
}

Vector::~Vector(){
  delete []buffer;
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
  if (size < capacity){
  for(int index = 0; index < getSize(); index++){
    cin >> value;
    buffer[index] = value;
    }
  }
  else{
    capacity *= 2; //Multiplies the capacity by two

    int *tempBuffer = new int[capacity];

    for (int index = 0; index < size; index++){
      tempBuffer[index] = buffer[index];
    }

    delete []buffer;

    buffer = tempBuffer; 

    for(int index = 0; index < getSize(); index++){
    cin >> value;
    buffer[index] = value;
    }   
  }
}

void Vector::printVector(){
  for (int count = 0; count < getSize(); count++){
      cout << getValue(count) << endl;
  }
}

void Vector::set(int index, double value){
  buffer[index] = value;
}

void Vector::append(int value){
  
  if (size < capacity){
  set(size,value);
  size++;

  }

  else{
    capacity *= 2; //Multiplies the capacity by two

    int *tempBuffer = new int[capacity];

    for (int index = 0; index < size; index++){
      tempBuffer[index] = buffer[index];
    }

    delete []buffer;

    buffer = tempBuffer; 

    set(size, value);
    size++;

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

