#include "Vector.h"
#include <iostream>
#include <iomanip>
using namespace std;

void showSum(Vector vector){
  cout << fixed << setprecision(1) << vector.sum() << endl;
}

void showAvg(Vector vector){
  cout << fixed << setprecision(1) << vector.avg() << endl;
}

void showMin(Vector vector){
 cout << fixed << setprecision(1) << vector.min() << endl;
}

void showMax(Vector vector){
  cout << fixed << setprecision(1) << vector.max() << endl;
}

int main(){
 Vector aVector;

  int size ;
  cin >> size;
  aVector.setSize(size);
  aVector.consoleFill();

  string op = "";
  cin >> op;

  if(op == "sum"){
   showSum(aVector);
  }
  else if(op == "avg"){
    showAvg(aVector);
  }
  else if(op == "min"){
    showMin(aVector);
  }
  else if(op == "max"){
    showMax(aVector);
  }


}