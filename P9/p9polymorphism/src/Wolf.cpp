#include "../header/Animal.h"
#include "../header/Wolf.h"

#include <string>
#include <iostream>
using namespace std;

Wolf::Wolf(){
  this-> type = "";
  this-> movement = "";
  this-> sound = "";
  this-> live = true;
  this-> breed = "";
}

Wolf::Wolf(string nBreed){
  this-> type = "";
  this-> movement = "";
  this-> sound = "";
  this-> live = true;
  this-> breed = nBreed;
}

Wolf::Wolf(string nType, bool nLive){
  this-> type = nType;
  this-> movement = "";
  this-> sound = "";
  this-> live = nLive;
  this-> breed = "";
}

Wolf::Wolf(string nSound, bool nMove){
  this-> type = "";
  this-> movement = nMove;
  this-> sound = nSound;
  this-> live = "";
  this-> breed = "";
}

Wolf::~Wolf(){}

string Wolf::getBreed(void){
  return  this-> breed;
}

void Wolf::setBreed(string nBreed){
  this-> breed = nBreed;
}

/**--** inheritance methods **--**/

string Wolf::makeSound(void){
  std::cout << "aúlla" << std::endl;
}

string Wolf::move(void){
  std::cout << "caminar" << std::endl;
}
