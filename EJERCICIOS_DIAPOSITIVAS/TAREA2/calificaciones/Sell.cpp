#include "Sell.h"
#include <string>
using namespace std;

Sell::Sell(){
  name = "";
  category = 0;
  charge = "";
  sell = 0;
  calif = "";
  comission = "";
  earn = 0;
}

Sell::~Sell(){}

string Sell::getName(){
  return name;
}

void Sell::setName(string nName){
  name = nName;
}

int Sell::getCategory(){
  return category;
}

void Sell::setCategory(int nCat){
  category = nCat;
}

string Sell::getCharge(){
  return charge;
}

void Sell::setCharge(string nCharge){
  charge = nCharge;
}

int Sell::getSell(){
  return sell;
}

void Sell::setSell(int vSell){
  sell = vSell;
}

string Sell::getComission(){
switch (category)
{
case 1:
  return "se gana el 5% de comision sobre las ventas";
  break;
case 2:
  return "se gana el 7% de comision sobre las ventas";
  break;
case 3:
  return "se gana el 15% de comision sobre las ventas";
  break;
case 4:
  return "se gana el 20% de comision sobre las ventas";
  break;
case 5:
  return "se gana el 25% de comision sobre las ventas";
  break;
case 6:
  return "se gana el 30% de comision sobre las ventas";
  break;

default: return "no esta definido";
  break;
}
}

int Sell::getEarn(){
  switch (category)
  {
case 1:
  earn = sell*0.05;
  return earn;
  break;
case 2:
  earn = sell*0.07;
  return earn;
  break;
case 3:
  earn = sell*0.15;
  return earn;
  break;
case 4:
  earn = sell*0.20;
  return earn;
  break;
case 5:
  earn = sell*0.25;
  return earn;
  break;
case 6:
  earn = sell*0.30;
  return earn;
  break;

default: earn = 0; return earn;
  break;
}
}

void Sell::setCalification(string nCalif){
  calif = nCalif;
}

string Sell::getCalification(){
  if(calif == "a" || calif == "A"){
    return "es aceptable."; 
  }
  else if(calif == "b" || calif == "B"){
    return " es buena."; 
  }
  else if(calif == "e" || calif == "E"){
    return "es excelente."; 
  }
  else{
    return " no esta definida.";
  }
}

