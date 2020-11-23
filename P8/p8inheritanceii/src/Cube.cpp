#include "../header/Cube.h"
#include "../header/GeometricObject.h"

Cube::Cube(){
  this-> lateral = 0;
  this-> area = 0;
  this-> volume=0;
  this->space = "";
}

Cube::Cube(string type, string space):GeometricObject(type, space){
  this-> lateral = 0;
  this-> area = 0;
  this-> volume=0;
  this->space = space;
}

Cube::Cube(double nlateral){
  this-> lateral = nlateral;
  this-> area = 0;
  this-> volume=0;
  this->space = space;
}

Cube::~Cube(){}

double Cube::getLateral(void){
  return this-> lateral;
}

void Cube::setLateral(double nlateral){
  this-> lateral = nlateral;
}

/**--** inheritance methods **--**/

double Cube::getArea(void){
  this-> area = 6 * (lateral * lateral);
  return this-> area;
} 

double Cube::getVolume(void){
  this-> volume = (lateral*lateral*lateral);
  return this-> volume;
}

void Cube::setArea(double nArea){
  this-> area = nArea;
}

void Cube::setVolume(double nVolume){
  this-> volume = nVolume;
}