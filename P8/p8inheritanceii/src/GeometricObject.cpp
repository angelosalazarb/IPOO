#include "../header/GeometricObject.h"

#include <string>
using namespace std;

GeometricObject::GeometricObject(){
  this-> type = "";
  this-> space = "";
  this-> area = 0;
  this-> volume = 0;
}

GeometricObject::GeometricObject(string nType){
  this-> type = nType;
  this-> space = "";
  this-> area = 0;
  this-> volume = 0;
}

GeometricObject::GeometricObject(string nType, string nSpace){
  this-> type = nType;
  this-> space = nSpace;
  this-> area = 0;
  this-> volume = 0;
}

GeometricObject::GeometricObject(string nType, string nSpace, double nArea){
  this-> type = nType;
  this-> space = nSpace;
  this-> area = nArea;
  this-> volume = 0;
}

GeometricObject::GeometricObject(string nType, string nSpace, double nArea, double nVolume){
  this-> type = nType;
  this-> space = nSpace;
  this-> area = nArea;
  this-> volume = nVolume;
}

GeometricObject::~GeometricObject(){}

string GeometricObject::getType(void){
  return this-> type;
}

void GeometricObject::setType(string nType){
  this-> type = nType;
}


string GeometricObject::getSpace(void){
  return this-> space;
}

void GeometricObject::setSpace(string nSpace){
  this->space = nSpace;
}

double GeometricObject::getArea(void){ return area;}
void GeometricObject::setArea(double){}

double GeometricObject::getVolume(void){return volume;}
void GeometricObject::setVolume(double){}

double GeometricObject::areaCalculate(void){ return 0.0; } 
double GeometricObject::volumeCalculate(void){ return 0.0; }