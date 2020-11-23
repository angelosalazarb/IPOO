#include "../header/Animal.h"

Animal::Animal(){
  this-> movement = "";
  this-> sound = "";
  this-> type = "";
  this-> live = true;
}

Animal::Animal(string nType){
  this-> movement = "";
  this-> sound = "";
  this-> type = nType;
  this-> live = true;
}

Animal::Animal(string nType, bool live){
  this-> movement = "";
  this-> sound = "";
  this-> type = nType;
  this-> live = live;
}

Animal::~Animal(){
}

string Animal::getType(void){
  return this-> type;
}

void Animal::setType(string nType){
  this-> type = nType;
}

bool Animal::getLive(void){
  return this-> live;
}

void Animal::setLive(bool nLive){
  this-> live = nLive;
}

string Animal::makeSound(void){}
string Animal::move(void){}

