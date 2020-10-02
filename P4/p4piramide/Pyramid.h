/**
 * @file Pyramid.h
 * @author Ángelo Salazar (angelo.salazar@correounivalle.edu.co)
 * @version 0.1
 * @date 2020-09-20
 */

#ifndef PYRAMID_H_
#define PYRAMID_H_
#include <string>
using namespace std;

class Pyramid
{
private:
  int alture;
  string draw;

  /**
   * Set the Draw of the object 
   * @contract <setDraw><str> ---> <void>
   * 
   * @param newDraw is the draw of a pyramid
   */
  void setDraw(string newDraw);
  
public:
  /**
   * Construct a new Pyramid object
   * @contract <Pyramid><> ---> <object>
   * @see Pyramid(int nAlture);
   */
  Pyramid();

  /**
   * Construct a new Pyramid object
   * @contract <Pyramid><int> ---> <object>
   * 
   * @param nAlture is the alture of the pyramid
   */
  Pyramid(int nAlture);

  /**
   * Destroy the Pyramid object
   * @contract <~Pyramid><object> ---> <>
   * 
   */
  ~Pyramid();

  /**--** Getters and Setters **--**/

  /**
   * Get the Alture of the pyramid
   * @contract <getAlture><> ---> <int>
   * 
   * @return int 
   */
  int getAlture();

  /**
   * Set the Alture of the pyramid 
   * @contract <setAlture>str> ---> <void>
   * 
   */
  void setAlture(int nAlture);

  /**
   * Get the Draw of the pyramid
   * @contract <getDraw><> ---> <str>
   * 
   * @return string 
   */
  string getDraw();

};

#endif