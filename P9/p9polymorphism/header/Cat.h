/**
 * @file Cat.h
 * @author Ángelo Salazar (angelo.salazar@correounivalle.edu.co)
 * @version 0.1
 * @date 2020-20-13
 */
#ifndef CAT_H_
#define CAT_H_
#include "../header/Animal.h"

#include <string>
using namespace std;

class Cat : public Animal{
  private:
  string breed;

  public:
  
  /**
   * Construct a new Cat object
   * @contract <Cat><> ---> <obj>
   * 
   **/
  Cat();

  /**
   * Construct a new Cat object
   * @contract <Animal><str> ---> <obj>
   * 
   * @param breed 
   **/
  Cat(string breed);

  /**
   * Construct a new Cat object
   * @contract <Animal><str><bool> ---> <obj>
   * 
   * @param nType 
   * @param nLive 
   **/
  Cat(string nType, bool nLive);

  /**
   * Construct a new Cat object
   * @contract <Animal><str><str> ---> <obj>
   * 
   * @param nSound 
   * @param nMove 
   **/
  Cat(string nSound, string nMove);

  /**
   * Destroy the Cat object
   * @contract <><> ---> <>
   * 
   **/
  ~Cat();

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

