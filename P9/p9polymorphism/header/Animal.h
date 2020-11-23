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
    

  public:
  string movement, sound, type;
  bool live;

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
   * @contract <Animal><str><bool> ---> <Obj>
   * 
   * @param type 
   * @param live 
   **/
  Animal(string type, bool live);

  /**
   * Construct a new Animal object
   * @contract <Animal><str><str> ---> <obj>
   * 
   * @param nSound 
   * @param nMove 
   **/
  Animal(string nSound, string nMove);


  /**
   * Destroy the Animal Animal
   * @contract <~Animal><Obj> ---> <>
   **/
  ~Animal();

  /**--** other methods **--**/
  
  /**
   * Print the sound make by the animal
   * @contract <makeSound><void> ---> <void>
   * 
   **/
  virtual string makeSound(void);

  /**
   * Print the movement make by the animal
   * @contract <move><void> ---> <void>
   * 
   **/
  virtual string move(void);

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
   * Get the live of the Animal
   * @contract <getLive><> ---> <bool>
   * @return true 
   * @return false 
   **/
  bool getLive(void);

  /**
   * Set the Live of the Animal
   * @contract <setLive><bool> ---> <void>
   * @param nLive 
   **/
  void setLive(bool nLive);

  /**
   * Get the Move of the Animal
   * @contract <getMove><void> ---> <bool>
   * 
   * @return true 
   * @return false 
   **/
  //virtual string getMove(void);

  /**
   * Set the Move state of the animal
   * @contract <getMove><bool> ---> <void>
   * 
   **/
  //virtual void setMove(string nMove);

  /**
   * Get the Sound of the Animal
   * @contract <getSound><void> ---> <string>
   * 
   * @return true 
   * @return false 
   **/
  //virtual string getSound(void);

  /**
   * Set the Sound state of the animal
   * @contract <getSound><string> ---> <void>
   * 
   **/
  //virtual void setSound(string nSound);



};

#endif