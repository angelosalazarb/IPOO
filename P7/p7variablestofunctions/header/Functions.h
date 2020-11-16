/**
 * @file Functions.h
 * @author Ángelo Salazar (angelo.salazar@correounivalle.edu.co)
 * @version 0.1
 * @date 2020-11-13
 */

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

class Functions{

  private:
  int first, second, third;

  public:

  /**
   * Construct a new Functions object
   * @contract <Functions><> ---> <obj>
   * 
   */
  Functions();

  /**
   * Construct a new Functions object
   * @contract <Functions><int><int><int> ---> <obj>
   * 
   * @param first 
   * @param second 
   * @param third 
   */
  Functions(int first, int second, int third);

  /**
   * Destroy the Functions object
   * @contract <~Functions><> ---> <>
   * 
   */
  ~Functions();

  /**--** getters and setters **--**/

  /**
   * Get the First of the object
   * @contract <getFirst><> ---> <int>
   * 
   * @return int 
   */
  int getFirst();
  
  /**
   * Get the Second of the object
   * @contract <getSecond><> ---> <int>
   * @return int 
   **/
  int getSecond();
  
  /**
   * Get the Third of the object
   * @contract <getThird><> ---> <>
   * 
   * @return int 
   **/
  int getThird();
  
  /**
   * Set the First of the object
   * @contract <setFirst><int> ---> <void>
   * 
   * @param first 
   **/
  void setFirst(int first);
  /**
   * Set the second of the object
   * @contract <setSecond><int> ---> <void>
   * 
   * @param second 
   **/
  void setSecond(int second);

  /**
   * Set the Third of the object
   * @contract <setThird><int> ---> <void>
   * 
   * @param third 
   **/
  void setThird(int third);

  /**--** other methods **--**/

  /**
   * This will add the first and the second value
   * @contract <add><int><int><int> ---> <int>
   * 
   * @param first 
   * @param second 
   * @param third 
   **/
  void add(int first, int second, int third);

  /**
   * This will substract the first and the second value
   * @contract <sub><int><int><int> ---> <int>
   * 
   * @param first 
   * @param second 
   * @param third 
   **/
  void sub(int first, int second, int third);

};

#endif