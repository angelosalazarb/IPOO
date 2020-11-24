/**
 * @file Hourly.h
 * @author Ángelo Salazar (angelo.salazar@correounivalle.edu.co)
 * @version 0.1
 * @date 2020-15-13
 */
#ifndef HOURLY_H_
#define HOURLY_H_

#include "../header/Staff.h"

#include <string>
using namespace std;

class Hourly : public Staff{
  private:

  public:

  Hourly();

  Hourly(string);

  Hourly(string, string);
  
  Hourly(string, string, int);

  void setSalary(int nSalary) override;
  
};

#endif