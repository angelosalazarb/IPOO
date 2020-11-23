#include "../header/Animal.h"
#include "../header/Cat.h"

#include <string>
#include <iostream>
using namespace std;

Cat::Cat(){
  this-> type = "";
  this-> movement = "";
  this-> sound = "";
  this-> live = true;
  this-> breed = "";
}

Cat::Cat(string nBreed){
  this-> type = "";
  this-> movement = "";
  this-> sound = "";
  this-> live = true;
  this-> breed = nBreed;
}

Cat::Cat(string nType, bool nLive){
  this-> type = nType;
  this-> movement = "";
  this-> sound = "";
  this-> live = nLive;
  this-> breed = "";
}

Cat::Cat(string nSound, string nMove){
  this-> type = "";
  this-> movement = nMove;
  this-> sound = nSound;
  this-> live = "";
  this-> breed = "";
}

Cat::~Cat(){}

string Cat::getBreed(void){
  return  this-> breed;
}

void Cat::setBreed(string nBreed){
  this-> breed = nBreed;
}

/**--** inheritance methods **--**/

string Cat::makeSound(void){
  this->movement = "maúlla";
  return this-> movement;
}

string Cat::move(void){
  this->movement = "camina";
  return this-> movement;
}
