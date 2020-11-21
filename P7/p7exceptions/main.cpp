#include "header/Functions.h"
#include <iostream>

int main(){

  double firstV;
  double secondV;

  std::cin >> firstV;
  std::cin >> secondV;

  double firstV2 = firstV;
  double secondV2 = secondV;
  Functions variables(firstV, secondV);

  
  std::cout << variables.valFunction(firstV, secondV) << " " << firstV << " " << secondV << std::endl;

   
   std::cout <<variables.refFunction(firstV, secondV) << " " <<firstV << " " << secondV << std::endl;

   std::cout << variables.mixFunction(firstV2, secondV2) << " " << firstV2 << " " << secondV << std::endl;

   variables.add(firstV, secondV);
   std::cout << variables.getFirst() << " " << variables.getSecond() << " " << variables.getThird() << std::endl;

   variables.sub(firstV, secondV);
   std::cout << variables.getFirst() << " " << variables.getSecond() << " " << variables.getThird() << std::endl;

  return 0;
}