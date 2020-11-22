/**
 * @file CollieHUAHUA.h
 * @author Ángelo Salazar (angelo.salazar@correounivalle.edu.co)
 * @version 0.1
 * @date 2020-15-13
 */
#ifndef COLLIE_H_
#define COLLIE_H_

#include "../header/Dog.h"
#include <string>
using namespace std;

class Collie:public Dog{
  private:
  string type;
  bool isLoyalty;

  /**
   * Construct a new Collie object
   * @contract <Collie><> ---> <obj>
   * @see Collie(string, string, int)
   **/
  Collie();
  
  public:
  
  /**
   * Construct a new Collie object
   * @contract <Collie><str> ---> <obj>
   * 
   * @param name 
   **/
  Collie(string name);

  /**
   * Construct a new Collie object
   * @contract <Collie><str> ---> <obj>
   * 
   * @param name 
   **/
  Collie(string name, string type);

  /**
   * Construct a new Collie object
   * @contract <Collie><str><str><int> ---> <obj>
   * 
   * @param name 
   * @param type 
   * @param age 
   **/
  Collie(string name, string type, int age);

  ~Collie();

  /**--** getters and setters **-**/

  /**
   * Get the Type of the Collie
   * @contract <getType><void> ---> <string>
   * 
   * @return string 
   **/
  string getType(void);

  /**
   * Set the Type of the Collie
   * @contract <setType><str> ---> <void>
   * 
   * @param nType 
   **/
  void setType(string nType);

  /**
   * Get the Is Loyal of the Collie
   * @contract <getIsLoyal><void> ---> <bool>
   * 
   * @return true 
   * @return false 
   **/
  bool getIsLoyal(void);

  /**
   * Set the Is Loyal of the Collie
   * @contract <setIsLoyal><bool> ---> <void>
   * 
   **/
  void setIsLoyal(bool);
};
#endif 
