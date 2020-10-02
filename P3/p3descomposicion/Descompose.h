/**
 * @file Descompose.h
 * @author Ángelo Salazar (angelo.salazar@correounivalle.edu.co)
 * @version 0.1
 * @date 2020-09-15
 */
#ifndef DESCOMPOSE_H_
#define DESCOMPOSE_H_
#include <string>
using namespace std;

/**
 * 
 * This class will descompose a number in factor except if it is a prime number
 * 
 */
class Descompose
{
private:
  int number;
  string factor;
  int count;
  string result;

  /**
   * Set the factor of the number
   * @contract <setFactor><str> ---> <void>
   * 
   * @param nFactor is the new number
   */
  void setFactor(string nFactor);

  /**
   * Set the Count of the object 
   * @contract <setCount><int> ---> <void>
   * 
   * @param nCount 
   */
  void setCount(int nCount);


public:
  /**
   * Construct a new Descompose object
   * @see Descompose(int nNumber)
   * 
   */
  Descompose();

  /**
   * Construct a new Descompose object
   * @contract <Descompose><int> ---> <object>
   * 
   * @param nNumber it is the number
   */
  Descompose(int nNumber);

  /**
   * Destroy the Descompose object
   * @contract <><> ---> <>
   * 
   */
  ~Descompose();

  /**--**Setter and Getters**--**/

  /**
   * Get the Number 
   * @contract <getNumber><> ---> <int>
   * 
   * @return int 
   */
  int getNumber();

  /**
   * Set the Number 
   * @contract <setNumber><int> ---> <void>
   * 
   * @param newNum is the new number
   */
  void setNumber(int newNum);

  /**
   * Get the factor of the number
   * @contract <getFactor><> ---> <str>
   * 
   */
  string getFactor();

  /**
   * Get the Count of the iterations of the factor
   * @contract <getCount><> ---> <int>
   * 
   * @return int 
   */
  int getCount();

  
};


#endif