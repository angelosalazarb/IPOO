#include "header/Animal.h"
#include "header/Dog.h"
#include "header/Chihuahua.h"
#include "header/Rottweiler.h"
#include "header/Collie.h"

#include <iostream>
#include <string>
using namespace std;

int main(){
Chihuahua dog1("Danger");
  std::cout << dog1.getName() << " a " << dog1.getBreed() << " say " << dog1.getBark() << std::endl;
Collie dog2("Lassie");
  std::cout << dog2.getName() << " a " << dog2.getBreed() << " say " << dog2.getBark() << std::endl;
Rottweiler dog3("Trusky");
  std::cout << dog3.getName() << " a " << dog3.getBreed() << " bark " << dog3.getBark() << std::endl;


  return 0;
}