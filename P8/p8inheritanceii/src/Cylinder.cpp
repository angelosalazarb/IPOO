#include "../header/Cylinder.h"
#include "../header/GeometricObject.h"

Cylinder::Cylinder(){
  this-> diameter = 0;
  this-> ratio = 0;
  this-> height = 0;
  this-> area = 0;
  this-> volume=0;
  this->space = "";
}

Cylinder::Cylinder(string type, string space):GeometricObject(type, space){
  this-> diameter = 0;
  this-> ratio = 0;
  this-> height = 0;
  this-> area = 0;
  this-> volume=0;
  this->space = space;
}

Cylinder::Cylinder(double nRatio){
  this-> diameter = 0;
  this-> ratio = nRatio;
  this-> height = 0;
  this-> area = 0;
  this-> volume=0;
  this->space = space;
}

Cylinder::Cylinder(double nRatio, double nHeight){
  this-> diameter = 0;
  this-> ratio = nRatio;
  this-> height = nHeight;
  this-> area = 0;
  this-> volume=0;
  this->space = space;
}

Cylinder::~Cylinder(){}

double Cylinder::getRatio(void){
  return this-> ratio;
}

double Cylinder::getDiameter(void){
  return this-> diameter;
}

double Cylinder::getHeight(void){
  return this-> height;
}

void Cylinder::setRatio(double nRatio){
  this-> ratio = nRatio;
}

void Cylinder::setDiameter(double nDiameter){
  this-> diameter = nDiameter;
}

void Cylinder::setHeight(double nHeight){
  this-> height = nHeight;
}

/**--** inheritance methods **--**/

double Cylinder::getArea(void){
  this-> area = 2 * 3.14159 * ratio * (height + ratio);
  return this-> area;
}

double Cylinder::getVolume(void){
  this-> volume = 3.14159 * (ratio*ratio) * height;
  return this-> volume;
}

void Cylinder::setArea(double nArea){
  this-> area = nArea;
}

void Cylinder::setVolume(double nVolume){
  this-> volume = nVolume;
}