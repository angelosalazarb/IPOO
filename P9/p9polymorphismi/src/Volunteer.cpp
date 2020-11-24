#include "../header/Volunteer.h"
#include "../header/Staff.h"

#include <string>
using namespace std;

Volunteer::Volunteer(){}

Volunteer::Volunteer(string nName):Staff(nName){

}

Volunteer::Volunteer(string nName, string nCharge):Staff(nName,nCharge){

}

Volunteer::Volunteer(string nName, string nCharge, int nSalary):Staff(nName,nCharge,nSalary){

}

Volunteer::~Volunteer(){}

void Volunteer::setSalary(int nSalary){
  this-> salary = nSalary;
}