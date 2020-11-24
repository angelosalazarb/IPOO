/**
 * @file Staff.h
 * @author Ángelo Salazar (angelo.salazar@correounivalle.edu.co)
 * @version 0.1
 * @date 2020-15-13
 */
#ifndef STAFF_H_
#define STAFF_H_

#include <string>
#include <vector>
using namespace std;

class Staff{
  private:
    

  protected:
  vector<Staff*> staffList;

  public:
  string name, charge;
  int salary, pay;

  /**
   * Construct a new Staff Staff
   * @contract <Staff><> ---> <obj>
   * 
   **/
  Staff();

  /**
   * Construct a new Staff Staff
   * @contract <Staff><str> ---> <Obj>
   * @param nName 
   **/
  Staff(string nName);

  /**
   * Construct a new Staff Staff
   * @contract <Staff><str><bool> ---> <Obj>
   * 
   * @param name 
   * @param charge 
   **/
  Staff(string nName, string nCharge);

  /**
   * Construct a new Staff object
   * @contract <Staff><str><str><int> ---> <obj>
   * 
   * @param nName 
   * @param nCharge 
   * @param nSalary
   **/
  Staff(string nName, string nCharge, int nSalary);


  /**
   * Destroy the Staff Staff
   * @contract <~Staff><Obj> ---> <>
   **/
  ~Staff();

  /**-** getters and setters **--**/
  
  /**
   * Get the Name of the object
   * @contract <getName><void> ---> <str>
   * 
   * @return string 
   **/
  string getName(void);

  /**
   * Get the Charge of the object
   * @contract <getCharge><void> ---> <str>
   * 
   * @return string 
   **/
  string getCharge(void);

  /**
   * Get the Salary of the object
   * @contract <getSalary><void> ---> <str>
   * 
   * @return int 
   **/
  virtual int getSalary(void);

  /**
   * Get the Pay of the object
   * @contract <getPay><void> ---> <str>
   * 
   * @return int 
   **/
  int getPay(void);

  /**
   * Set the Name of the object
   * @contract <setName><str> ---> <void>
   * 
   * @param nName 
   **/
  void setName(string nName);
  
  /**
   * Set the Charge of the object
   * @contract <setCharge><str> ---> <void>
   * 
   * @param nCharge 
   **/
  void setCharge(string nCharge);

  /**
   * Set the Salary of the object
   * @contract <setSalary><int> ---> <void>
   * 
   * @param nSalary 
   **/
  virtual void setSalary(int nSalary);

  /**
   * Set the Pay of the object
   * @contract <setPay><int> ---> <void>
   * 
   * @param nPay 
   **/
  void setPay(int nPay);

  /**--** other methods **--**/

  string payday(void);

  void consoleFill();

};

#endif