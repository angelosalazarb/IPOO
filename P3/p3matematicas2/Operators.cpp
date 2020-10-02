#include "Operators.h"

Operators::Operators(){
  a = 0;
  b = 0;
  c = 0;

  result = 0;
}
Operators::Operators(double newA, double newB, int newC){
  a = newA;
  b = newB;
  c= newC;

  result = 0;
}

Operators::~Operators(){}

double Operators::getA(){
  return a;
}

double Operators::getB(){
  return b;
}


int Operators::getC(){
  return c;
}

void Operators::setA(double newA){
  a = newA;
}

void Operators::setB(double newB){
  b = newB;
}

void Operators::setC(int newC){
  c = newC;
}

double Operators::getResult(){
  if(getC() == 1){
    return getA() + getB();
  }

  else if(getC() == 2){
    return getA() - getB();
  }

  else if(getC() == 3){
    return getA() * getB();
  }

  else if(getC() == 4){
    return getA() / getB();
  }
  return 0;
}

double Operators::getResultDouble(){
  if(getC() == 1){
    result = getA() + getB();
    return result;
  }

  else if(getC() == 2){
    result = getA() - getB();
    return result;
  }

  else if(getC() == 3){
    result = getA() * getB();
    return result;
  }

  else if(getC() == 4){
    result = getA() / getB();
    return result;
  }
  return 0;
}

double Operators::getResultTernario(){
  result = (c == 1) ? getA() + getB() : result = (c == 2) ? getA() - getB() : result = ( c == 3) ? getA() * getB() : result = (c == 4) ? getA() / getB() : 00;

  return result;
}

