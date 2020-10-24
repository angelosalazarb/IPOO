#include "Employee.h"
#include <iostream>
using namespace std;

int main(){
  Employee vigilante("vigilante", "Andres", "Entrada");
  vigilante.openDoor();
  vigilante.closeDoor();
  cout << "------------" << endl;
  Employee conductor("conductor", "Pedro", "Entrada");
  conductor.vehicle("Encender");
  cout << "------------" << endl;
  Employee jefe("jefe", "Jefferson", "Oficina Gerencia");
  jefe.setSalaryEmployee(vigilante);
  cout << "------------" << endl;
  Employee secretaria("contadora", "Andrea", "Secretaria");
  secretaria.pay(vigilante);
  cout << "------------" << endl;
}