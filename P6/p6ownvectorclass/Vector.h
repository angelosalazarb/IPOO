/**
 * @file Vector.h
 * @author Ángelo Salazar (angelo.salazar@correounivalle.edu.co)
 * @version 0.1
 * @date 2020-09-23
 */
#ifndef VECTOR_H_
#define VECTOR_H_

/**
 * This class define a vector using arrays.
 */
class Vector
{
private:
  int capacity;
  int size;
  int *buffer =  new int[capacity];

public:
  /**
   * Construct a new Vector object
   * @contract <Vector><int> ---> <obj>
   * @param nSize is the new size of the vector
   */
  Vector(int nSize);

  /**
   * Construct a new Vector object with a specific size and fill with a number.
   * @contract <Vector><int><double> ---> <obj>
   * @param nSize is the new size
   * @param fill  are the values on the vector 
   */
  Vector(int nSize, int fill);

  /**
   * Construct a new Vector object
   * @contract <Vector><> ---> <obj>
   * 
   */
  Vector();

  /**
   * Destroy the Vector object
   * @contract <~Vector><obj> ---> <>
   * 
   */
  ~Vector();

  //**--** getters and setter **--**//

  /**
   * Get the Size of the vector
   * @contract <getSize><> ---> <int>
   * 
   * @return int 
   */
  int getSize();

  /**
   * Set the Size of the object 
   * @contract <setSize><int> ---> <void>
   * 
   * @param nSize is the new vector size
   */
  void setSize(int nSize);

  /**
   * Get the Value in an index of the vector
   * @contract <getValue><index> ---> <int>
   * 
   * @param index is the index of the vector
   * @return int 
   */
  int getValue(int index);

  /**
   * Set a index with a define value
   * @contract <set><int><double> ---> <void>
   * 
   * @param index is the index of the vector
   * @param value is the value to replace
   */
  void set(int index, double value);

  //**--** other members **--**//

  /**
   * Fill the vector whit a values giving by the user by
   * console
   * @contract <consoleFill><> ---> <void>
   */
  void consoleFill();

  /**
   * Set a value in the next index of the vector
   * @contract <append><int> ---> <void>
   * 
   * @param value 
   */
  void append(int value);

  /**
   * Delete a value from the index
   * @contract <remove><int> ---> <void>
   * @param index 
   */
  void remove(int index);

  /**
   * Sort the vector values
   * @contract <sort><> ---> <void>
   * 
   */
  void sort();

  /**
   * Search a value in the vecto
   * @contract <lookUp><int> ---> <void>
   * 
   * @param value 
   */
  void lookUp(int value);

  /**
   * It will print my vector with all its values
   * @contract <PrintVector><> ---> <vector>
   */
  void printVector();

  /**
   * Order the vector in ascendent form
   * @contract <path><> ---> <void>
   * 
   */
  void path();

    /**
   * Sort the vector in descendent form
   * @contract <descendent><> ---> <void>
   */
  void descendent();

  /**
   * Sort the vector in descendent form
   * @contract <ascendent><> ---> <void>
   */
  void ascendent();

};

#endif