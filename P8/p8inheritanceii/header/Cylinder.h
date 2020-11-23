/**
 * @file Cylinder.h
 * @author Ángelo Salazar (angelo.salazar@correounivalle.edu.co)
 * @version 0.1
 * @date 2020-20-13
 */
#ifndef CYLINDER_H_
#define CYLINDER_H_

#include <string>
using namespace std;

#include "../header/GeometricObject.h"

class Cylinder : public GeometricObject{
  private:
  double ratio, diameter, height;
  
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

  Cylinder();

  /**
   * Construct a new Cylinder object
   * @contract <Cylinder><string><string> ---> <obj>
   * 
   * @param type 
   * @param space 
   **/
  Cylinder(string type, string space);

  /**
   * Construct a new Cylinder object
   * @contract <Cylinder><double> ---> <Obj>
   * 
   * @param nRatio 
   **/
  Cylinder(double nRatio);

  /**
   * Construct a new Cylinder object
   * @contract <Cylinder><double><double> ---> <>
   * 
   * @param nRatio 
   * @param nHeight 
   **/
  Cylinder(double nRatio, double nHeight);

  /**
   * Destroy the Cylinder object
   * @contract <~Cylinder><obj> ---> <>
   * 
   **/
  ~Cylinder();

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
   * Get the Height of the object
   * @contract <getHeight><void> ---> <double>
   * 
   * @return double 
   **/
  double getHeight(void);

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