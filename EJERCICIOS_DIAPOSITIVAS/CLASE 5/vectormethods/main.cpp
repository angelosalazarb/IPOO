#include <iostream>
#include "Vector.h"
using namespace std;

int main() {
	Vector aVec;

	int size;
	cin >> size;
	aVec.setSize(size);
	aVec.consoleFill();
	cout<<"-----"<<endl;
	aVec.sort();
	cout << endl;
  cout<<"-----"<<endl;
	aVec.append(6);
  cout << endl;
  cout<<"-----"<<endl;
  aVec.printVector();
  cout << endl;
  cout << aVec.getSize();
  cout<<"-----"<<endl;
  aVec.insert(3, 100);
  cout << endl;
  cout<<"-----"<<endl;
  aVec.printVector();
  cout << endl;
}