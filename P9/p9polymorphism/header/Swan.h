/**
 * @file Swan.h
 * @author Ángelo Salazar (angelo.salazar@correounivalle.edu.co)
 * @version 0.1
 * @date 2020-20-13
 */
#ifndef SWAN_H_
#define SWAN_H_
#include "../header/Animal.h"

#include <string>
using namespace std;

class Swan : public Animal{
  private:
  string size;

  public:
  
  /**
   * Construct a new Swan object
   * @contract <Swan><> ---> <obj>
   * 
   **/
  Swan();

  /**
   * Construct a new Swan object
   * @contract <Animal><str> ---> <obj>
   * 
   * @param size 
   **/
  Swan(string size);

  /**
   * Construct a new Swan object
   * @contract <Animal><str><bool> ---> <obj>
   * 
   * @param nType 
   * @param nLive 
   **/
  Swan(string nType, bool nLive);

  /**
   * Construct a new Swan object
   * @contract <Animal><str><str> ---> <obj>
   * 
   * @param nSound 
   * @param nMove 
   **/
  Swan(string nSound, string nMove);

  /**
   * Destroy the Swan object
   * @contract <><> ---> <>
   * 
   **/
  ~Swan();

  /**--** getters and setter **--**/

  /**
   * Get the size of the object
   * @contract <getColor><void> ---> <str>
   * 
   * @return string 
   **/
  string getColor(void);

  /**
   * Set the size of the object
   * @contract <setColor><str> ---> <void>
   * 
   * @param nSize 
   **/
  void setColor(string nSize);
  
  /**--** inheritance methods **--**/

  /**
   * Get the sound of the animal from Animal
   * @contract <makeSound><void> ---> <string>
   * 
   * @return string 
   **/
  string makeSound(void) override;

  /**
   * Get the movement of the animal from Animal
   * @contract <move><void> ---> <string>
   * 
   * @return string 
   **/
  string move(void) override;
};

#endif