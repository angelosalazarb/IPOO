#include "Person.h"
#include <string>
using namespace std;

Person::Person(){
	name="";
  lastName="";
  classification="";
  age = 0;
}
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

void Person::setName(string nombreIngresado){
	name = nombreIngresado;
}

void Person::setLastName(string apellidoIngresado){
	lastName = apellidoIngresado;
}

void Person::setAge(int edad){
	age = edad;
}

//Se crea getClassification donde se clasifica en alguna categoria nuestro Person

string Person::getClassification(){
	if(age < 0){
    return "no esta definido.";
	}
	else if((age >= 1) && (age <= 10)){
		return "es un niño.";
	}
	else if ((age > 10) && (age <= 18)){
		return "es un adolescente.";
	}
  else if ((age >= 18 && age < 60)){
		return "es un adulto.";
	}
  else if(age > 60 && age <= 100){
		return "es un adulto de la tercera edad.";
	}
  else{
    return "no esta definido."; 
  }
	
}
