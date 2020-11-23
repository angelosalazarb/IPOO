/**
 * @file Cube.h
 * @author Ángelo Salazar (angelo.salazar@correounivalle.edu.co)
 * @version 0.1
 * @date 2020-20-13
 */
#ifndef CUBE_H_
#define CUBE_H_

#include <string>
using namespace std;

#include "../header/GeometricObject.h"

class Cube : public GeometricObject{
  private:
  double lateral;
  
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

  Cube();

  /**
   * Construct a new Cube object
   * @contract <Cube><string><string> ---> <obj>
   * 
   * @param type 
   * @param space 
   **/
  Cube(string type, string space);

  /**
   * Construct a new Cube object
   * @contract <Cube><double> ---> <Obj>
   * 
   * @param nLateral 
   **/
  Cube(double nLateral);

  /**
   * Destroy the Cube object
   * @contract <~Cube><obj> ---> <>
   * 
   **/
  ~Cube();

  /**--** getters and setters **--**/

  /**
   * Get the Lateral of the object
   * @contract <getLateral><void> ---> <double>
   * 
   * @return double 
   **/
  double getLateral(void);

  /**
   * Set the Lateral of the object
   * @contract <setLateral><double> ---> <void>
   * 
   * @param nLateral 
   **/
  void setLateral(double nLateral);


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