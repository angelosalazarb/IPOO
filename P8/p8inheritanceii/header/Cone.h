/**
 * @file Cone.h
 * @author Ángelo Salazar (angelo.salazar@correounivalle.edu.co)
 * @version 0.1
 * @date 2020-20-13
 */
#ifndef CONE_H_
#define CONE_H_

#include <string>
using namespace std;

#include "../header/GeometricObject.h"

class Cone : public GeometricObject{
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

  Cone();

  /**
   * Construct a new Cone object
   * @contract <Cone><string><string> ---> <obj>
   * 
   * @param type 
   * @param space 
   **/
  Cone(string type, string space);

  /**
   * Construct a new Cone object
   * @contract <Cone><double> ---> <Obj>
   * 
   * @param nRatio 
   **/
  Cone(double nRatio);

  /**
   * Construct a new Cone object
   * @contract <Cone><double><double> ---> <>
   * 
   * @param nRatio 
   * @param nHeight 
   **/
  Cone(double nRatio, double nHeight);

  /**
   * Destroy the Cone object
   * @contract <~Cone><obj> ---> <>
   * 
   **/
  ~Cone();

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