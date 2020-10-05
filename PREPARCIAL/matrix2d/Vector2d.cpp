#include "Vector2d.h"  
#include "Matrix.h"
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
      cout << "Input the ["<< indexr << "]["<< "1" <<"]: "; 
      cin >> value;
      vector[indexr][1] = value;
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


double Vector2d::getPosition(int pos){
  return vector[pos][1];
}

void Vector2d::solve(Vector2d aVec, Matrix aMat){
  double auxmatrix[2][2];
  double auxmatrix2[2][2];
  double detx1;
  double detx2;
  double det;

  double x1;
  double x2;

  auxmatrix[0][0] = aVec.getPosition(0);
  auxmatrix[0][1] = aMat.getPosition(0,1);
  auxmatrix[1][0] = aVec.getPosition(1);
  auxmatrix[1][1] = aMat.getPosition(1,1);

  auxmatrix2[0][0] = aMat.getPosition(0,0);
  auxmatrix2[0][1] = aVec.getPosition(0);
  auxmatrix2[1][0] = aMat.getPosition(1,0);
  auxmatrix2[1][1] = aVec.getPosition(1);

  Matrix auxMat(auxmatrix);
  Matrix auxMat2(auxmatrix2);

  detx1 = auxMat.determinant2x2();
  detx2 = auxMat2.determinant2x2();
  cout <<"Determinante x1: "<<detx1 << endl;
  cout <<"Determinante x2: "<<detx2 <<endl;
  det = aMat.determinant2x2();
  cout << "Matrix [[Y1, Y2],[B, D]]"<< endl;
  auxMat.printMatrix();
  cout << "Matrix [[A, C],[Y1, Y2]]"<< endl;
  auxMat2.printMatrix();

  x1 = detx1/det;
  x2 = detx2/det;

  if(det == 0){
    cout << "Division sobre cero, no es posible." << endl;
  }

  cout << "x1: " << x1 << " y " << "x2: " << x2;
}
