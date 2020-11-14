#include "Complex.h"
#include <iostream>

Complex::Complex(){
  this-> real = 0;
  this-> imag = 0;
  this-> op = '+';
}

Complex::Complex(int real, int imag){
  this-> real = real;
  this-> imag = imag;
  this-> op = '+';
}
/*
Complex::Complex(Complex aComplex, Complex bComplex){
  this-> op = '+';
  this->real = aComplex.getReal();
  this->imag = aComplex.getImag();
  int bReal;
  int bImag;
  bReal = bComplex.getReal();
  bImag = aComplex.getImag();
}
*/
Complex::~Complex(){

}

int Complex::getReal(){
  return this->real;
}

int Complex::getImag(){
  return this->imag;
}

void Complex::setReal(int nreal){
  real = nreal;  
}

void Complex::setImag(int nimag){
  imag = nimag;  
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

Complex Complex::operator+(const Complex& aComplex){
  Complex  bComplex;
  bComplex.real += this-> real + aComplex.real;
  bComplex.imag += this-> imag + aComplex.imag;

  if (imag >= 0){
    this-> op = '+';
  }else{
    this-> op = '-';
  }

  return bComplex;
}

Complex Complex::operator-(int value){
  Complex aComplex;
  aComplex.real = value - real;
  aComplex.imag = imag;

  if (imag >= 0){
    this-> op = '+';
  }else{
    this-> op = '-';
  }

  return aComplex;
}

Complex& Complex::operator-(Complex& aComplex){
  this->real -= aComplex.getReal(); 
  this->imag -= aComplex.getImag();
  
  if (imag >= 0){
    this-> op = '+';
  }else{
    this-> op = '-';
  }

  return *this;
}

Complex Complex::operator*(int value){
  this->real *= value;

  if (imag >= 0){
    this-> op = '+';
  }else{
    this-> op = '-';
  }

  return *this;
}

Complex Complex::operator*(Complex aComplex){
  int tempImag;
  int tempReal;

  tempReal = ((this-> real * aComplex.getReal()) - (this->imag * aComplex.getImag()));
  tempImag = ((this->real * aComplex.getImag()) + (this->imag * aComplex.getReal()));

  this->real = tempReal;
  this->imag = tempImag;
  
  if (imag >= 0){
    this-> op = '+';
  }else{
    this-> op = '-';
  }

  return *this;
}
