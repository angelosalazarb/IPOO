#include "Pyramid.h"
#include <iostream>
using namespace std;

Pyramid::Pyramid(){
  side = 0;
  height = 0;
  volume = 0;
}

Pyramid::Pyramid(double nSide, double nHeight){
  side = nSide;
  height = nHeight;
  volume = 0;
}

Pyramid::~Pyramid(){}

double Pyramid::getHeight(){
  return height;
}

double Pyramid::getSide(){
  return side;  
}

void Pyramid::setHeight(double nHeight){
  height = nHeight;
}

void Pyramid::setSide(double nSide){
  side = nSide;
}

void Pyramid::getVolume(){
  volume = (side*side*height)/3;
  cout << volume;
}
