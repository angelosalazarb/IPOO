/**
 * @file ChihuahuaHUAHUA.h
 * @author Ángelo Salazar (angelo.salazar@correounivalle.edu.co)
 * @version 0.1
 * @date 2020-15-13
 */
#ifndef CHIHUAHUA_H_
#define CHIHUAHUA_H_

#include "header/Dog.h"
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
   * @contract <><> ---> <>
   * 
   * @param name 
   **/
  Chihuahua(string name);

  Chihuahua(string name, string type, int age);

  ~Chihuahua();

  /**--** getters and setters **-**/

};
#endif 