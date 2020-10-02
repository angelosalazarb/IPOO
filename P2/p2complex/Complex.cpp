#include "Complex.h"

Complex::Complex(){
    real = 0;
    imaginary = 0;
}

Complex::~Complex(){}

double Complex::getImag(){
    return imaginary;
}

double Complex::getReal(){
    return real;
}
void  Complex::setImag(double i){
    imaginary = i;
}

void  Complex::setReal(double r){
    real = r;
}
