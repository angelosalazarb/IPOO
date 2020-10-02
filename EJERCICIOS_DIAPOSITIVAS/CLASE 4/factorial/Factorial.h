/**
 * @file Factorial.h
 * @author Ángelo Salazar (angelo.salazar@correounivalle.edu.co)
 * @version 0.1
 * @date 2020-09-29
 */

#ifndef FACTORIAL_H_
#define FACTORIAL_H_

/*This class will calculate the factorial of a number*/
class Factorial
{
private:
  int number;

public:
  /**
   * Construct a new Factorial object
   * @contract <Factorial><int> ---> <obj>
   * 
   * @param nNumber is the new number to calculate the factorial
   */
  Factorial(int nNumber);

  /**
   * Construct a new Factorial object
   * @contract <Factorial><> ---> <obj>
   * 
   */
  Factorial();


  /**
   * Destroy the Factorial object
   * @contract <~Factorial><> ---> <>
   * 
   */
  ~Factorial();

  /**--** getters and setter **--**/

  int getNumber();

  void setNumber(int nNumber);

  /**--** other members **--**/

  void result();
};

#endif