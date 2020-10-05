#include "Matrix.h"
#include <iostream>
using namespace std;

int main(){
  Matrix aMatrix;

  aMatrix.consoleFill();
  aMatrix.printMatrix();
  cout << aMatrix.determinant2x2() << endl;

}