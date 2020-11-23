#include "../header/Pyramid.h"
#include "../header/GeometricObject.h"

Pyramid::Pyramid(){
  this-> lateral = 0;
  this-> width = 0;
  this-> height = 0;
  this-> area = 0;
  this-> volume=0;
  this->space = "";
}

Pyramid::Pyramid(string type, string space):GeometricObject(type, space){
  this-> lateral = 0;
  this-> width = 0;
  this-> height = 0;
  this-> area = 0;
  this-> volume=0;
  this->space = space;
}

Pyramid::Pyramid(double nLateral){
  this-> lateral = nLateral;
  this-> width = 0;
  this-> height = 0;
  this-> area = 0;
  this-> volume=0;
  this->space = space;
}

Pyramid::Pyramid(double nLateral, double nHeight, double nWidth){
  this-> lateral = nLateral;
  this-> width = nWidth;
  this-> height = nHeight;
  this-> area = 0;
  this-> volume=0;
  this->space = space;
}

Pyramid::~Pyramid(){}

double Pyramid::getWidth(void){
  return this-> width;
}

double Pyramid::getLateral(void){
  return this-> lateral;
}

double Pyramid::getHeight(void){
  return this-> height;
}

void Pyramid::setWidth(double nWidth){
  this-> width = nWidth;
}

void Pyramid::setLateral(double nLateral){
  this-> lateral = nLateral;
}

void Pyramid::setHeight(double nHeight){
  this-> height = nHeight;
}

/**--** inheritance methods **--**/

double Pyramid::getArea(void){
  double base;
  base = width * lateral;
  this-> area = (base*base) + 2*(base+height);
  return this-> area;
}

double Pyramid::getVolume(void){
  double base;
  base = width * lateral;
  this-> volume = (base * height)/3;
  return this-> volume;
}

void Pyramid::setArea(double nArea){
  this-> area = nArea;
}

void Pyramid::setVolume(double nVolume){
  this-> volume = nVolume;
}