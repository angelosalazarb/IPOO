#include "../header/Executive.h"

#include <string>
using namespace std;

Executive::Executive(){}

Executive::Executive(string nName):Staff(nName){

}

Executive::Executive(string nName, string nCharge):Staff(nName,nCharge){

}

Executive::Executive(string nName, string nCharge, int nSalary):Staff(nName,nCharge,nSalary){

}

void Executive::setSalary(int nSalary){
  this-> salary = 3000000;
}