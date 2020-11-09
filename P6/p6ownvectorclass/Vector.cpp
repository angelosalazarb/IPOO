#include "Vector.h"
#include <iostream>
#include <string>
using namespace std;

Vector::Vector(){
  this -> capacity = 10;
  this -> size = 0;
  int *buffer = new int[capacity];

  /**for (int index = 0; index < capacity; index++){buffer[size++] = 0;}*/
}

Vector::Vector(int size){
this -> capacity = 5;
this -> size = size ;
int *buffer = new int[capacity];

for (int count = size; count >= capacity; count--){buffer[size++] = 0;}
}

Vector::Vector(int size, int fill){
this -> capacity = 5;
this -> size = size ;
buffer = new int[capacity];

for (int count = size; count >= capacity; count--){buffer[size++] = fill;}
}

Vector::~Vector(){
  delete []buffer;
}

int Vector::getSize(){
  return this -> size;
}

int Vector::getValue(int index){
  return buffer[index];
}

void Vector::setSize(int nSize){
  this -> size = nSize;
}

void Vector::consoleFill(){
  try{
  int value;
  if (size < capacity){
  for(int index = 0; index < getSize(); index++){

    cin >> value;

    if(cin.fail()){
      throw "Dato invalido, digite un entero.";
    }else{
      buffer[index] = value;
      }
    }
  }
  else{
    this -> capacity *= 2; //Multiplies the capacity by two

    int *tempBuffer = new int[capacity];

    for (int index = 0; index < size; index++){
      tempBuffer[index] = buffer[index];
    }

    delete []buffer;

    buffer = tempBuffer; 

    for(int index = 0; index < getSize(); index++){
    
    cin >> value;

    if(cin.fail()){
      throw "Dato invalido, digite un entero.";
    }else{
      buffer[index] = value;
      }
    }   
  }
  }

  catch(char const *error){
		cout << error << endl;
    abort();
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
  set(this -> size,value);
  size++;

  }

  else{
    this -> capacity *= 2; //Multiplies the capacity by two

    int *tempBuffer = new int[capacity];

    for (int index = 0; index < this -> size; index++){
      tempBuffer[index] = buffer[index];
    }

    delete []buffer;

    buffer = tempBuffer; 

    set(this -> size, value);
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

  try{
    if(cin.fail()){
      throw "Entrada invalida, digite asc para ascendente y desc para descendente.";
    }
    else{
      
      path();

      if(op == "asc"){
        ascendent();
      }
      else if( op == "desc"){
        descendent();
      }
    }
  }
  catch(char const *error){
    cout << error << endl;
    abort();
  }
}

void Vector::ascendent(){
  int *tempBuffer = new int[capacity];
  int count2 = 0;
 for(int count = 0; count < getSize(); count++){
  
  tempBuffer[count2] = buffer[count];
  count2++;
  cout << buffer[count] << endl;
  
 }

 delete []buffer;
 buffer = tempBuffer;

}

void Vector::descendent(){
  int *tempBuffer = new int[capacity];
  int count2 = 0;
 for(int count = getSize()-1; count >= 0; count--){

  tempBuffer[count2] = buffer[count];
  count2++;
  cout << buffer[count] << endl;

 }

 delete []buffer;
 buffer = tempBuffer;

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

