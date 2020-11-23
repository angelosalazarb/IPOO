/**
 * @file Donkey.h
 * @author Ángelo Salazar (angelo.salazar@correounivalle.edu.co)
 * @version 0.1
 * @date 2020-20-13
 */
#ifndef DONKEY_H_
#define DONKEY_H_
#include "../header/Animal.h"

#include <string>
using namespace std;

class Donkey : public Animal{
  private:
  int age;

  public:
  
  /**
   * Construct a new Donkey object
   * @contract <Donkey><> ---> <obj>
   * 
   **/
  Donkey();

  /**
   * Construct a new Donkey object
   * @contract <Animal><int> ---> <obj>
   * 
   * @param age 
   **/
  Donkey(int age);

  /**
   * Construct a new Donkey object
   * @contract <Animal><str><bool> ---> <obj>
   * 
   * @param nType 
   * @param nLive 
   **/
  Donkey(string nType, bool nLive);

  /**
   * Construct a new Donkey object
   * @contract <Animal><str><str> ---> <obj>
   * 
   * @param nSound 
   * @param nMove 
   **/
  Donkey(string nSound, string nMove);

  /**
   * Destroy the Donkey object
   * @contract <><> ---> <>
   * 
   **/
  ~Donkey();

  /**--** getters and setter **--**/

  /**
   * Get the age of the object
   * @contract <getAge><void> ---> <int>
   * 
   * @return int 
   **/
  int getAge(void);

  /**
   * Set the age of the object
   * @contract <setAge><int> ---> <void>
   * 
   * @param nAge 
   **/
  void setAge(int nAge);
  
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