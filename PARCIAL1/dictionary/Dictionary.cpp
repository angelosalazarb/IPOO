#include "Dictionary.h"
#include <iostream>
using namespace std;

Dictionary::Dictionary(){
  field = "";
  value  = "";
  stop = "";
}

Dictionary::~Dictionary(){}

string Dictionary::getValue(string field){
  for(int index = 0; buffer1[index] != "~"; index++){
    if(buffer1[index] == field){
      cout<< buffer2[index] << endl;
    }
  }
  return "";
}

void Dictionary::setValue(string field,string nValue){
  for(int index = 0; buffer1[index] != "~"; index++){
    if(buffer1[index] == field){
      buffer2[index] = nValue;
    }
  }
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

    cout << "If u don't want to add more fields type ~ else type *: ";
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
  cout << ")" << endl;
}

void Dictionary::fields(){
  int counter = 0;

  for (int index = 0; buffer1[index] != "~"; index++){
    counter++;
  }
  cout << counter << endl;
}


void Dictionary::isInField(string field, string value){
  string var = "";
  for(int index = 0; buffer1[index] != "~"; index++){
    if(buffer2[index] == value){
      var = "true";
    }
  }
  
  if(var == "true"){
    cout << "true" << endl;
  }
  else if (var == ""){
    cout << "false" << endl;
  }
}