/**
 * @file Pyramid.h
 * @author Ángelo Salazar (angelo.salazar@correounivalle.edu.co)
 * @version 0.1
 * @date 2020-20-13
 */
#ifndef PYRAMID_H_
#define PYRAMID_H_

#include <string>
using namespace std;

#include "../header/GeometricObject.h"

class Pyramid : public GeometricObject{
  private:
  double lateral, width, height;
  
  /**
   * Set the Area of the object override from GeometricObject
   * @contract <setArea><double> ---> <void>
   * 
   * @param nArea 
   **/
  void setArea(double nArea) override;

  /**
   * Set the Volume of the object override from GeometricObject
   * @contract <setArea><double> ---> <void>
   * 
   * @param nVolume 
   **/
  void setVolume(double nVolume) override;

  

  public:

  Pyramid();

  /**
   * Construct a new Pyramid object
   * @contract <Pyramid><string><string> ---> <obj>
   * 
   * @param type 
   * @param space 
   **/
  Pyramid(string type, string space);

  /**
   * Construct a new Pyramid object
   * @contract <Pyramid><double> ---> <Obj>
   * 
   * @param nLateral 
   **/
  Pyramid(double nLateral);

  /**
   * Construct a new Pyramid object
   * @contract <Pyramid><double><double><double> ---> <>
   * 
   * @param nLateral 
   * @param nHeight 
   * @param nWidth 
   **/
  Pyramid(double nLateral, double nHeight, double nWidth);

  /**
   * Destroy the Pyramid object
   * @contract <~Pyramid><obj> ---> <>
   * 
   **/
  ~Pyramid();

  /**--** getters and setters **--**/

  /**
   * Get the Lateral of the object
   * @contract <getLateral><void> ---> <double>
   * 
   * @return double 
   **/
  double getLateral(void);

  /**
   * Get the Width of the object
   * @contract <getWidth><void> ---> <double>
   * 
   * @return double 
   **/
  double getWidth(void);

  /**
   * Get the Height of the object
   * @contract <getHeight><void> ---> <double>
   * 
   * @return double 
   **/
  double getHeight(void);

  /**
   * Set the Lateral of the object
   * @contract <setLateral><double> ---> <void>
   * 
   * @param nLateral 
   **/
  void setLateral(double nLateral);

  /**
   * Set the Width of the object
   * @contract <setWidth><double> ---> <void>
   * 
   * @param nWidth 
   **/
  void setWidth(double nWidth);

  /**
   * Set the Height of the object
   * @contract <setHeight)><double> ---> <void>
   * 
   * @param nHeight) 
   **/
  void setHeight(double nHeight);

  /**--** override methods **-**/

  /**
   * Get the Area of the object override from GeometricObject
   * @contract <getArea><void> ---> <double>
   * 
   * @return double 
   **/
  double getArea(void) override;

  /**
   * Get the Volume of the object from GeometricObject
   * @contract <getVolume><void> ---> <double>
   * 
   * @return double 
   **/
  double getVolume(void) override;

};

#endif