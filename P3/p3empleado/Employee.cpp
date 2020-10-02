#include "Employee.h"
#include <string>
#include <iostream>
using namespace std;

Employee::Employee(){
  name = "";
  calification = "";
  num = 0;
}

Employee::~Employee(){}

string Employee::getName(){
  return name;
}

void Employee::setName(string nName){
  name = nName;
}

string Employee::getCalification(){
if(calification == "A" || calification == "a"){
  return "aceptable";
}

else if(calification == "B" || calification == "b"){
  return "buena";
}

else if(calification == "E" || calification == "e"){
  return "excelente";
}

else{
  return "no se clasifico";
}


}

void Employee::setCalification(string nCalif){
  calification = nCalif;
}

