/**
 * @file Employee.h
 * @author Ángelo Salazar (angelo.salazar@correounivalle.edu.co)
 * @version 0.1
 * @date 2020-15-13
 */
#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include "../header/Staff.h"

#include <string>
using namespace std;

class Employee : public Staff{
  private:

  public:

  Employee();

  Employee(string);

  Employee(string, string);
  
  Employee(string, string, int);

  ~Employee();

  void setSalary(int nSalary) override;
  
};

#endif