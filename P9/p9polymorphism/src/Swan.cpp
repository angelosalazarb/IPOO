#include "../header/Animal.h"
#include "../header/Swan.h"

#include <string>
#include <iostream>
using namespace std;

Swan::Swan(){
  this-> type = "";
  this-> movement = "";
  this-> sound = "";
  this-> live = true;
  this-> size = "";
}

Swan::Swan(string nBreed){
  this-> type = "";
  this-> movement = "";
  this-> sound = "";
  this-> live = true;
  this-> size = nBreed;
}

Swan::Swan(string nType, bool nLive){
  this-> type = nType;
  this-> movement = "";
  this-> sound = "";
  this-> live = nLive;
  this-> size = "";
}

Swan::Swan(string nSound, string nMove){
  this-> type = "";
  this-> movement = nMove;
  this-> sound = nSound;
  this-> live = "";
  this-> size = "";
}

Swan::~Swan(){}

string Swan::getSize(void){
  return  this-> size;
}

void Swan::setSize(string nSize){
  this-> size = nSize;
}

/**--** inheritance methods **--**/

string Swan::makeSound(void){
  this->sound = "vozna";
  return this->sound;
}

string Swan::move(void){
  this->movement = "vuela";
  return this-> movement;
}
