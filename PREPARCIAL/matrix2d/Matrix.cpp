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

Matrix::Matrix(double aMat[2][2]){
  size = 2;


  for (int indexr = 0; indexr < size; indexr++){
    for(int indexc = 0; indexc < size; indexc++){
      matrix[indexr][indexc] = aMat[indexr][indexc];
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

  double value;
  

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

double Matrix::determinant2x2(){
  double firstTerm;
  double secondTerm;
  double result;

  firstTerm = matrix[0][0]*matrix[1][1];
  secondTerm = matrix[0][1]*matrix[1][0];
  result = firstTerm - secondTerm;

  return result;
}

double Matrix::getPosition(int indexr, int indexc){
  double value;
  value =  matrix[indexr][indexc];
  return value;
}

double Matrix::determinantByMat(Matrix aMat){
  double firstTerm;
  double secondTerm;
  double result;

  firstTerm = aMat.getPosition(0,0)*aMat.getPosition(1,1);
  secondTerm = aMat.getPosition(0,1)*aMat.getPosition(1,0);
  result = firstTerm - secondTerm;

  return result;
}