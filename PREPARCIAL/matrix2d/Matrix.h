/**
 * @file Matrix.h
 * @author Ángelo Salazar (angelo.salazar@correounivalle.edu.co)
 * @version 0.1
 * @date 2020-08-04
 */

/**This class will create a matrix, and make some operations with it*/

#ifndef MATRIX_H_
#define MATRIX_H_

class Matrix
{
private:
  int size;

  double matrix[10][10];

public:
  /**
   * Construct a new Matrix object
   * @contract <Matrix><> ---> <obj>
   * 
   */
  Matrix();

  /**
   * Construct a new Matrix object
   * @contract <Matrix><int> ---> <obj>
   * 
   * @param size 
   */
  Matrix(int nSize);

  /**
   * Destroy the Matrix object
   * @contract <~Matrix><> ---> <>
   * 
   */
  ~Matrix();

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
   * 
   * @contract <><> ---> <>
   * 
   */
  void printMatrix();

  /**
   * 
   * @contract <><> ---> <>
   * 
   */
  void consoleFill();

  /**
   * 
   * @contract <><> ---> <>
   * 
   */
  void determinant();


};


#endif
