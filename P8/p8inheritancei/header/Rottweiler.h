/**
 * @file RottweilerHUAHUA.h
 * @author Ángelo Salazar (angelo.salazar@correounivalle.edu.co)
 * @version 0.1
 * @date 2020-15-13
 */
#ifndef ROTTWEILER_H_
#define ROTTWEILER_H_

#include "../header/Dog.h"
#include <string>
using namespace std;

class Rottweiler:public Dog{
  private:
  string type;
  bool isObedient, isStrong;

  /**
   * Construct a new Rottweiler object
   * @contract <Rottweiler><> ---> <obj>
   * @see Rottweiler(string, string, int)
   **/
  Rottweiler();
  
  public:
  
  /**
   * Construct a new Rottweiler object
   * @contract <Rottweiler><str> ---> <obj>
   * 
   * @param name 
   **/
  Rottweiler(string name);

  /**
   * Construct a new Rottweiler object
   * @contract <Rottweiler><str> ---> <obj>
   * 
   * @param name 
   **/
  Rottweiler(string name, string type);

  /**
   * Construct a new Rottweiler object
   * @contract <Rottweiler><str><str><int> ---> <obj>
   * 
   * @param name 
   * @param type 
   * @param age 
   **/
  Rottweiler(string name, string type, int age);

  ~Rottweiler();

  /**--** getters and setters **-**/

  /**
   * Get the Type of the Rottweiler
   * @contract <getType><void> ---> <string>
   * 
   * @return string 
   **/
  string getType(void);

  /**
   * Set the Type of the Rottweiler
   * @contract <setType><str> ---> <void>
   * 
   * @param nType 
   **/
  void setType(string nType);

  /**
   * Get the Is Obedient of the Rottweiler
   * @contract <getIsObedient><void> ---> <void>
   * 
   * @return true 
   * @return false 
   **/
  bool getIsObedient(void);

  /**
   * Get the Is Strong of the Rottweiler
   * @contract <getIsStrong><void> ---> <bool>
   * 
   * @return true 
   * @return false 
   **/
  bool getIsStrong(void);

  /**
   * Set the Is Strong of the Rottweiler
   * @contract <setIsStrong><bool> ---> <void>
   * 
   **/
  void setIsStrong(bool);

  /**
   * Set the Is Obedient of the Rottweiler
   * @contract <setIsObedient><bool> ---> <void>
   * 
   **/
  void setIsObedient(bool);
};
#endif 
