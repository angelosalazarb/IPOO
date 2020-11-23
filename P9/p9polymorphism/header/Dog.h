/**
 * @file Dog.h
 * @author Ángelo Salazar (angelo.salazar@correounivalle.edu.co)
 * @version 0.1
 * @date 2020-20-13
 */
#ifndef DOG_H_
#define DOG_H_
#include "../header/Animal.h"

#include <string>
using namespace std;

class Dog : public Animal{
  private:
  string breed;

  public:
  
  /**
   * Construct a new Dog object
   * @contract <Dog><> ---> <obj>
   * 
   **/
  Dog();

  /**
   * Construct a new Dog object
   * @contract <Animal><str> ---> <obj>
   * 
   * @param breed 
   **/
  Dog(string breed);

  /**
   * Construct a new Dog object
   * @contract <Animal><str><bool> ---> <obj>
   * 
   * @param nType 
   * @param nLive 
   **/
  Dog(string nType, bool nLive);

  /**
   * Construct a new Dog object
   * @contract <Animal><str><str> ---> <obj>
   * 
   * @param nSound 
   * @param nMove 
   **/
  Dog(string nSound, string nMove);

  /**
   * Destroy the Dog object
   * @contract <><> ---> <>
   * 
   **/
  ~Dog();

  /**--** getters and setter **--**/

  /**
   * Get the Breed of the object
   * @contract <getBreed><void> ---> <str>
   * 
   * @return string 
   **/
  string getBreed(void);

  /**
   * Set the Breed of the object
   * @contract <setBreed><str> ---> <void>
   * 
   * @param nBreed 
   **/
  void setBreed(string nBreed);
  
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