#include "../header/Animal.h"
#include "../header/Hen.h"

#include <string>
#include <iostream>
using namespace std;

Hen::Hen(){
  this-> type = "";
  this-> movement = "";
  this-> sound = "";
  this-> live = true;
  this-> breed = "";
}

Hen::Hen(string nBreed){
  this-> type = "";
  this-> movement = "";
  this-> sound = "";
  this-> live = true;
  this-> breed = nBreed;
}

Hen::Hen(string nType, bool nLive){
  this-> type = nType;
  this-> movement = "";
  this-> sound = "";
  this-> live = nLive;
  this-> breed = "";
}

Hen::Hen(string nSound, bool nMove){
  this-> type = "";
  this-> movement = nMove;
  this-> sound = nSound;
  this-> live = "";
  this-> breed = "";
}

Hen::~Hen(){}

string Hen::getBreed(void){
  return  this-> breed;
}

void Hen::setBreed(string nBreed){
  this-> breed = nBreed;
}

/**--** inheritance methods **--**/

string Hen::makeSound(void){
  std::cout << "cacarea" << std::endl;
}

string Hen::move(void){
  std::cout << "caminar" << std::endl;
}
