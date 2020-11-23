#include "../header/Animal.h"
#include "../header/Donkey.h"

#include <string>
#include <iostream>
using namespace std;

Donkey::Donkey(){
  this-> type = "";
  this-> movement = "";
  this-> sound = "";
  this-> live = true;
  this-> age = 0;
}

Donkey::Donkey(int nAge){
  this-> type = "";
  this-> movement = "";
  this-> sound = "";
  this-> live = true;
  this-> age = nAge;
}

Donkey::Donkey(string nType, bool nLive){
  this-> type = nType;
  this-> movement = "";
  this-> sound = "";
  this-> live = nLive;
  this-> age = 0;
}

Donkey::Donkey(string nSound, string nMove){
  this-> type = "";
  this-> movement = nMove;
  this-> sound = nSound;
  this-> live = "";
  this-> age = 0;
}

Donkey::~Donkey(){}

int Donkey::getAge(void){
  return  this-> age;
}

void Donkey::setAge(int nAge){
  this-> age = nAge;
}

/**--** inheritance methods **--**/

string Donkey::makeSound(void){
  this->sound = "rebuzna";
  return this-> sound;
}

string Donkey::move(void){
  this->movement = "camina";
  return this-> movement;
}
