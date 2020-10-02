#include <iostream>
#include "Complex.h"
using namespace std;

void  createNum(Complex cnum){
    cout<< cnum.getReal() << " + " << cnum.getImag() <<"i"<<endl;
}

void sum(Complex num1, Complex num2){
    if((num1.getImag() + num2.getImag())< 0)
        cout<< (num1.getReal() + num2.getReal()) << " - " << (num1.getImag() + num2.getImag()) <<"i"<<endl;
    else if((num1.getImag() + num2.getImag())< 0 && (num1.getImag() + num2.getImag()) == -1)
        cout<< (num1.getReal() + num2.getReal()) << " - " <<"i"<<endl;
    else if((num1.getImag() + num2.getImag()) == 1 )
        cout<< (num1.getReal() - num2.getReal()) << " + " <<"i"<<endl;
    else
        cout<< (num1.getReal() + num2.getReal()) << " + " << (num1.getImag() + num2.getImag()) <<"i"<<endl;
}

void substract(Complex num1, Complex num2){
    if((num1.getImag() - num2.getImag()) > 0 && (num1.getImag() - num2.getImag()) != 1)
        cout<< (num1.getReal() - num2.getReal()) << " + " << (num1.getImag() - num2.getImag()) <<"i"<<endl;
    else if((num1.getImag() - num2.getImag()) > 0 && (num1.getImag() - num2.getImag()) == 1 )
        cout<< (num1.getReal() - num2.getReal()) << " + " <<"i"<<endl;
    else if((num1.getImag() - num2.getImag()) == -1 )
        cout<< (num1.getReal() - num2.getReal()) << " - " <<"i"<<endl;
    else
        cout<< (num1.getReal() - num2.getReal()) << " - " << (num1.getImag() - num2.getImag()) <<"i"<<endl;
}

int main(){
    Complex c1;

    c1.setReal(7);
    c1.setImag(8);

    Complex c2;

    c2.setReal(12);
    c2.setImag(2);

    Complex c3;

    c3.setReal(5);
    c3.setImag(3);

    createNum(c1);
    createNum(c2);
    createNum(c3);

    Complex c4;
    c4.setReal(6);
    c4.setImag(5);

    Complex c5;
    c5.setReal(2);
    c5.setImag(4);

    Complex c6;
    c6.setReal(5);
    c6.setImag(2);

    Complex c7;
    c7.setReal(5);
    c7.setImag(3);

    substract(c4,c5);
    sum(c6,c7);

}