/**
 * @file Operators.h
 * @author Ángelo Salazar (angelo.salazar@correounivalle.edu.co)
 * @version 0.1
 * @date 2020-09-19
 */

#ifndef OPERATORS_H_
#define OPERATORS_H_

class Operators
{
private:
  double a;
  double b;
  int c;
  double result;

  /**
   * Set the Result of the object 
   * @contract <setResult><double> ---> <void>
   * 
   * @param nResult 
   */
  void setResult(double nResult);

public:

  /**
   * Construct a new Operators object
   * @contract <Operators><> ---> <obj>
   * 
   */
  Operators();

  /**
   * Construct a new Operators object
   * @contract <Operators><double><double><int> ---> <obj>
   * 
   * @param a 
   * @param b 
   * @param c 
   */
  Operators(double a, double b, int c);

  /**
   * Destroy the Operators object
   * @contract <~Operators><> ---> <obj>
   * 
   */
  ~Operators();

  //**--** Getters and Setter **--**//

  /**
   * Get the A value to make the operation
   * @contract <getA><> ---> <double>
   * 
   * @return double 
   */
  double getA();

  /**
   * Get the B value to make the operation
   * @contract <getB><> ---> <double>
   * 
   * @return double 
   */
  double getB();

   /**
   * Get the C that is the operator
   * @contract <getC><> ---> <int>
   * 
   * @return double 
   */
  int getC();

  /**
   * Set the A value to make the operation
   * @contract <setA><double> ---> <void>
   * @param newA is the new A value
   * @return void 
   */
  void setA(double newA);
  /**
   * Set the A value to make the operation
   * @contract <setB><double> ---> <void>
   * @param newB is the new B value
   * @return void 
   */
  void setB(double newB);
  /**
   * Set the C represents the operator
   * @contract <setC><double> ---> <void>
   * @param newC is the new c value
   * @return void 
   */
  void setC(int newC);

  /**
   * Get the Result of the object
   * @contract <getResult><> ---> <double>
   * 
   * @return double 
   */
  double getResult();

   /**
   * Get the Result of the object
   * @contract <getResultDouble><> ---> <double>
   * 
   * @return double 
   */
  double getResultDouble();

   /**
   * Get the Result of the object
   * @contract <getResultTernario><> ---> <double>
   * 
   * @return double 
   */
  double getResultTernario();





};

#endif
