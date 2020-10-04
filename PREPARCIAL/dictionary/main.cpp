#include "Dictionary.h"
#include <iostream>
using namespace std;

int main(){
  Dictionary obj1;
  /*obj1.fill();
  obj1.print();
  obj1.fields();
  obj1.getValue("Puntuacion");
  obj1.setValue("Goles", "150");
  obj1.print();*/

  Dictionary employee;
  employee.fill();
  employee.print();
  employee.isInField("nombre", "Juan");
}