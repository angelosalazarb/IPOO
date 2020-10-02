
/**
 * @file Sell.h
 * @author Ángelo Salazar (angelo.salazar@correounivalle.edu.co)
 * This program will define the comission that a employeer will get for a sell.
 * @version 0.1
 * @date 2020-09-07
 */

#ifndef SELL_H_
#define SELL_H_
#include <string>
using namespace std;

class Sell{
  private:
    string name;
    int category;
    string charge;
    
    int sell;
    string comission;
    int earn;

    /**
     * Set the Earn of the employee  
     * @contract <setEarn><int> ---> <void>
     * 
     * @param vEarn the value of earning for its sell
     */
    void setEarn(int vEarn);

    /**
     * Set the Comission of the employee
     * @contract <setComission><str> ---> <void>
     * 
     * @param nComission the value of the comission corresponding to its category
     */
    void setComission(string nComission);
  
  public:
    Sell();
    ~Sell();

    /**
     * Get the Name of the employee
     * @contract <getName><> ---> <str>
     * 
     * @return string 
     */
    string getName();
    
    /**
     * Set the Name of the employee 
     * @contract <setName><str> ---> <void>
     * 
     * @param nName the name of the employee
     */
    void setName(string nName);

    /**
     * Get the Category of the employee
     * @contract <getCategory><> ---> <int>
     * 
     * @return int 
     */
    int getCategory();

    /**
     * Set the Category of the employee 
     * @contract <setCategory><int> ---> <void>
     * 
     * @param nCat represents the category of the employee
     */
    void setCategory(int nCat);

    /**
     * Get the Charge of the employee
     * @contract <getCharge><> ---> <str>
     * 
     * @return string 
     */
    string getCharge();

    /**
     * Set the Charge of the employee 
     * @contract <setCharge><str> ---> <void>
     * 
     * @param nCharge 
     */
    void setCharge(string nCharge);

    /**
     * Get the Sell of the employee
     * @contract <getSell><> ---> <int>
     * 
     * @return int 
     */
    int getSell();

    /**
     * Set the Sell of the object employee
     * @contract <setSell><int> ---> <void>
     * 
     * @param vSell value of the sell
     */
    void setSell(int vSell);

    /**
     * Get the Comission of the object
     * @contract <getComission><> ---> <string>
     * 
     * @return string 
     */
    string getComission();

    /**
     * Get the Earn of the object
     * @contract <getEarn><> ---> <int>
     * 
     * @return int 
     */
    int getEarn();



};

#endif
