#include "Frecuency.h"
#include <iostream>
#include <string>
using namespace std;

Frecuency::Frecuency(){
  data = "";
  num0 = 0;
  num1 = 0;
  num2 = 0;
  num3 = 0;
  num4 = 0;
  num5 = 0;
  num6 = 0;
  num7 = 0;
  num8 = 0;
  num9 = 0;
}

Frecuency::Frecuency(string nData){
  data = nData;
}

Frecuency::~Frecuency(){}

void Frecuency::setData(string nData){
  data = nData;
}

string Frecuency::getData(){
  return data;
}

void Frecuency::getFrecuencies(){
  for(int i =0; i <= data.length();i++){
    if(data[i] == '0'){
      num0 ++;
    }
    else if(data[i] == '1'){
      num1 ++;
    }
    else if(data[i] == '2'){
      num2 ++;
    }
    else if(data[i] == '3'){
      num3 ++;
    }
    else if(data[i] == '4'){
      num4 ++;
    }
    else if(data[i] == '5'){
      num5 ++;
    }
    else if(data[i] == '6'){
      num6 ++;
    }
    else if(data[i] == '7'){
      num7 ++;
    }
    else if(data[i] == '8'){
      num8 ++;
    }
    else if(data[i] == '9'){
      num9 ++;
    }
  }
  cout <<"0 = " << num0 << endl;
  cout <<"1 = " << num1 << endl;
  cout <<"2 = " << num2 << endl;
  cout <<"3 = " << num3 << endl;
  cout <<"4 = " << num4 << endl;
  cout <<"5 = " << num5 << endl;
  cout <<"6 = " << num6 << endl;
  cout <<"7 = " << num7 << endl;
  cout <<"8 = " << num8 << endl;
  cout <<"9 = " << num9 << endl;

}