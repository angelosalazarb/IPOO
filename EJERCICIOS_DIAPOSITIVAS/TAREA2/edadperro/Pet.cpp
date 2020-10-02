#include "Pet.h"
#include <string>
using namespace std;

Pet::Pet(){
  name = "";
  breed = "";
  size = "";
  petAge = 0;
  humanAge = 0;

}
Pet::~Pet(){}

string Pet::getName(){
  return name;
}

void Pet::setName(string nName){
  name = nName;
}

string Pet::getBreed(){
  return breed;
}

void Pet::setBreed(string nBreed){
  breed = nBreed;
}

string Pet::getSize(){
  return size;
}

void Pet::setSize(string nSize){
  size = nSize;
}

int Pet::getPetAge(){
  return petAge;
}

void Pet::setPetAge(int nPetAge){
  petAge = nPetAge;
}

int Pet::getHumanAge(){
  if(petAge == 5){
    if(breed == "Pequeña"){
      humanAge = 36;
      return humanAge;
    }
    else if(breed == "Mediana"){
      humanAge = 37;
      return humanAge;
    }
    else if(breed == "Grande"){
      humanAge = 40;
      return humanAge;
    }
    else if(breed == "Gigante"){
      humanAge = 42;
      return humanAge;
    }
  }

  else if(petAge == 6){
    if(breed == "Pequeña"){
      humanAge = 40;
      return humanAge;
    }
    else if(breed == "Mediana"){
      humanAge = 42;
      return humanAge;
    }
    else if(breed == "Grande"){
      humanAge = 45;
      return humanAge;
    }
    else if(breed == "Gigante"){
      humanAge = 49;
      return humanAge;
    }
  }

  else if(petAge == 7){
    if(breed == "Pequeña"){
      humanAge = 44;
      return humanAge;
    }
    else if(breed == "Mediana"){
      humanAge = 47;
      return humanAge;
    }
    else if(breed == "Grande"){
      humanAge = 50;
      return humanAge;
    }
    else if(breed == "Gigante"){
      humanAge = 56;
      return humanAge;
    }
  }

   else if(petAge == 8){
    if(breed == "Pequeña"){
      humanAge = 48;
      return humanAge;
    }
    else if(breed == "Mediana"){
      humanAge = 51;
      return humanAge;
    }
    else if(breed == "Grande"){
      humanAge =55;
      return humanAge;
    }
    else if(breed == "Gigante"){
      humanAge = 64;
      return humanAge;
    }
  }

   else if(petAge == 9){
    if(breed == "Pequeña"){
      humanAge = 52;
      return humanAge;
    }
    else if(breed == "Mediana"){
      humanAge = 56;
      return humanAge;
    }
    else if(breed == "Grande"){
      humanAge = 61;
      return humanAge;
    }
    else if(breed == "Gigante"){
      humanAge = 71;
      return humanAge;
    }
  }

   else if(petAge == 10){
    if(breed == "Pequeña"){
      humanAge = 56;
      return humanAge;
    }
    else if(breed == "Mediana"){
      humanAge = 60;
      return humanAge;
    }
    else if(breed == "Grande"){
      humanAge = 66;
      return humanAge;
    }
    else if(breed == "Gigante"){
      humanAge = 78;
      return humanAge;
    }
  }

   else if(petAge == 11){
    if(breed == "Pequeña"){
      humanAge = 60;
      return humanAge;
    }
    else if(breed == "Mediana"){
      humanAge = 65;
      return humanAge;
    }
    else if(breed == "Grande"){
      humanAge = 72;
      return humanAge;
    }
    else if(breed == "Gigante"){
      humanAge = 86;
      return humanAge;
    }
  }

   else if(petAge == 12){
    if(breed == "Pequeña"){
      humanAge = 64;
      return humanAge;
    }
    else if(breed == "Mediana"){
      humanAge = 69;
      return humanAge;
    }
    else if(breed == "Grande"){
      humanAge = 77;
      return humanAge;
    }
    else if(breed == "Gigante"){
      humanAge = 93;
      return humanAge;
    }
  }

  else if(petAge == 13){
    if(breed == "Pequeña"){
      humanAge = 68;
      return humanAge;
    }
    else if(breed == "Mediana"){
      humanAge = 74;
      return humanAge;
    }
    else if(breed == "Grande"){
      humanAge = 82;
      return humanAge;
    }
    else if(breed == "Gigante"){
      humanAge = 101;
      return humanAge;
    }
  }

  else if(petAge == 14){
    if(breed == "Pequeña"){
      humanAge = 72;
      return humanAge;
    }
    else if(breed == "Mediana"){
      humanAge = 78;
      return humanAge;
    }
    else if(breed == "Grande"){
      humanAge = 88;
      return humanAge;
    }
    else if(breed == "Gigante"){
      humanAge = 108;
      return humanAge;
    }
  }

  else if(petAge == 15){
    if(breed == "Pequeña"){
      humanAge = 76;
      return humanAge;
    }
    else if(breed == "Mediana"){
      humanAge = 83;
      return humanAge;
    }
    else if(breed == "Grande"){
      humanAge = 93;
      return humanAge;
    }
    else if(breed == "Gigante"){
      humanAge = 115;
      return humanAge;
    }
  }
  else
  {
    humanAge = 12;
    return humanAge;
  }
  
}

