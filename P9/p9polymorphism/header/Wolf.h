/**
 * @file Wolf.h
 * @author Ángelo Salazar (angelo.salazar@correounivalle.edu.co)
 * @version 0.1
 * @date 2020-20-13
 */
#ifndef WOLF_H_
#define WOLF_H_
#include "../header/Animal.h"

#include <string>
using namespace std;

class Wolf : public Animal{
  private:
  string breed;

  public:
  
  /**
   * Construct a new Wolf object
   * @contract <Wolf><> ---> <obj>
   * 
   **/
  Wolf();

  /**
   * Construct a new Wolf object
   * @contract <Animal><str> ---> <obj>
   * 
   * @param breed 
   **/
  Wolf(string breed);

  /**
   * Construct a new Wolf object
   * @contract <Animal><str><bool> ---> <obj>
   * 
   * @param nType 
   * @param nLive 
   **/
  Wolf(string nType, bool nLive);

  /**
   * Construct a new Wolf object
   * @contract <Animal><str><str> ---> <obj>
   * 
   * @param nSound 
   * @param nMove 
   **/
  Wolf(string nSound, string nMove);

  /**
   * Destroy the Wolf object
   * @contract <><> ---> <>
   * 
   **/
  ~Wolf();

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