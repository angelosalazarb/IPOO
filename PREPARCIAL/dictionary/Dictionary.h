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

  /**
   * Set the Field of the object 
   * @contract <setField><str> ---> <void>
   * Private because field can  not be changed
   * @param nField is the new field
   */
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
   * @contract <~Dictionary><> ---> <>
   * 
   */
  ~Dictionary();

  /**--** getters and setter **--**/

  /**
   * Get the Value of the object
   * @contract <getValue><str> ---> <str>
   * 
   * @param field 
   * @return string 
   */
  string getValue(string field);

  /**
   * Set the Value of the object 
   * @contract <setValue><str><str> ---> <void>
   * 
   * @param field 
   * @param nValue 
   */
  void setValue(string field,string nValue);

  /**--** others methods **--**/

  /**
   * Get the fields and values giving by the user and save it
   * @contract <fill><> ---> <void>
   * 
   */
  void fill();

  /**
   * Print the dictionary created by the user
   * @contract <print><> ---> <void>
   * 
   */
  void print();

  /**
   * Count how many fields are in the dictionary
   * @contract <fields><> ---> <void>
   * 
   */
  void fields();

  /**
   * Search for a value in a field and return a boolean;
   * @contract <isInField><str><str> ---> <void>
   * 
   * @param field is the field
   * @param value is the value for search
   */
  void isInField(string field, string value);

};

#endif