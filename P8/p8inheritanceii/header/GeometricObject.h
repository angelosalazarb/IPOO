/**
 * @file GeometricObject.h
 * @author Ángelo Salazar (angelo.salazar@correounivalle.edu.co)
 * @version 0.1
 * @date 2020-20-13
 */
#ifndef GEOMETRICOBJECT_H_
#define GEOMETRICOBJECT_H_

#include <string>
#include <iostream>
using namespace std;

class GeometricObject{
  private:

  public:
  string type, space;
  double area, volume;

  /**
   * Construct a new Geometric Object object
   * @contract <GeometricObject><> ---> <obj>
   * 
   **/
  GeometricObject();

  /**
   * Construct a new Geometric Object object
   * @contract <GeometricObject><str> ---> <obj>
   * 
   * @param type 
   **/
  GeometricObject(string nType);

  /**
   * Construct a new Geometric Object object
   * @contract <GeometricObject><str><str> ---> <obj>
   * 
   * @param type 
   * @param space 
   **/
  GeometricObject(string nType, string nSpace);

  /**
   * Construct a new Geometric Object object
   * @contract <GeometricObject><str><str><double> ---> <obj>
   * 
   * @param type 
   * @param space 
   * @param area 
   **/
  GeometricObject(string nType, string nSpace, double nArea);
  
  /**
   * Construct a new Geometric Object object
   * @contract <GeometricObject><str><str><double><double> ---> <obj>
   * 
   * @param type 
   * @param space 
   * @param area 
   * @param volume 
   **/
  GeometricObject(string nType, string nSpace, double nArea, double nVolume);
  
  /**
   * Destroy the Geometric Object object
   * @contract <~GeometricObject><obj> ---> <void>
   * 
   **/
  virtual ~GeometricObject();

  /**--** getters and setters **--**/
  
  /**
   * Get the Type of the object
   * @contract <getType><void> ---> <str>
   * 
   * @return string 
   **/
  string getType(void);

  /**
   * Set the Type of the object
   * @contract <setType><str> ---> <void>
   * 
   * @param type 
   **/
  void setType(string type);

  /**
   * Get the Space of the object
   * @contract <getSpace><void> ---> <str>
   * 
   * @return string 
   **/
  string getSpace(void);

  /**
   * Set the Space of the object
   * @contract <getSpace><str> ---> <void>
   * 
   * @param space 
   **/
  void setSpace(string space);

  /**
   * Get the Area of the object
   * @contract <getArea><void> ---> <double>
   * 
   * @return double 
   **/
  virtual double getArea(void);

  /**
   * Set the Area of the object
   * @contract <setArea><double> ---> <void>
   * 
   * @param nArea 
   **/
  virtual void setArea(double nArea);

  /**
   * Get the Volume of the object
   * @contract <getVolume><void> ---> <double>
   * 
   * @return double 
   **/
  virtual double getVolume(void);

  /**
   * Set the Volume of the object
   * @contract <getArea><double> ---> <void>
   * 
   * @param nVolume 
   **/
  virtual void setVolume(double nVolume);

  /**
   * Calculate the area of the object
   * @contract <area><void> ---> <double>
   * 
   * @return double 
   **/
  virtual double areaCalculate(void);

  /**
   * Calculate the volume of the object
   * @contract <volume><void> ---> <double>
   * 
   * @return double 
   **/
  virtual double volumeCalculate(void);
  

};

#endif