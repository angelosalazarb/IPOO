#include "Week.h"
#include <string>
using namespace std;

Week::Week(){
  number = 0;
  day = "";
}

Week::Week(int nNumber){
  number = nNumber;
  day = "";
}

Week::~Week(){}

int Week::getNumber(){
  return number;
}

void Week::setNumber(int nNumber){
  number = nNumber;
}

string Week::getDay(){
  switch (number)
  {
  case 1:
    return "Lunes";
    break;
  case 2:
    return "Martes";
    break;
  case 3:
    return "Miércoles";
    break;
  case 4:
    return "Jueves";
    break;
  case 5:
    return "Viernes";
    break;
  case 6:
    return "Sábado";
    break;
  case 7:
    return "Domingo";
    break;
  default:
    return "No esta definido";
    break;
  }
  return "0";
}