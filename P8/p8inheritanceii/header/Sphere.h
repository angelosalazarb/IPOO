/**
 * @file Sphere.h
 * @author Ángelo Salazar (angelo.salazar@correounivalle.edu.co)
 * @version 0.1
 * @date 2020-20-13
 */
#ifndef SPHERE_H_
#define SPHERE_H_

#include <string>
using namespace std;

#include "../header/GeometricObject.h"

class Sphere : public GeometricObject{
  private:
  double ratio, diameter;
  
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

  Sphere();

  /**
   * Construct a new Sphere object
   * @contract <Sphere><string><string> ---> <obj>
   * 
   * @param type 
   * @param space 
   **/
  Sphere(string type, string space);

  /**
   * Construct a new Sphere object
   * @contract <Sphere><double> ---> <Obj>
   * 
   * @param nRatio 
   **/
  Sphere(double nRatio);

  /**
   * Construct a new Sphere object
   * @contract <Sphere><double><double> ---> <>
   * 
   * @param nRatio 
   * @param nDiameter 
   **/
  Sphere(double nRatio, double nDiameter);

  /**
   * Destroy the Sphere object
   * @contract <~Sphere><obj> ---> <>
   * 
   **/
  ~Sphere();

  /**--** getters and setters **--**/

  /**
   * Get the Ratio of the object
   * @contract <getRatio><void> ---> <double>
   * 
   * @return double 
   **/
  double getRatio(void);

  /**
   * Get the Diameter of the object
   * @contract <getDiameter><void> ---> <double>
   * 
   * @return double 
   **/
  double getDiameter(void);

  /**
   * Set the Ratio of the object
   * @contract <setRatio><double> ---> <void>
   * 
   * @param nRatio 
   **/
  void setRatio(double nRatio);

  /**
   * Set the Diameter of the object
   * @contract <setDiameter><double> ---> <void>
   * 
   * @param nDiameter 
   **/
  void setDiameter(double nDiameter);

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