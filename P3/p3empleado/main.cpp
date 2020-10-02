#include "Employee.h"
#include <iostream>
using namespace std;


void show(Employee empl){
  cout<<empl.getCalification()<<endl;
}

int main(){
  Employee employee1;

  employee1.setName("Juan");
  employee1.setCalification("a");
 
  Employee employee2;

  employee2.setName("Pedro");
  employee2.setCalification("B");

  
  Employee employee3;

  employee3.setName("Maria");
  employee3.setCalification("Ab");

  Employee employee4;

  employee4.setName("Luis");
  employee4.setCalification("e");


  show(employee1);
  show(employee2);
  show(employee3);
  show(employee4);
  
}