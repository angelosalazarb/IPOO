#include "Pension.h"
#include <string>
using namespace std;

Pension::Pension(){
  age = 0;
  gender = "";
  pension = "";

}

Pension::Pension(int nAge, string nGender){
  age = nAge;
  gender = nGender;
}

Pension::~Pension(){}

int Pension::getAge(){
  return age;
}

string Pension::getGender(){
  return gender;
}

void Pension::setAge(int nAge){
  age = nAge;
}

void Pension::setGender(string nGender){
  gender = nGender;
}

string Pension::getPension(){
  if(age >= 60 && gender == "M"){
    return "true";
  }

  else if(age >= 54 && gender == "F"){
    return "true";
  }
  else{
    return "false";
  }

}