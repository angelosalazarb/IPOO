/**
 * @file Vector.h
 * @author Ángelo Salazar (angelo.salazar@correounivalle.edu.co)
 * @version 0.1
 * @date 2020-10-01
 */

#ifndef VECTOR_H_
#define VECTOR_H_

/**
 * This class define a vector using arrays 
 */
class Vector
{
private:
  int size;
  int buffer[10000];
  int pivot;

public:
  /**
   * Construct a new Vector object
   * @contract <Vector><> ---> <obj>
   */
  Vector();

  /**
   * Construct a new Vector object
   * @contract <Vector><int> ---> <obj>
   * @param nSize 
   */
  Vector(int nSize);

  /**
   * Construct a new Vector object
   * @contract <Vector><int><int> ---> <obj>
   * 
   * @param nSize 
   * @param fill 
   */
  Vector(int nSize, int fill);

  /**
   * Destroy the Vector object
   * @contract <~Vector><> ---> <>
   * 
   */
  ~Vector();

  /**--** getters and setter **--**/

  /**
   * Set the Size of the object 
   * @contract <setSize><int> ---> <void>
   * 
   * @param nSize 
   */
  void setSize(int nSize);

  /**
   * Get the Size of the object
   * @contract <getSize><> ---> <int>
   * 
   */
  int getSize();

  /**
   * Get the Value of the object
   * @contract <getValue><int> ---> <void>
   *
   */
  void getValue(int index);

  /**-** other members **--**/

  /**
   * Fill the vector with values giving by the user
   * @contract <consoleFill><> ---> <void>
   * 
   */
  void consoleFill();

  /**
   * Print the vector 
   * @contract <printVector><> ---> <void>
   * 
   */
  void printVector();

  /**
   * Set a value in a specific position of the vector
   * @contract <set><int><int> ---> <>
   * 
   * @param index 
   * @param value 
   */
  void set(int index, int value);

  /**
   * This method will sort the vector in ascendent or descendent  order
   * @contract <sort><> ---> <void>
   * 
   */
  void sort();

  /**
   * This will search a value in the vector 
   * @contract <lookUp><> ---> <void>
   * 
   */
  void lookUp();
};

#endif