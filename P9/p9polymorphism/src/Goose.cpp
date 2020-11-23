#include "../header/Animal.h"
#include "../header/Goose.h"

#include <string>
#include <iostream>
using namespace std;

Goose::Goose(){
  this-> type = "";
  this-> movement = "";
  this-> sound = "";
  this-> live = true;
  this-> color = "";
}

Goose::Goose(string nBreed){
  this-> type = "";
  this-> movement = "";
  this-> sound = "";
  this-> live = true;
  this-> color = nBreed;
}

Goose::Goose(string nType, bool nLive){
  this-> type = nType;
  this-> movement = "";
  this-> sound = "";
  this-> live = nLive;
  this-> color = "";
}

Goose::Goose(string nSound, bool nMove){
  this-> type = "";
  this-> movement = nMove;
  this-> sound = nSound;
  this-> live = "";
  this-> color = "";
}

Goose::~Goose(){}

string Goose::getColor(void){
  return  this-> color;
}

void Goose::setColor(string nColor){
  this-> color = nColor;
}

/**--** inheritance methods **--**/

string Goose::makeSound(void){
  std::cout << "grazna" << std::endl;
}

string Goose::move(void){
  std::cout << "vuela" << std::endl;
}
