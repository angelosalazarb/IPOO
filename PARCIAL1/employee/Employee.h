/**
 * @file Employee.h
 * @author Ángelo Salazar (angelo.salazar@correounivalle.edu.co)
 * @version 0.1
 * @date 2020-10-05
 */

/** This class will create an enterprise database of its employees and say what is it rol in the enterprise**/


#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
#include <string>
using namespace std;

class Employee
{
private:
  string name;
  string rol;
  string ubication;

  double salary;

  /**
   * Set the Salary of the employee 
   * @contract <setSalary><double> ---> <void>
   * 
   * @param salary 
   */
  void setSalary(double salary);

public:
  /**
   * Construct a new Employee object
   * @contract <Employee><> ---> <obj>
   * @see Employee(string nRol, string nName, double nSalary, string nUbication)
   */
  Employee();

  /**
   * Construct a new Employee object
   * @contract <Employee><> ---> <obj>
   * 
   * @param nRol is the new rol of the employee
   * @param nName  is the new name of the employee 
   * @param nSalary is the salary of the employee
   * @param nUbication is the ubication of the employee
   */
  Employee(string nRol, string nName, string nUbication);

  /**
   * Construct a new Employee object
   * @contract <><> ---> <>
   * 
   * @param aEmployee is a object of Employee type
   
  Employee(aEmployee);
  */
  /**
   * Destroy the Employee object
   * @contract <~Employee><> ---> <>
   * 
   */
  ~Employee();

  /**--** getters and setters **--**/

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
   * @param nName is the name
   */
  void setName(string nName);

  /**
   * Get the Rol of the employee
   * @contract <getRol><> ---> <str>
   * 
   * @return string 
   */
  string getRol();

  /**
   * Set the Rol of the employee 
   * @contract <setRol><str> ---> <void>
   * 
   * @param nRol is the rol of the employee
   */
  void setRol(string nRol);

  /**
   * Get the Ubication of the employee
   * @contract <getUbication><> ---> <str>
   * 
   * @return string 
   */
  string getUbication();

  /**
   * Set the Ubication of the employee 
   * @contract <setUbication><str> ---> <void>
   * 
   * @param nUbication 
   */
  void setUbication(string nUbication);

  /**
   * Get the Salary of the employee
   * @contract <getSalary><str> ---> <double>
   * 
   * @param rol 
   * @return double 
   */
  double getSalary();


  //**--** other methods **--**//

  void isInUbication(Employee aEmployee);

  void pay(Employee aEmployee);

  void vehicle(string action);  

  void openDoor();

  void closeDoor();
  
  void setSalaryEmployee(Employee aEmployee);
};



#endif
