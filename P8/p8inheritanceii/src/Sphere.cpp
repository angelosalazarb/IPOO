#include "../header/Sphere.h"
#include "../header/GeometricObject.h"

Sphere::Sphere(){
  this-> diameter = 0;
  this-> ratio = 0;
  this-> area = 0;
  this-> volume=0;
  this->space = "";
}

Sphere::Sphere(string type, string space):GeometricObject(type, space){
  this-> diameter = 0;
  this-> ratio = 0;
  this-> area = 0;
  this-> volume=0;
  this->space = space;
}

Sphere::Sphere(double nRatio){
  this-> diameter = 0;
  this-> ratio = nRatio;
  this-> area = 0;
  this-> volume=0;
  this->space = space;
}

Sphere::Sphere(double nRatio, double nDiameter){
  this-> diameter = nDiameter;
  this-> ratio = nRatio;
  this-> area = 0;
  this-> volume=0;
  this->space = space;
}

Sphere::~Sphere(){}

double Sphere::getRatio(void){
  return this-> ratio;
}

double Sphere::getDiameter(void){
  return this-> diameter;
}

void Sphere::setRatio(double nRatio){
  this-> ratio = nRatio;
}

void Sphere::setDiameter(double nDiameter){
  this-> diameter = nDiameter;
}

/**--** inheritance methods **--**/

double Sphere::getArea(void){
  this-> area = 4 * 3.14159 * (ratio * ratio);
  return this-> area;
}

double Sphere::getVolume(void){
  this-> volume = (4 * (3.14159 * (ratio*ratio*ratio)))/3;
  return this-> volume;
}

void Sphere::setArea(double nArea){
  this-> area = nArea;
}

void Sphere::setVolume(double nVolume){
  this-> volume = nVolume;
}