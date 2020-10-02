
/**
 * @file Employee.h
 * @author Ángelo Salazar (angelo.salazar@correounivalle.edu.co)
 * @version 0.1
 * @date 2020-14-07s
 */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
#include <string>
using namespace std;

/**
* This class will return the calification of a employee
*/
class Employee{
  private:
    string name;
    string calification;
    int num;
  
  public:
    Employee();
    ~Employee();

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
     * @contract <getCategory><> ---> <str>
     * 
     * @return string 
     */
    string getCalification();

    /**
     * Set the Category of the employee 
     * @contract <setCalification><str> ---> <void>
     * 
     * @param nCalif represents the calification of the employee
     */
    void setCalification(string nCalif);

};

#endif
