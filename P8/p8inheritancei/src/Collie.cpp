#include "../header/Collie.h"

Collie::Collie():Dog(){
  this-> type = "";
  this-> isLoyalty = true;
}

Collie::Collie(string name):Dog(name){
  this-> breed = "Collie";
  this-> bark = "Woof";
  this-> age = 10;
  this-> type = "";
  this-> isLoyalty = true;
}

Collie::~Collie(){}

string Collie::getType(){
  return this->type;
}

void Collie::setType(string nType){
  this->type = nType;
}

bool Collie::getIsLoyal(){
  return this->isLoyalty;
}

void Collie::setIsLoyal(bool loyalty){
  this->isLoyalty = loyalty;
}