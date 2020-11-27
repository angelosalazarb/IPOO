#include "../header/Personajes.h"

Personajes::Personajes(){
  this->name = "";
  this->life = 0;
  this->damage = 0;
  this->live  = true;
}

Personajes::Personajes(string nName){
  this->name = nName;
  this->life = 0;
  this->damage = 0;
  this->live  = true;
}

Personajes::Personajes(int nLife, int nDamage){
  this->name = "";
  this->life = nLife;
  this->damage = nDamage;
  this->live  = true;
}

Personajes::Personajes(string nName, int nLife, int nDamage){
  this->name = nName;
  this->life = nLife;
  this->damage = nDamage;
  this->live  = true;
}

string Personajes::getName(void){
  return this-> name;
}

void Personajes::setName(string nName){
  this-> name = nName;
}

int Personajes::getLife(void){
  return this-> life;
}

void Personajes::setLife(int nLife){
  this-> life = nLife;
}

int Personajes::getDamage(void){
  return this-> damage;
}

void Personajes::setDamage(int nDamage){
  this-> damage = nDamage;
}

void Personajes::attack(Personajes& aPlayer){
  int attack;
  attack = getLife() - getDamage();
  
  this-> life = attack;

}



