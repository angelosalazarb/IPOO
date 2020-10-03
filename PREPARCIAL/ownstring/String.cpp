#include "String.h"
#include <iostream>
using namespace std;

String::String(){
  size = 0;
  for (int index = 0; index < size; index++){
    buffer[index] = '*';
  }
}

String::String(int nSize, char fill){
  size = nSize; 
  for (int index = 0; index < size; index++){
    buffer[index] = fill;
  }
}

String::~String(){}

int String::getSize(){
 return size;
}

void String::setSize(int nSize){
  size = nSize;
}

void String::consoleFill(){
  char str;
  for(int index = 0; index < getSize(); index++){
    cin >> str;
    buffer[index] = str;
  }
}

void String::printStr(){
  for(int index = 0; index < getSize(); index++){
    cout << buffer[index];
  }
  cout << endl;
}

void String::length(){
  int counter = 0;
  for (int index = 0; index < getSize();index++){
    counter++;
  }
  cout << counter;
}

void String::insert(int index, char nStr){
  buffer[index-1] = nStr;
}

void String::get(int index){
  char print = buffer[index-1];
  cout << print <<endl;
}


void String::equal(String userStr){
  int counter = 0;
  for(int index = 0; index < getSize(); index++){
    if(buffer[index] == userStr.buffer[index]){
      counter++;
    }
  }
  
  if (counter == getSize()){
    cout << "true" << endl;
  }
  else{
    cout << "false" << endl;
  }
}


void String::sustract(){

}
