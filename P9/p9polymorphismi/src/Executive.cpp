#include "../header/Executive.h"
#include "../header/Staff.h"

#include <string>
using namespace std;

Executive::Executive(){}

Executive::Executive(string nName):Staff(nName){

}

Executive::Executive(string nName, string nCharge):Staff(nName,nCharge){

}

Executive::Executive(string nName, string nCharge, int nSalary):Staff(nName,nCharge,nSalary){

}

Executive::~Executive(){}

void Executive::setSalary(int nSalary){
  this-> salary = nSalary;
}