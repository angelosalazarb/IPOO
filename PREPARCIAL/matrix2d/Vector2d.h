/**
 * @file Vector2d.cpp
 * @author Ángelo Salazar (angelo.salazar@correounivalle.edu.co)
 * @version 0.1
 * @date 2020-08-05
 */

#ifndef VECTOR2D_H_
#define VECTOR2D_H_
#include "Matrix.h"

class Vector2d
{
private:
  int size;

  double vector[10][1];

public:
  /**
   * Construct a new Vector2d object
   * @contract <Vector2d><> ---> <obj>
   * 
   */
  Vector2d();

  /**
   * Construct a new Vector2d object
   * @contract <Vector2d><int> ---> <obj>
   * 
   * @param size 
   */
  Vector2d(int nSize);

  /**
   * Destroy the Vector2d object
   * @contract <~Vector2d><> ---> <>
   * 
   */
  ~Vector2d();

  /**--** getters and setter **--**/

  /**
   * Get the Sizer of the object
   * @contract <getSize><> ---> <int>
   * 
   * @return int 
   */
  int getSize();


  /**
   * Set the Sizer of the object 
   * @contract <setSize><int> ---> <void>
   * 
   * @param nSize 
   */
  void setSize(int nSize);

  /**
   * Get the Position of the vector
   * @contract <getPosition><int> ---> <>
   * 
   * @return double 
   */
  double getPosition(int pos);
  /**--** other methods **--**/

  /**
   * Print the Vector2d
   * @contract <printVector<> ---> <>
   * 
   */
  void printVector();

  /**
   * Fill the Vector2d
   * @contract <consoleFill><> ---> <>
   * 
   */
  void consoleFill();

  /**
   * Solve an equations system
   * @contract <solve><> ---> <void>
   * 
   */
  void solve(Vector2d aVec, Matrix aMat);



};


#endif