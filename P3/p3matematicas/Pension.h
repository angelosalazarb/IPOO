/**
 * @file Pension.h
 * @author Ángelo Salazar (angelo.salazar@correounivalle.edu.co)
 * @version 0.1
 * @date 2020-09-18
 */

#ifndef PENSION_H_
#define PENSION_H_
#include <string>
using namespace std;

/**
 * This class will say if a person apply for a pension or not using boolean values 
 */
class Pension
{
private:
  int age;
  string gender;
  string pension;
  

   /**
   * Set the Pension state
   * @contract <setPension><str> ---> <void>
   * @param nPension set the pension state
   */
  void setPension(string nPension);

public: 

  /**
   * Construct a new Pension object
   * @contract <Pension><> ---> <obj>
   * 
   */
  Pension();

  /**
   * Construct a new Pension object
   * @contract <Pension><int><str> ---> <obj>
   * 
   * @param nAge 
   * @param nGender 
   */
  Pension(int nAge, string nGender);

  /**
   * Destroy the Pension object
   * @contract <-Pension><> ---> <>
   * 
   */
  ~Pension();

  /**
   * Get the Age of the person
   * @contract <getAge><> ---> <int>
   * @return int 
   */
  int getAge();

  /**
   * Get the Gender of the person
   * @contract <getGender><> ---> <str>
   * @return string 
   */
  string getGender();

  /**
   * Get the Pension of the person
   * @contract <getPension><> ---> <str>
   * @return string 
   */
  string getPension();

  /**
   * Set the Age of the person 
   * @contract <setAge><int> ---> <void>
   * @param nAge is the new age of the person
   */
  void setAge(int nAge);

  /**
   * Set the Gender of the person 
   * @contract <setGender><str> ---> <void>
   * @param nGender set the new gender of the person
   */
  void setGender(string nGender);

};

#endif
