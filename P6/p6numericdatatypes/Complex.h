/**
 * @file Complex.h
 * @author Ángelo Salazar (angelo.salazar@correounivalle.edu.co)
 * @version 0.1
 * @date 2020-11-06
 */

#ifndef COMPLEX_H_
#define COMPLEX_H_

/**
This class will made operations with complex numbers
 */

class Complex{

  private:
  int imag;
  int real;
  char op;

  public:

  Complex();
  Complex(int imag, int real);
  Complex(Complex aComplex, Complex bComplex);

  /**
   * Get the Imaginary of the complex
   * @contract <getImag><> ---> <int>
   * @return int 
   */
  int getImag();

  /**
   * Set the Imaginary of the complex 
   * @contract <setImag><int> ---> <void>
   * 
   */
  void setImag(int imag);

  /**
   * Get the Real of the complex
   * @contract <getReal><> ---> <int>
   * 
   * @return int 
   */
  int getReal();

  /**
   * Set the Real of the complex 
   * @contract <setReal><int> ---> <void>
   * 
   * @return void 
   */
  void setReal(int real);

  /**
   * Get the Complex number
   * @contract <getComplex><int><int> ---> <void>
   * 
   * @param real 
   * @param imag 
   */
  void getComplex();

  /**
   * Overload operator +
   * @contract <operator+><Complex> ---> <Complex>
   * @return Complex& 
   */
  Complex& operator+(int value);

  /**
   * Overload operator +
   * @contract <operator+><Complex> ---> <Complex>
   * @return Complex& 
   */
  Complex& operator+(Complex aComplex);
  
  /**
   * Overload operator -
   * @contract <operator+><Complex> ---> <Complex>
   * @return Complex& 
   */
  Complex& operator-(int value);

  /**
   * Overload operator -
   * @contract <operator+><Complex> ---> <Complex>
   * @return Complex& 
   */
  Complex& operator-(Complex aComplex);

  /**
   * Overload operator *
   * @contract <operator+><Complex> ---> <Complex>
   * @return Complex& 
   */
  Complex& operator*(int value);

  /**
   * Overload operator *
   * @contract <operator+><Complex> ---> <Complex>
   * @return Complex& 
   */
  Complex& operator*(Complex aComplex);


};
#endif