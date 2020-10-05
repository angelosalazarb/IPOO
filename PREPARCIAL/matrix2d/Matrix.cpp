#include "Matrix.h"
#include <iostream>
using namespace std;

Matrix::Matrix(){
  size = 2;


  for (int indexr = 0; indexr < size; indexr++){rows[indexr] = 0;}
  for (int indexc = 0; indexc < size; indexc++){col[indexc] = 0;}
}

Matrix::Matrix(int nSize){
  size = nSize;
;

  for (int indexr = 0; indexr < size; indexr++){rows[indexr] = 0;}
  for (int indexc = 0; indexc < size; indexc++){col[indexc] = 0;}
}

Matrix::~Matrix(){}

int Matrix::getSize(){
  return size;
}

void Matrix::setSize(int nSize){
  size = nSize;
}


void Matrix::consoleFill(){

  int valuer;
  int valuec;
  

  for (int indexr = 0; indexr < getSize(); indexr++){
    cin >> valuer;
    rows[indexr] = valuer;
  }

  for (int indexc = 0; indexc < getSize(); indexc++){
    cin >> valuec;
    rows[indexc] = valuec;
  }
  
}

