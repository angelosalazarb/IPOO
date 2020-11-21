#include "../header/Functions.h"
#include <iostream>

Functions::Functions(){
  this-> first = 0;
  this-> second = 0;
  this-> third = 0;
  this-> result = 0;
}

Functions::Functions(double first, double second, double third){
  this-> first = first;
  this-> second = second;
  this-> third = third;

}

Functions::~Functions(){

}

double Functions::getFirst(){
  return this-> first;
}

double Functions::getSecond(){
  return this-> second;
}

double Functions::getThird(){
  return this-> third;
}

void Functions::setFirst(double first){
  this-> first = first;
}

void Functions::setSecond(double second){
  this-> second = second;
}

void Functions::setThird(double third){
  this-> third = third;
}

void Functions::add(double& first, double second, double third){
  this-> first = this-> second + this->third; 
}

void Functions::sub(double& first, double second, double third){
  this-> first = this->second - this->third; 
}

double Functions::valFunction(double rfirst, double rsecond){
  this -> third = second;
  this -> second = first;

  rfirst = 8;
  rsecond = 10;
  
  return rfirst + rsecond;

}

double Functions::refFunction(double& rfirst, double& rsecond){

  rfirst = 10;
  rsecond = 8;

  return rsecond + rfirst;
}

double Functions::mixFunction(double afirst, double& asecond){
  afirst = 8;
  asecond = 10;
  
  return afirst + asecond;

}

