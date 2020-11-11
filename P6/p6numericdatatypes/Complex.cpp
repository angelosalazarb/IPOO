#include "Complex.h"
#include <iostream>

Complex::Complex(){
  this-> real = 0;
  this-> imag = 0;
  this-> op = '+';
}

Complex::Complex(int imag, int real){
  this-> real = real;
  this-> imag = imag;
  this-> op = '+';
}

Complex::Complex(Complex aComplex, Complex bComplex){
  this-> op = '+';
  this->real = aComplex.getReal();
  this->imag = aComplex.getImag();
  int bReal;
  int bImag;
  bReal = bComplex.getReal();
  bImag = aComplex.getImag();
}

Complex::~Complex(){

}

int Complex::getReal(){
  return this->real;
}

int Complex::getImag(){
  return this->imag;
}

void Complex::setReal(int real){
  this->real = real;  
}

void Complex::setImag(int imag){
  this->imag = imag;  
}

void Complex::getComplex(){ 
  std::cout << getReal() << " " << this->op <<  " " << getImag() << "i" << std::endl;
}

Complex& Complex::operator+(int value){
  this->real += value;
  if (imag >= 0){
    this-> op = '+';
  }else{
    this-> op = '-';
  }
  return *this;
}

Complex& Complex::operator+(Complex aComplex){
  this->real += aComplex.getReal();
  this->imag += aComplex.getImag();

  if (imag >= 0){
    this-> op = '+';
  }else{
    this-> op = '-';
  }

  return *this;
}

Complex& Complex::operator-(int value){
  this->real -= value;

  if (imag >= 0){
    this-> op = '+';
  }else{
    this-> op = '-';
  }

  return *this;
}

Complex& Complex::operator-(Complex aComplex){
  this->real -= aComplex.getReal();
  this->imag -= aComplex.getImag();
  
  if (imag >= 0){
    this-> op = '+';
  }else{
    this-> op = '-';
  }

  return *this;
}

Complex& Complex::operator*(int value){
  this->real *= value;

  if (imag >= 0){
    this-> op = '+';
  }else{
    this-> op = '-';
  }

  return *this;
}

Complex& Complex::operator*(Complex aComplex){
  this->real *= aComplex.getReal();
  this->imag *= aComplex.getImag();

  if (imag >= 0){
    this-> op = '+';
  }else{
    this-> op = '-';
  }

  return *this;
}
