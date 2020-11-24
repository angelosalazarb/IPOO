#include "../header/Volunteer.h"

#include <string>
using namespace std;

Volunteer::Volunteer(){}

Volunteer::Volunteer(string nName):Staff(nName){

}

Volunteer::Volunteer(string nName, string nCharge):Staff(nName,nCharge){

}

Volunteer::Volunteer(string nName, string nCharge, int nSalary):Staff(nName,nCharge,nSalary){

}

void Volunteer::setSalary(int nSalary){
  this-> salary = 0;
}