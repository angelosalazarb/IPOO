/**
 * @file Coin.h
 * @author Ángelo Salazar (angelo.salazar@correounivalle.edu.co)
 * This program will determine if a coin is dropped and giving an random number it will give face or seal 
 * we determine if its a pair number we get  a face.
 * @version 0.1
 * @date 2020-09-06
 * 
 */

#ifndef COIN_H_
#define COIN_H_
#include <string>
using namespace std;

class Coin{
private:
 int number;
 string answer;

 /**
  * Set the Answer of the drop of the coin 
  * @contract <setAnswer><str> ---> <>
  * 
  * @return void 
  */
 void setAnswer(string nAnswer);

public:
  Coin();
  ~Coin();

  /**
   * Get the Number of the object
   * @contract <getnumber><> ---> <int>
   * 
   * @return int 
   */
  int getNumber();

  /**
   * Set the Number of the object 
   * @contract <setNumber><int> ---> <int>
   * 
   * @param nNumber 
   */
  void setNumber(int nNumber);

  /**
   * Get the Answer of the object
   * @contract <getAnswer><> ---> <str>
   * 
   * @return string 
   */
  string getAnswer();
  
};






#endif