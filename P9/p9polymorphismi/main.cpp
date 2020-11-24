#include "header/Staff.h"
#include "header/Executive.h"
#include "header/Employee.h"
#include "header/Volunteer.h"
#include "header/Hourly.h"

#include <iostream>
#include <string>
using namespace std;

int main(){
  
  Staff personnel;
  personnel.consoleFill();
  cout << personnel.payday() << endl;

  return 0;

}