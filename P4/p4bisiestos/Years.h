/**
 * @file Years.h
 * @author Ángelo Salazar (angelo.salazar@correounivalle.edu.co)
 * @version 0.1
 * @date 2020-09-20
 */
#ifndef YEARS_H_
#define YEARS_H_
#include <string>
using namespace std;

/**
 * This class will calculate and display the leap years between two years.
 */
class Years
{
private:
  int year1;
  int year2;
public:
  /**
   * Construct a new Years object
   * @contract <Years><> ---> <obj>
   * @see   Years(int nYear1, int nYear2)
   */
  Years();

  /**
   * Construct a new Years object
   * @contract <Years><int><int> ---> <obj>
   * 
   * @param nYear1 
   * @param nYear2 
   */
  Years(int nYear1, int nYear2);

  /**
   * Destroy the Years object
   * @contract <~Years><obj> ---> <>
   * 
   */
  ~Years();

  /**--** Getters and Setters **--**/

  /**
   * Get the Year1 of the object
   * @contract <getYear1><> ---> <int>
   * 
   * @return int 
   */
  int getYear1();

  /**
   * Get the Year2 of the object
   * @contract <getYear2><> ---> <int>
   * 
   * @return int 
   */
  int getYear2();

  /**
   * Set the Year1 of the object 
   * @contract <setYear1><int> ---> <void>
   * 
   * @param nYear1 is the new year1
   */
  void setYear1(int nYear1);

  /**
   * Set the Year2 of the object 
   * @contract <setYear2><int> ---> <void>
   * 
   * @param nYear2 is the new year2
   */
  void setYear2(int nYear2);

  /**
   * Get the leap years between to years.
   * @contract <getYears><> ---> <void>
   * 
   */
  void getYears();
};



#endif