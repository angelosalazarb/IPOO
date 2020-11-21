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
  double first, second, third, result;

  public:

  /**
   * Construct a new Functions object
   * @contract <Functions><> ---> <obj>
   * 
   */
  Functions();

  /**
   * Construct a new Functions object
   * @contract <Functions><double><double><double> ---> <obj>
   * 
   * @param first 
   * @param second 
   * @param third 
   */
  Functions(double first, double second, double third=0);

  /**
   * Destroy the Functions object
   * @contract <~Functions><> ---> <>
   * 
   */
  ~Functions();

  /**--** getters and setters **--**/

  /**
   * Get the First of the object
   * @contract <getFirst><> ---> <double>
   * 
   * @return double 
   */
  double getFirst();
  
  /**
   * Get the Second of the object
   * @contract <getSecond><> ---> <double>
   * @return double 
   **/
  double getSecond();
  
  /**
   * Get the Third of the object
   * @contract <getThird><> ---> <>
   * 
   * @return double 
   **/
  double getThird();
  
  /**
   * Set the First of the object
   * @contract <setFirst><double> ---> <void>
   * 
   * @param first 
   **/
  void setFirst(double first);
  /**
   * Set the second of the object
   * @contract <setSecond><double> ---> <void>
   * 
   * @param second 
   **/
  void setSecond(double second);

  /**
   * Set the Third of the object
   * @contract <setThird><double> ---> <void>
   * 
   * @param third 
   **/
  void setThird(double third);

  /**--** other methods **--**/

  /**
   * This function recives the values by value 
   * @contract <><> ---> <>
   * 
   **/
  double valFunction(double first, double second);

  /**
   * This function recives the values by reference
   * @contract <><> ---> <>
   * 
   **/
  double refFunction(double& rfirst, double& rsecond);

  /**
   * 
   * @contract <><> ---> <>
   * 
   **/
  double mixFunction(double first, double& rsecond);


  /**
   * This will add the first and the second value
   * @contract <add><double><double><double> ---> <double>
   * 
   * @param first 
   * @param second 
   * @param third 
   **/
  void add(double& first, double second, double third=0);

  /**
   * This will substract the first and the second value
   * @contract <sub><double><double><double> ---> <double>
   * 
   * @param first 
   * @param second 
   * @param third 
   **/
  void sub(double& first, double second, double third=0);


};

#endif