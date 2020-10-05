/**
 * @file Vector2d.cpp
 * @author Ángelo Salazar (angelo.salazar@correounivalle.edu.co)
 * @version 0.1
 * @date 2020-08-05
 */

#ifndef VECTOR2D_H_
#define VECTOR2D_H_

class Vector2d
{
private:
  int size;

  double vector[10][1];

public:
  /**
   * Construct a new Matrix object
   * @contract <Matrix><> ---> <obj>
   * 
   */
  Vector2d();

  /**
   * Construct a new Matrix object
   * @contract <Matrix><int> ---> <obj>
   * 
   * @param size 
   */
  Vector2d(int nSize);

  /**
   * Destroy the Matrix object
   * @contract <~Matrix><> ---> <>
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


  /**--** other methods **--**/

  /**
   * Print the matrix
   * @contract <printMatrix><> ---> <>
   * 
   */
  void printVector();

  /**
   * Fill the matrix
   * @contract <consoleFill><> ---> <>
   * 
   */
  void consoleFill();

};


#endif