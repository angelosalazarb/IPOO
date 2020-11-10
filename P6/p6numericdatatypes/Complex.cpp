#include "Complex.h"
#include <iostream>

Complex::Complex(){
  this-> real = 0;
  this-> imag = 0;
}

Complex::Complex(int imag, int real){
  this-> real = real;
  this-> imag = imag;
}

Complex::Complex(Complex aComplex, Complex bComplex){
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

}

