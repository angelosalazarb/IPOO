/**
 * @file Pairs.h
 * @author Ángelo Salazar (angelo.salazar@correounivalle.edu.co)
 * @version 0.1
 * @date 2020-09-30
 */

#ifndef PAIRS_H_
#define PAIRS_H_

class Pairs
{
private:
  int size;
  int buffer[10000];
  int pivot;

public:
  /**
   * Construct a new Vector object
   * @contract <Vector><int> ---> <obj>
   * @param nSize is the new size of the vector
   */
  Pairs(int nSize);

  /**
   * Construct a new Vector object with a specific size and fill with a number.
   * @contract <Vector><int><double> ---> <obj>
   * @param nSize is the new size
   * @param fill  are the values on the vector 
   */
  Pairs(int nSize, double fill);

  /**
   * Construct a new Vector object
   * @contract <Vector><> ---> <obj>
   * 
   */
  Pairs();

  /**
   * Destroy the Pairs object
   * @contract <~Pairs><> ---> <>
   * 
   */
  ~Pairs();

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
   * It will print my vector with all its values
   * @contract <PrintVector><> ---> <vector>
   */
  void printVector();

  /**
   * It will count the pairs on a vector
   * @contract <searchPairs><> ---> <void>
   * 
   */
  double searchPairs();
};

#endif