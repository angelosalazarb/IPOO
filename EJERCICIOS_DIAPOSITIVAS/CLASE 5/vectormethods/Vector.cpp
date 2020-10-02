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
    if(index+1 < getSize()){
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

void Vector::append(int value){
 if(getSize() > pivot){
   set(pivot, value);
   pivot++;
 }
 if(getSize() <= pivot){
   setSize(getSize()+1);
   set(pivot, value);
   pivot++;
 }
}

void Vector::insert(int index, int value){
  int aux;
  int aux2;

    if(index > getSize()-1){
      setSize(getSize()+1);
      set(index, value);
    }
    else if(index == getSize()-1){
      aux =  getValue(index);
      set(index, value);
      setSize(getSize()+1);
      set(index+1, aux);
    }
    else if(index < getSize()-1){
      aux = getValue(index);
      int auxbuff[getSize()];
      int count1;
      count1 = 0;
      int count2;
      count2 = 0;

      for (int count = index; count < getSize(); count++){
        auxbuff[count1]=buffer[count];
        count1++;
      }
      setSize(getSize()+1);
      set(index,value);

      for(int i = index+1; i < getSize(); i++ ){
        buffer[i] = auxbuff[count2];
        count2++;
      }
   }
}






