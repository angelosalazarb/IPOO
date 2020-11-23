/**
 * @file Bee.h
 * @author Ángelo Salazar (angelo.salazar@correounivalle.edu.co)
 * @version 0.1
 * @date 2020-20-13
 */
#ifndef CAT_H_
#define CAT_H_
#include "../header/Animal.h"

#include <string>
using namespace std;

class Bee : public Animal{
  private:
  string honey;

  public:
  
  /**
   * Construct a new Bee object
   * @contract <Bee><> ---> <obj>
   * 
   **/
  Bee();

  /**
   * Construct a new Bee object
   * @contract <Animal><str> ---> <obj>
   * 
   * @param honey 
   **/
  Bee(string honey);

  /**
   * Construct a new Bee object
   * @contract <Animal><str><bool> ---> <obj>
   * 
   * @param nType 
   * @param nLive 
   **/
  Bee(string nType, bool nLive);

  /**
   * Construct a new Bee object
   * @contract <Animal><str><str> ---> <obj>
   * 
   * @param nSound 
   * @param nMove 
   **/
  Bee(string nSound, string nMove);

  /**
   * Destroy the Bee object
   * @contract <><> ---> <>
   * 
   **/
  ~Bee();

  /**--** getters and setter **--**/

  /**
   * Get the honey of the object
   * @contract <getHoney><void> ---> <str>
   * 
   * @return string 
   **/
  string getHoney(void);

  /**
   * Set the honey of the object
   * @contract <setHoney><str> ---> <void>
   * 
   * @param nHoney 
   **/
  void setHoney(string nHoney);
  
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