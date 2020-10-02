#include <iostream>
using namespace std;
#include "Box.h"

  void show(Box box){
    cout << " width: "<< box.getWidth()<<endl;
    cout << " alto: "<< box.getHeight()<<endl;
    cout << " largo: "<< box.getLength()<<endl;

    cout << " volumen: "<< box.getVolume()<<endl;
    cout << " area: "<< box.getArea()<<endl;
  }

  int main(){
    Box aBox;

    aBox.setWidth(23);
    aBox.setHeight(5);
    aBox.setLength(10);
    
    show(aBox);
    
  }
  