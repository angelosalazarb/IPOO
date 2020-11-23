/**
 * @file Goose.h
 * @author Ángelo Salazar (angelo.salazar@correounivalle.edu.co)
 * @version 0.1
 * @date 2020-20-13
 */
#ifndef GOOSE_H_
#define GOOSE_H_
#include "../header/Animal.h"

#include <string>
using namespace std;

class Goose : public Animal{
  private:
  string color;

  public:
  
  /**
   * Construct a new Goose object
   * @contract <Goose><> ---> <obj>
   * 
   **/
  Goose();

  /**
   * Construct a new Goose object
   * @contract <Animal><str> ---> <obj>
   * 
   * @param color 
   **/
  Goose(string color);

  /**
   * Construct a new Goose object
   * @contract <Animal><str><bool> ---> <obj>
   * 
   * @param nType 
   * @param nLive 
   **/
  Goose(string nType, bool nLive);

  /**
   * Construct a new Goose object
   * @contract <Animal><str><str> ---> <obj>
   * 
   * @param nSound 
   * @param nMove 
   **/
  Goose(string nSound, string nMove);

  /**
   * Destroy the Goose object
   * @contract <><> ---> <>
   * 
   **/
  ~Goose();

  /**--** getters and setter **--**/

  /**
   * Get the color of the object
   * @contract <getColor><void> ---> <str>
   * 
   * @return string 
   **/
  string getColor(void);

  /**
   * Set the color of the object
   * @contract <setColor><str> ---> <void>
   * 
   * @param nColor 
   **/
  void setColor(string nColor);
  
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