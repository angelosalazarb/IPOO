#include "../header/Employee.h"

#include <string>
using namespace std;

Employee::Employee(){}

Employee::Employee(string nName):Staff(nName){

}

Employee::Employee(string nName, string nCharge):Staff(nName,nCharge){

}

Employee::Employee(string nName, string nCharge, int nSalary):Staff(nName,nCharge,nSalary){

}

void Employee::setSalary(int nSalary){
  this-> salary = 1200000;
}