/**
 * @file Major.h
 * @author Ángelo Salazar (angelo.salazar@correounivalle.edu.co)
 * @version 0.1
 * @date 2020-09-18
 */
#ifndef MAJOR_H_
#define MAJOR_H_
#include <string>
using namespace std;

/**
 * This class define what number is the major between 3 differents number
 */
class Major
{
private:

  double number;
  double number2;
  double number3;
  double majorNum;

    /**
   * Set the Num Value of the object 
   * @contract <setMajorNum><double> ---> <void>
   * @param nMajorNum 
   */
  void setMajorNum(double nMajorNum);
  
 
public:
  /**
   * Construct a new Math object
   * @contract <Math><> ---> <obj>
   * @see Math(int nNumber, int nNumber2, int nNumber3, int nAge, string nGender);
   */
  Major();

  /**
   * Construct a new Math object
   * @contract <Math><int><int><int><int><str> ---> <object>
   * 
   * @param nNumber is the number1
   * @param nNumber2 is the number2
   * @param nNumber3  is the number3
   */
  Major(double nNumber, double nNumber2, double nNumber3);

  /**
   * Destroy the Math object
   * @contract <~Math><> ---> <obj>
   * 
   */
  ~Major();

  //**--** Setter and Getters **--**/

  /**
   * Get the Number of the object
   * @contract <getNumber><> ---> <double>
   * @return double 
   */
  double getNumber();

  /**
   * Get the Number2 of the object
   * @contract <getNumber2><> ---> <double>
   * @return double 
   */
  double getNumber2();

  /**
   * Get the Number3 of the object
   * @contract <getNumber3><> ---> <double>
   * @return double 
   */
  double getNumber3();

  /**
   * Set the Number of the object 
   * @contract <setNumber><double> ---> <void>
   * @param nNumber is the new number
   */
  void setNumber(double nNumber);

  /**
   * Set the Number2 of the object 
   * @contract <setNumber2><double> ---> <void>
   * @param nNumber2 is the new number2
   */
  void setNumber2(double nNumber2);

  /**
   * Set the Number3 of the object 
   * @contract <setNumber3><double> ---> <str>
   * @param nNumber3 is the new number3
   */
  void setNumber3(double nNumber3);

   /**
   * Get the Num Value of the object
   * @contract <getMajorNum><> ---> <str>
   * @return string 
   */
  double getMajorNum();

};

#endif