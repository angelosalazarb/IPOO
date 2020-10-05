#include "Matrix.h"
#include <iostream>
using namespace std;

Matrix::Matrix(){
  size = 2;


  for (int indexr = 0; indexr < size; indexr++){
    for(int indexc = 0; indexc < size; indexc++){
      matrix[indexr][indexc] = 0;
    }
  }
}

Matrix::Matrix(int nSize){
  size = nSize;

  for (int indexr = 0; indexr < size; indexr++){
    for(int indexc = 0; indexc < size; indexc++){
      matrix[indexr][indexc] = 0;
    }
  }
}

Matrix::~Matrix(){}

int Matrix::getSize(){
  return size;
}

void Matrix::setSize(int nSize){
  size = nSize;
}


void Matrix::consoleFill(){

  int value;
  

  for (int indexr = 0; indexr < size; indexr++){
    for(int indexc = 0; indexc < size; indexc++){
      cout << "Input the ["<< indexr << "]["<< indexc <<"]: "; 
      cin >> value;
      matrix[indexr][indexc] = value;
    }
  }

}

void Matrix::printMatrix(){
  for (int indexr = 0; indexr < size; indexr++){
    for(int indexc = 0; indexc < size; indexc++){
      cout << matrix[indexr][indexc] << " ";
    }
    cout << endl;
  }
}

void Matrix::determinant(){
  
}