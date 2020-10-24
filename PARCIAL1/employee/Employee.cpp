#include "Employee.h"
#include <iostream>
#include <string>
using namespace std;

Employee::Employee(){
  name = "";
  rol = "";
  ubication = "";
  salary = 0;
}

Employee::Employee(string nRol, string nName, string nUbication){
  name = nName;
  rol = nRol;
  ubication = nUbication;
}

Employee::~Employee(){}

string Employee::getName(){  
  return name;
}

void Employee::setName(string nName){
  name = nName;
}

string Employee::getRol(){  
  return rol;
}

void Employee::setRol(string nRol){
  rol = nRol;
}

string Employee::getUbication(){  
  return ubication;
}

void Employee::setUbication(string nUbication){
  ubication = nUbication;
}

double Employee::getSalary(){  
  return salary;
}

void Employee::setSalary(double nSalary){
  salary = nSalary;
}

void Employee::isInUbication(Employee aEmployee){
  string theRol = aEmployee.getRol();
  string theUbication = aEmployee.getUbication();

  if(theRol == "jefe" && theUbication == "Oficina Gerencia"){
    cout << "El jefe se encuentra en la oficina." << endl;
  }

  else if(theRol == "supervisor" && theUbication == "Recepcion"){
    cout << "El supervisor se encuentra en la recepcion." << endl;
  }

  else if(theRol == "vigilante" && theUbication == "Entrada"){
    cout << "El vigilante se encuentra en la entrada." << endl;
  }

  else if(theRol == "contador" && theUbication == "Secretaria"){
    cout << "La contadora se encuentra en la secretaria." << endl;
  }

  else if(theRol == "conductor" && theUbication == "Parqueadero"){
    cout << "El conductor se encuentra en el parqueadero." << endl;
  }

  else{
    cout << "El/La " << theRol << " no se encuentra en la ubicacion por defecto, se encuentra en " << theUbication; 
  }
}
  void Employee::pay(Employee aEmployee){

    string theRol = aEmployee.getRol();
    double theSalary = aEmployee.getSalary();

    cout << getName() << " debe pagar: " << aEmployee.getSalary() << " a " << aEmployee.getName() << " con el cargo de: " << theRol << endl;
  }

  void Employee::vehicle(string action){
    if (action == "Encender"){
      cout << "Vehiculo encendido." << endl;
    }

    else if (action == "Apagar"){
      cout << "Vehiculo apagado." << endl;
    }

    else if (action == "Arrancar"){
      cout << "Andando." << endl;
    }

    else if (action == "Parquear"){
      cout << "Vehiculo parqueado." << endl;
    }
  }

  void Employee::openDoor(){
    if(getRol() == "vigilante")
    cout << "Puerta abierta." << endl;

    else{
      cout << "No puede abrir y cerrar puertas, no es vigilante." << endl;
    }
  }

  void Employee::closeDoor(){
    if(getRol() == "vigilante")
    cout << "Puerta cerrada." << endl;

    else{
      cout << "No puede abrir y cerrar puertas, no es vigilante." << endl;
    }

  }

  void Employee::setSalaryEmployee(Employee aEmployee){
    double theSalary;

    if(getRol() == "jefe"){

      string theRol = aEmployee.getRol();
      cout << "El rol del empleado es: " << theRol << " digite el salario correspondiente: " << endl;

      cin >> theSalary;

      if(theRol == "contadora"){
        aEmployee.setSalary(theSalary);
        cout << "La contadora recibe un pago de $" << aEmployee.getSalary() << "  por dia." << endl;
      }

      else if(theRol == "vigilante"){
        aEmployee.setSalary(theSalary);
        cout << "El vigilante recibe un pago de $" << aEmployee.getSalary() << "  por dia." << endl;
      }

      else if(theRol == "supervisor"){
        aEmployee.setSalary(theSalary);
        cout << "El supervisor recibe un pago de $" << aEmployee.getSalary() << "  por dia." << endl;
      }

      else if(theRol == "conductor"){
        aEmployee.setSalary(theSalary);
        cout << "El conductor recibe un pago de $" << aEmployee.getSalary() << "  por dia." << endl;
      }
      
    }


    else{
      cout << "No es el jefe, no puede hacer esto." << endl;
    }


  }

