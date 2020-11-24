/**
 * @file Executive.h
 * @author Ángelo Salazar (angelo.salazar@correounivalle.edu.co)
 * @version 0.1
 * @date 2020-15-13
 */
#ifndef EXECUTIVE_H_
#define EXECUTIVE_H_

#include "../header/Staff.h"

#include <string>
using namespace std;

class Executive : public Staff{
  private:

  public:

  Executive();

  Executive(string);

  Executive(string, string);
  
  Executive(string, string, int);

  ~Executive();

  void setSalary(int nSalary) override;
  
};

#endif