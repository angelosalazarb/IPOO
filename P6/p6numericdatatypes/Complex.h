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
  Complex(Complex, Complex);

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
  void setImag(int);

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
  void setReal(int);

  /**
   * Get the Complex number
   * @contract <getComplex><int><int> ---> <void>
   * 
   * @param real 
   * @param imag 
   */
  void getComplex(int real, int imag);

  /**
   * Overload operator +
   * @contract <operator+><Complex> ---> <Complex>
   * @return Complex& 
   */
  Complex& operator+(int);

  /**
   * Overload operator +
   * @contract <operator+><Complex> ---> <Complex>
   * @return Complex& 
   */
  Complex& operator+(Complex);
  
  /**
   * Overload operator -
   * @contract <operator+><Complex> ---> <Complex>
   * @return Complex& 
   */
  Complex& operator-(int);

  /**
   * Overload operator -
   * @contract <operator+><Complex> ---> <Complex>
   * @return Complex& 
   */
  Complex& operator-(Complex);

  /**
   * Overload operator *
   * @contract <operator+><Complex> ---> <Complex>
   * @return Complex& 
   */
  Complex& operator*(int);

  /**
   * Overload operator *
   * @contract <operator+><Complex> ---> <Complex>
   * @return Complex& 
   */
  Complex& operator*(Complex);


};
#endif