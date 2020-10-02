#include "Person.h"
#include <string>
#include <iostream>
using namespace std;

Person::Person(){
	name="";
  lastName="";
  classification="";
  age = 0;
}

/*Person::Person(int nAge, string Name, string LastName);{}*/

Person::~Person(){}

string Person::getName(){
  return name;
}

string Person::getLastName(){
  return lastName;
}

int Person::getAge(){
  return age;
}

void Person::setName(string newName){
	name = newName;
}

void Person::setLastName(string newLastName){
	lastName = newLastName;
}

void Person::setAge(int nAge){
	age = nAge;
}

string Person::getClassification(){
	if(age < 0){
    return "no esta definido.";
	}
	else if((age >= 1) && (age <= 10)){
		return "niño";
	}
	else if ((age > 10) && (age <= 18)){
		return "adolescente";
	}
  else if ((age >= 18 && age < 60)){
		return "adulto";
	}
  else if(age >= 60){
		return "adulto mayor";
	}
  else{
    return "no esta definido."; 
  }
}
