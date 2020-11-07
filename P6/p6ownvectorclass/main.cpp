#include <iostream>
#include "Vector.h"
using namespace std;

int main() {
	Vector aVec;
	/**
	int size;
	cin >> size;
	aVec.setSize(size);
	cout << "----" << endl;
	aVec.consoleFill();
	cout << "----" << endl;
	aVec.printVector();	
	cout << "----" << endl;
	cout << aVec.getSize() << endl;
	cout << "----" << endl;
	*/
	aVec.append(5);
	aVec.append(4);
	aVec.append(3);
	aVec.append(2);
	aVec.append(1);
	aVec.append(0);

	cout << "----" << endl;
	aVec.printVector();
	cout << "----" << endl;

	cout << aVec.getSize() << endl;
	cout << aVec.getValue(4) << endl;
	cout << "----" << endl;
	aVec.sort();
	cout << "----" << endl;



}