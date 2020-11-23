#include "../header/Animal.h"
#include "../header/Bee.h"

#include <string>
#include <iostream>
using namespace std;

Bee::Bee(){
  this-> type = "";
  this-> movement = "";
  this-> sound = "";
  this-> live = true;
  this-> honey = "";
}

Bee::Bee(string nHoney){
  this-> type = "";
  this-> movement = "";
  this-> sound = "";
  this-> live = true;
  this-> honey = nHoney;
}

Bee::Bee(string nType, bool nLive){
  this-> type = nType;
  this-> movement = "";
  this-> sound = "";
  this-> live = nLive;
  this-> honey = "";
}

Bee::Bee(string nSound, bool nMove){
  this-> type = "";
  this-> movement = nMove;
  this-> sound = nSound;
  this-> live = "";
  this-> honey = "";
}

Bee::~Bee(){}

string Bee::getHoney(void){
  return  this-> honey;
}

void Bee::setHoney(string nHoney){
  this-> honey = nHoney;
}

/**--** inheritance methods **--**/

string Bee::makeSound(void){
  std::cout << "susurra" << std::endl;
}

string Bee::move(void){
  std::cout << "vuela" << std::endl;
}
