/**
 * @file Typenum.h
 * @author Ángelo Salazar (angelo.salazar@correounivalle.edu.co)
 * @version 0.1
 * @date 2020-09-19
 */

#ifndef TYPENUM_H_
#define TYPENUM_H_
#include <string>
using namespace std;

/**
 * This class will say if a number is positive, negative or   zero.
 */
class Typenum
{
private:
  double number;
  string result;

  /**
   * Set the Result of the evaluated number
   * @contract <setResult><string> ---> <void>
   * 
   * @param nResult 
   */
  void setResult(string nResult);

public:

  /**
   * Construct a new Typenum object
   * @contract <Typenum><> ---> <obj>
   * @see Typenum(double nNumber);
   */
  Typenum();

  /**
   * Construct a new Typenum object
   * @contract <Typenum><double> ---> <obj>
   * 
   * @param nNumber is the number
   */
  Typenum(double nNumber);

  /**
   * Destroy the Typenum object
   * @contract <~Typenum><> ---> <obj>
   * 
   */
  ~Typenum();

  /**--** Getters and Setter **--**/

  /**
   * Get the Number to evaluate
   * @contract <getNumber><> ---> <double>
   * 
   * @return double 
   */
  double getNumber();

  /**
   * Set the Number to evaluate 
   * @contract <setNumber><double> ---> <void>
   * 
   * @param nNumber is the new number
   */
  void setNumber(double nNumber);

  /**
   * Get the Result evaluated number
   * @contract <getResult><> ---> <string>
   * 
   * @return string 
   */
  string getResult();
};

#endif