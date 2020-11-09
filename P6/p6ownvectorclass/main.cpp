#include <iostream>
#include "Vector.h"
using namespace std;

int main() {
	Vector aVec;
	int size;
	cin >> size;
	aVec.setSize(size);
	cout << "----" << endl;
	aVec.consoleFill();
	cout << "----" << endl;
	aVec.printVector();
	aVec.sort();
	cout << "----" << endl;
	aVec.printVector();
}