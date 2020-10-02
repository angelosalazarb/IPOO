#include "Sell.h"
#include <iostream>
using namespace std;


void show(Sell sell){
  cout<<"El empleado: " <<sell.getName()<< " segun su categoria "<<sell.getComission()<<" siendo entonces $" <<sell.getEarn()<<" pesos segun la venta realizada."<<endl;
}

int main(){
  Sell employee1;

  employee1.setName("Juan");
  employee1.setCategory(1);
  employee1.setSell(10000);
  employee1.setCharge("Vendedor");

  Sell employee2;

  employee2.setName("Pedro");
  employee2.setCategory(2);
  employee2.setSell(10000);
  employee2.setCharge("Vendedor2");
  
  Sell employee3;

  employee3.setName("Maria");
  employee3.setCategory(3);
  employee3.setSell(10000);
  employee3.setCharge("Vendedor3");

  Sell employee4;

  employee4.setName("Luis");
  employee4.setCategory(4);
  employee4.setSell(10000);
  employee4.setCharge("Vendedor4");

  Sell employee5;

  employee5.setName("Andrea");
  employee5.setCategory(5);
  employee5.setSell(10000);
  employee5.setCharge("Administradora");

  Sell employee6;

  employee6.setName("Luisa");
  employee6.setCategory(6);
  employee6.setSell(10000);
  employee6.setCharge("Gerente");

  show(employee1);
  show(employee2);
  show(employee3);
  show(employee4);
  show(employee5);
  show(employee6);
  
}