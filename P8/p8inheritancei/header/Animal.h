/**
 * @file Animal.h
 * @author Ángelo Salazar (angelo.salazar@correounivalle.edu.co)
 * @version 0.1
 * @date 2020-15-13
 */
#ifndef ANIMAL_H_
#define ANIMAL_H_

#include <string>
using namespace std;

class Animal{
  private:
    string type;
    bool state, breathe; 
  public:

  /**
   * Construct a new Animal Animal
   * @contract <Animal><> ---> <obj>
   * 
   **/
  Animal();

  /**
   * Construct a new Animal Animal
   * @contract <Animal><str> ---> <Obj>
   * @param type 
   **/
  Animal(string type);

  /**
   * Construct a new Animal Animal
   * @contract <Animal><str><bool><bool> ---> <Obj>
   * 
   * @param type 
   * @param state 
   * @param breathe 
   **/
  Animal(string type, bool state, bool breathe);

  /**
   * Destroy the Animal Animal
   * @contract <~Animal><Obj> ---> <>
   **/
  ~Animal();

  /**--** getters and setter **--**/

  /**
   * Get the Type of the Animal
   * @contract <getType><> ---> <str>
   * @return string 
   **/
  string getType(void);

  /**
   * Set the Type of the Animal
   * @contract <setType><string> ---> <void>
   * @param nType 
   **/
  void setType(string nType);
  
  /**
   * Get the State of the Animal
   * @contract <getState><> ---> <bool>
   * @return true 
   * @return false 
   **/
  bool getState(void);

  /**
   * Set the State of the Animal
   * @contract <setState><bool> ---> <void>
   * @param nState 
   **/
  void setState(bool nState);

  /**
   * Get the Breathe of the Animal
   * @contract <getBreathe><> ---> <>
   * 
   * @param nBreathe 
   * @return true 
   * @return false 
   **/
  bool getBreathe(void);

  /**
   * Set the Breathe state of the animal
   * @contract <getBreathe><bool> ---> <void>
   * 
   **/
  void setBreathe(bool nBreathe);


};

#endif