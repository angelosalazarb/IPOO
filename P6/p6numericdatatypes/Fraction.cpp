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

Fraction::Fraction(const Fraction& aFraction){
  this-> numerator = aFraction.numerator;
  this-> denominator = aFraction.denominator;
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

Fraction& Fraction::operator+(int value){
  int tempNumerator;
  tempNumerator = numerator  + (this-> denominator * value);

  this->numerator = tempNumerator;
  this->denominator = denominator;

  return *this;
}

Fraction Fraction::operator+(const Fraction& aFraction){
 Fraction bFraction;

 bFraction.numerator = (aFraction.denominator * this-> numerator) + (aFraction.numerator * this-> denominator);
 bFraction.denominator = aFraction.denominator * this-> denominator;

 return bFraction; 
}

Fraction& Fraction::operator-(int value){
  int tempNumerator;
  tempNumerator = numerator  - (this-> denominator * value);

  this->numerator = tempNumerator;
  this->denominator = denominator;

  return *this;
}

Fraction Fraction::operator-(const Fraction& aFraction){
 Fraction bFraction;

 bFraction.numerator = (aFraction.denominator * this-> numerator) - (aFraction.numerator * this-> denominator);
 bFraction.denominator = aFraction.denominator * this-> denominator;

 return bFraction; 
}

Fraction Fraction::operator/(const Fraction& aFraction){
 Fraction bFraction;

 bFraction.numerator = (aFraction.denominator * this-> numerator);
 bFraction.denominator = (aFraction.numerator * this-> denominator);

 return bFraction; 
}

Fraction& Fraction::operator*(int value){

  this->numerator *= value;
  this->denominator = denominator;

  return *this;

}

Fraction Fraction::operator*(const Fraction& aFraction){
 Fraction bFraction;

 bFraction.numerator = (aFraction.numerator * this-> numerator);
 bFraction.denominator = (aFraction.denominator * this-> denominator);

 return bFraction; 
}