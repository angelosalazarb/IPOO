#include "../header/Rottweiler.h"

Rottweiler::Rottweiler():Dog(){
  this-> type = "";
  this-> isObedient = true;
  this-> isStrong = true;
}

Rottweiler::Rottweiler(string name):Dog(name){
  this-> breed = "Rottweiler";
  this-> bark = "WOOF";
  this-> age = 10;
  this-> type = "";
  this-> isObedient = true;
  this-> isStrong = true;
  }

Rottweiler::~Rottweiler(){}

string Rottweiler::getType(){
  return this->type;
}

void Rottweiler::setType(string nType){
  this->type = nType;
}

bool Rottweiler::getIsStrong(){
  return this->isStrong;
}

void Rottweiler::setIsStrong(bool strong){
  this->type = strong;
}


bool Rottweiler::getIsObedient(){
  return this->isObedient;
}

void Rottweiler::setIsObedient(bool obedient){
  this->type = obedient;
}
