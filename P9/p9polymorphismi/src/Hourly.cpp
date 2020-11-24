#include "../header/Hourly.h"
#include "../header/Staff.h"

#include <string>
using namespace std;

Hourly::Hourly(){}

Hourly::Hourly(string nName):Staff(nName){

}

Hourly::Hourly(string nName, string nCharge):Staff(nName,nCharge){

}

Hourly::Hourly(string nName, string nCharge, int nSalary):Staff(nName,nCharge,nSalary){

}

Hourly::~Hourly(){}

void Hourly::setSalary(int nSalary){
  this-> salary = nSalary;
}