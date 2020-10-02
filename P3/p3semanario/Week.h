/**
 * @file Week.h
 * @author Ángelo Salazar (angelo.salazar@correounivalle.edu.co)
 * @version 0.1
 * @date 2020-09-19
 */

#ifndef WEEK_H_
#define WEEK_H_
#include <string>
using namespace std;

/**
 * This class will return the day corresponding to its number on the week. 
 */
class Week
{
private:
  int number;
  string day;

  /**
   * Set the Day of the week 
   * @contract <setDay><str> ---> <void>
   * 
   * @param nDay is the new day
   */
  void setDay(string nDay);
public:
  /**
   * Construct a new Week object
   * @contract <Week><> ---> <obj>
   * 
   */
  Week();

  /**
   * Construct a new Week object
   * @contract <nNumber><int> ---> <void>
   * 
   * @param nNumber is the new number
   */
  Week(int nNumber);

  /**
   * Destroy the Week object
   * @contract <~Week><> ---> <>
   * 
   */
  ~Week();

  /**--**Getters and Setter**--**/

  /**
   * Get the Number of the week
   * @contract <getNumber><> ---> <int>
   * 
   * @return int 
   */
  int getNumber();

  /**
   * Set the Number of the week 
   * @contract <setNumber><int> ---> <void>
   * 
   * @param nNumber is the new number
   */
  void setNumber(int nNumber);

  /**
   * Get the Day of the week
   * @contract <><> ---> <>
   * 
   * @return string 
   */
  string getDay();

};
#endif