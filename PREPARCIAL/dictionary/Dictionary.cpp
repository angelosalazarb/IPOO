#include "Dictionary.h"
#include <iostream>
using namespace std;

Dictionary::Dictionary(){
  field = "";
  value  = "";
  stop = "";
}
/*
Dictionary::Dictionary(string nField, string nValue){
  field = nField ;
  value  = nValue;
  for (int index = 0; index < 5; index++){
    buffer1[index] = field;
    buffer2[index] = value;
    components[index] = field + value;
  }
}
*/
Dictionary::~Dictionary(){}

string Dictionary::getField(){
  return field;
}

string Dictionary::getValue(string field){
  return value;
}

void Dictionary::fill(){
  int count = 0;
  do{
    cout << "Input field: ";
    cin >> field;
    buffer1[count] = field;
    
    cout << "Input value: ";
    cin >> value;
    buffer2[count] = value;

    count++;

    cout << "If u dont want to add more fields type ~ else type *: ";
    cin >> stop;
    if(stop == "~"){
      buffer1[count] = stop;
    }

  }while(stop != "~");
}

void Dictionary::print(){
  cout << "(";
  for (int index = 0; buffer1[index] != "~"; index++){
    if(buffer1[index+1] == "~")
    cout <<buffer1[index] << ":" << buffer2[index];
    else
    cout <<buffer1[index] << ":" << buffer2[index] << ",";
  }
  cout << ")";
}
