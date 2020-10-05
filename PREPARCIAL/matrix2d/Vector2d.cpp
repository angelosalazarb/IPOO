#include "Vector2d.h"  
#include <iostream>
using namespace std;

Vector2d::Vector2d(){
  size = 2;


  for (int indexr = 0; indexr < size; indexr++){
    for(int indexc = 0; indexc < 1; indexc++){
      vector[indexr][indexc] = 0;
    }
  }
}

Vector2d::Vector2d(int nSize){
  size = nSize;

  for (int indexr = 0; indexr < size; indexr++){
    for(int indexc = 0; indexc < 1; indexc++){
      vector[indexr][indexc] = 0;
    }
  }
}

Vector2d::~Vector2d(){}

int Vector2d::getSize(){
  return size;
}

void Vector2d::setSize(int nSize){
  size = nSize;
}


void Vector2d::consoleFill(){

  double value;
  

  for (int indexr = 0; indexr < size; indexr++){
    for(int indexc = 0; indexc < 1; indexc++){
      cout << "Input the ["<< indexr << "]["<< indexc <<"]: "; 
      cin >> value;
      vector[indexr][indexc] = value;
    }
  }

}

void Vector2d::printVector(){
  for (int indexr = 0; indexr < size; indexr++){
    for(int indexc = 0; indexc < 1; indexc++){
      cout << vector[indexr][indexc] << " ";
    }
    cout << endl;
  }
}
