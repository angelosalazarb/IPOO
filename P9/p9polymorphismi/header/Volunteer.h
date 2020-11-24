/**
 * @file Volunteer.h
 * @author Ángelo Salazar (angelo.salazar@correounivalle.edu.co)
 * @version 0.1
 * @date 2020-15-13
 */
#ifndef VOLUNTEER_H_
#define VOLUNTEER_H_

#include "../header/Staff.h"

#include <string>
using namespace std;

class Volunteer : public Staff{
  private:

  public:

  Volunteer();

  Volunteer(string);

  Volunteer(string, string);
  
  Volunteer(string, string, int);

  ~Volunteer();

  void setSalary(int nSalary) override;
  
};

#endif