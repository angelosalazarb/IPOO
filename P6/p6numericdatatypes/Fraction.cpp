#include "Fraction.h"
#include <iostream>

Fraction::Fraction(){
  this-> numerator = 0;  
  this-> denominator = 1;
}


Fraction::Fraction(int numerator, int denominator){
  this-> numerator = numerator;
  this-> denominator = denominator;
}


Fraction::Fraction(Fraction& aFraction){
  this-> numerator = aFraction.getNumerator();
  this-> denominator = aFraction.getDenominator();
}

Fraction::~Fraction(){}

int Fraction::getNumerator(){
  return this-> numerator;
}

int Fraction::getDenominator(){
  return this-> denominator;
}

void Fraction::setNumerator(int numerator){
  this->numerator = numerator;
}

void Fraction::setDenominator(int denominator){
  this->denominator = denominator;
}

void Fraction::getFraction(){
  std::cout << getNumerator() << " / " << getDenominator() << std::endl;
}