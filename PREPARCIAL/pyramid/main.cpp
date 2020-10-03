#include "Pyramid.h"
#include <iostream>
using namespace std;

int main(){
  Pyramid aPyramid;

  double side;
  double height;

  cin >> side;
  cin >> height;

  aPyramid.setSide(side);
  aPyramid.setHeight(height);

  aPyramid.getVolume();

}