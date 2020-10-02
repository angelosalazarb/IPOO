/**
 * @file Frecuency.h
 * @author Ángelo Salazar (angelo.salazar@correounivalle.edu.co) 
 * @version 0.1
 * @date 2020-09-21
 */
#ifndef FRECUENCY_H_
#define FRECUENCY_H_
#include <iostream>
using namespace std;

/*
* This class will count how often a number repeats on a text
*/
class Frecuency
{
private:
  string data;
  int num0, num1, num2, num3, num4, num5, num6, num7, num8, num9;
public:
  /**
   * Construct a new Frecuency object
   * @contract <Frecuency><str> ---> <obj>
   * 
   * @param data 
   */
  Frecuency(string nData);

  /**
   * Construct a new Frecuency object
   * @contract <Frecuency><> ---> <obj>
   * 
   */
  Frecuency();

  /**
   * Destroy the Frecuency object
   * @contract <~Frecuency><obj> ---> <>
   * 
   */
  ~Frecuency();

  /**--** Getters and Setters **--**/

  void setData(string nData);

  string getData();
  
  void getFrecuencies();
};

#endif