#include <iostream>
#include "Vector.h"
using namespace std;

int main() {
	Vector aVec;
	int size;
	cin >> size;
	aVec.setSize(size);
	aVec.consoleFill();
	aVec.printVector();	
}