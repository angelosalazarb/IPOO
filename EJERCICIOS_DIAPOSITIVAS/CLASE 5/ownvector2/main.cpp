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
	int look;
	cin>>look;

	aVec.lookUp(look);
}