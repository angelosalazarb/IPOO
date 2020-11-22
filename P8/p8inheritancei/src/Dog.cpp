#include "../header/Dog.h"

Dog::Dog(){
  this-> breed = "";
  this-> name = "";
  this-> bark = "";
  this-> size = "";
  this-> age = 0;
}


Dog::Dog(string name){
  this-> name = name;
}

Dog::Dog(string name, string breed){
  this-> breed = breed;
  this-> name = name;
}

Dog::Dog(string breed, string name, string bark, string size, int age){
  this-> breed = breed;
  this-> name = name;
  this-> bark = bark;
  this-> size = size;
  this-> age = age;
}

Dog::Dog(Dog& copy):Dog(){
  this-> breed = copy.getBreed();
  this-> name = copy.getName();
  this-> age = copy.getAge();

}

Dog::Dog(Dog* copy):Dog(){
  this-> breed = copy->getBreed();
  this-> name = copy->getName();
  this-> age = copy->getAge();
  
}

Dog::~Dog(){}

string Dog::getName(){
  return  this->name;
}

string Dog::getBreed(){
  return  this->breed;
}

string Dog::getSize(){
  return  this->size;
}

string Dog::getBark(){
  return  this->bark;
}

int Dog::getAge(){
  return  this->age;
}

void Dog::setName(string nName){
  this-> name = nName;
}

void Dog::setBreed(string nBreed){
  this-> breed = nBreed;
}

void Dog::setBark(string nBark){
  this-> bark = nBark;
}

void Dog::setSize(string nSize){
  this-> size = nSize;
}

void Dog::setAge(int nAge){
  this-> age = nAge;
}
