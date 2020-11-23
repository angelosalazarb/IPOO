#include "../header/Cone.h"
#include "../header/GeometricObject.h"
#include <math.h>
Cone::Cone(){
  this-> diameter = 0;
  this-> ratio = 0;
  this-> height = 0;
  this-> area = 0;
  this-> volume=0;
  this->space = "";
}

Cone::Cone(string type, string space):GeometricObject(type, space){
  this-> diameter = 0;
  this-> ratio = 0;
  this-> height = 0;
  this-> area = 0;
  this-> volume=0;
  this->space = space;
}

Cone::Cone(double nRatio){
  this-> diameter = 0;
  this-> ratio = nRatio;
  this-> height = 0;
  this-> area = 0;
  this-> volume=0;
  this->space = space;
}

Cone::Cone(double nRatio, double nHeight){
  this-> diameter = 0;
  this-> ratio = nRatio;
  this-> height = nHeight;
  this-> area = 0;
  this-> volume=0;
  this->space = space;
}

Cone::~Cone(){}

double Cone::getRatio(void){
  return this-> ratio;
}

double Cone::getDiameter(void){
  return this-> diameter;
}

double Cone::getHeight(void){
  return this-> height;
}

void Cone::setRatio(double nRatio){
  this-> ratio = nRatio;
}

void Cone::setDiameter(double nDiameter){
  this-> diameter = nDiameter;
}

void Cone::setHeight(double nHeight){
  this-> height = nHeight;
}

/**--** inheritance methods **--**/

double Cone::getArea(void){
  double l;
  l = sqrt((height * height) + (ratio*ratio));
  this-> area = (3.14159 * (ratio*ratio)) + (3.14159 * ratio * l);
  return this-> area;
}

double Cone::getVolume(void){
  this-> volume = (3.14159 * (ratio*ratio) * height)/3;
  return this-> volume;
}

void Cone::setArea(double nArea){
  this-> area = nArea;
}

void Cone::setVolume(double nVolume){
  this-> volume = nVolume;
}