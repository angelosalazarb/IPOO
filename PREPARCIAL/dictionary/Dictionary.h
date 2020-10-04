/**
 * @file Dictionary.h
 * @author Ángelo Salazar (angelo.salazar@correounivalle.edu.co)
 * @version 0.1
 * @date 2020-10-03
 */
#ifndef DICTIONARY_H_
#define DICTIONARY_H_
#include <string>
using namespace std;

/**Define the class dictionary that will save objects it have fields that store info, workin like a database*/
class Dictionary
{
private:
  
  string field;
  string value;

  string buffer1[10000];
  string buffer2[10000];
  string stop;

  void setField(string nField);


public:
  /**
   * Construct a new Dictionary object
   * @contract <Dictionary><> ---> <obj>
   * @see Dictionary(string nField, string nValue)
   */
  Dictionary();

  /**
   * Construct a new Dictionary object
   * @contract <Dictionary><str><str> ---> <obj>
   * 
   * @param nField is the new field
   * @param nValue is the new value assigned to a field
   */
  Dictionary(string nField, string nValue);

  /**
   * Destroy the Dictionary object
   * @contract <><> ---> <>
   * 
   */
  ~Dictionary();

  /**--** getters and setter **--**/

  /**
   * Get the Field of the object
   * @contract <><> ---> <>
   * 
   * @return string 
   */
  string getField();

  string getValue(string field);

  void setValue(string field,string nValue);

  /**--** others methods **--**/

  void fill();

  void print();

  void fields();

  void lookUp();

  void setValueInField(string field, string nValue);


};

#endif