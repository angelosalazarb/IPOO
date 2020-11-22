#include "../header/Chihuahua.h"

Chihuahua::Chihuahua():Dog(){
  this-> type = "";
}

Chihuahua::Chihuahua(string name):Dog(name){
  this-> breed = "Chihuahua";
  this-> bark = "woof";
  this-> age = 10;
  this-> type = "Apple head";
}

Chihuahua::~Chihuahua(){}

string Chihuahua::getType(){
  return this->type;
}

void Chihuahua::setType(string nType){
  this->type = nType;
}