/**
 * @file ChihuahuaHUAHUA.h
 * @author Ángelo Salazar (angelo.salazar@correounivalle.edu.co)
 * @version 0.1
 * @date 2020-15-13
 */
#ifndef CHIHUAHUA_H_
#define CHIHUAHUA_H_

#include "../header/Dog.h"
#include <string>
using namespace std;

class Chihuahua:public Dog{
  private:
  string type;

  /**
   * Construct a new Chihuahua object
   * @contract <Chihuahua><> ---> <obj>
   * @see Chihuahua(string, string, int)
   **/
  Chihuahua();
  
  public:
  
  /**
   * Construct a new Chihuahua object
   * @contract <Chihuahua><str> ---> <obj>
   * 
   * @param name 
   **/
  Chihuahua(string name);

  /**
   * Construct a new Chihuahua object
   * @contract <Chihuahua><str> ---> <obj>
   * 
   * @param name 
   **/
  Chihuahua(string name, string type);

  /**
   * Construct a new Chihuahua object
   * @contract <Chihuahua><str><str><int> ---> <obj>
   * 
   * @param name 
   * @param type 
   * @param age 
   **/
  Chihuahua(string name, string type, int age);

  ~Chihuahua();

  /**--** getters and setters **-**/

  /**
   * Get the Type of the chihuahua
   * @contract <getType><void> ---> <string>
   * 
   * @return string 
   **/
  string getType();

  /**
   * Set the Type of the chihuahua
   * @contract <setType><str> ---> <void>
   * 
   * @param nType 
   **/
  void setType(string nType);

};
#endif 
