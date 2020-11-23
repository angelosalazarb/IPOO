#include "../header/Animal.h"
#include "../header/Dog.h"

#include <string>
#include <iostream>
using namespace std;

Dog::Dog(){
  this-> type = "";
  this-> movement = "";
  this-> sound = "";
  this-> live = true;
  this-> breed = "";
}

Dog::Dog(string nBreed){
  this-> type = "";
  this-> movement = "";
  this-> sound = "";
  this-> live = true;
  this-> breed = nBreed;
}

Dog::Dog(string nType, bool nLive){
  this-> type = nType;
  this-> movement = "";
  this-> sound = "";
  this-> live = nLive;
  this-> breed = "";
}

Dog::Dog(string nSound, string nMove){
  this-> type = "";
  this-> movement = nMove;
  this-> sound = nSound;
  this-> live = "";
  this-> breed = "";
}

Dog::~Dog(){}

string Dog::getBreed(void){
  return  this-> breed;
}

void Dog::setBreed(string nBreed){
  this-> breed = nBreed;
}

/**--** inheritance methods **--**/

string Dog::makeSound(void){
 this->sound = "ladra";
  return this-> sound;
}

string Dog::move(void){
  this->movement = "caminar";
  return this-> movement;
}
