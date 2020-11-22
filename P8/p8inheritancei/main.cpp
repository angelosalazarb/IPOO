#include "header/Animal.h"
#include "header/Dog.h"
#include "header/Chihuahua.h"

#include <iostream>
#include <string>
using namespace std;

int main(){
Chihuahua dog1("Danger");
  std::cout << dog1.getName() << " a " << dog1.getBreed() << " say " << dog1.getBark() << std::endl;




  return 0;
}