#include "Sell.h"
#include <iostream>
using namespace std;


void show(Sell sell){
  cout<<"El empleado: " <<sell.getName()<< " segun su categoria "<<sell.getComission()<<" siendo entonces $" <<sell.getEarn()<<" pesos segun la venta realizada."<<endl;
}

void showCalif(Sell calif){
  cout<< "La calificacion de: " << calif.getName() << " " << calif.getCalification() <<endl;
}
int main(){
  Sell employee1;

  employee1.setName("Juan");
  employee1.setCategory(1);
  employee1.setSell(10000);
  employee1.setCharge("Vendedor");
  employee1.setCalification("a");


  Sell employee2;

  employee2.setName("Pedro");
  employee2.setCategory(2);
  employee2.setSell(10000);
  employee2.setCharge("Vendedor2");
  employee2.setCalification("a");
  
  Sell employee3;

  employee3.setName("Maria");
  employee3.setCategory(3);
  employee3.setSell(10000);
  employee3.setCharge("Vendedor3");
  employee3.setCalification("B");

  Sell employee4;

  employee4.setName("Luis");
  employee4.setCategory(4);
  employee4.setSell(10000);
  employee4.setCharge("Vendedor4");
  employee4.setCalification("e");

  Sell employee5;

  employee5.setName("Andrea");
  employee5.setCategory(5);
  employee5.setSell(10000);
  employee5.setCharge("Administradora");
  employee5.setCalification("E");

  Sell employee6;

  employee6.setName("Luisa");
  employee6.setCategory(6);
  employee6.setSell(10000);
  employee6.setCharge("Gerente");
  employee6.setCalification("E");

  showCalif(employee1);
  showCalif(employee2);
  showCalif(employee3);
  showCalif(employee4);
  showCalif(employee5);
  showCalif(employee6);
  
}