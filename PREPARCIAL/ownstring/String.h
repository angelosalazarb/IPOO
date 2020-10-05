/**
 * @file String.h
 * @author Ángelo Salazar (angelo.salazar@correounivalle.edu.co)
 * @version 0.1
 * @date 2020-10-02
 */


#ifndef STRING_H_
#define STRING_H_

/** This class will work with chars like it was a vector
 * Method that let you get a char in a specific position,
 * Method who return the length of chars,
 * Method that insert a char in a specific position,
 * Verify equality and sustract of chars.
 **/

class String
{
private:
  int size;
  char buffer[100000];
  
public:
  /**
   * Construct a new String object
   * @contract <><> ---> <>
   * 
   */
  String();

  /**
   * Construct a new String object
   * @contract <String><int><char> ---> <>
   * 
   * @param nSize 
   * @param fill 
   */
  String(int nSize, char fill);

  /**
   * Destroy the String object
   * @contract <~String><> ---> <>
   * 
   */
  ~String();

  /**--** getters and setter **--**/

  /**
   * Get the Size of the string
   * @contract <getSize><> ---> <int>
   * 
   * @return int 
   */
  int getSize();

  /**
   * Set the Size of the object 
   * @contract <setSize><int> ---> <>
   * 
   * @param nSize 
   */
  void setSize(int nSize);


  /**--** other methods **--**/

  /**
   * It will fill receive the string from the user
   * @contract <consoleFill><> ---> <void>
   */
  void consoleFill();

  /**
   * It will fill print the string from the user
   * @contract <printStr><> ---> <void>
   */
  void printStr();

  /**
   * Get the length of the string 
   * @contract <length><> ---> <void>
   */
  void length();

  /**
   * Insert a char in a specific position
   * @contract <insert><int><char> ---> <void>
   * 
   * @param index 
   * @param string 
   */
  void insert(int index,char nStr);

  /**
   * 
   * @contract <equal><String> ---> <>
   * @param userStr 
   */
  void equal(String userStr);

  /**
   * It will get a specific char on a position.
   * @contract <get><int> ---> <void>
   * 
   * @param index 
   */
  void get(int index);

  /**
   * It will sustract 2 strings  
   * @contract <sustract><> ---> <void>
   * 
   */
  void sustract(string userStr);


};

#endif