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

   variables.valFunction(firstV, secondV);
   variables.refFunction(firstV, secondV);
   variables.mixFunction(firstV2, secondV2);

   variables.add(firstV, secondV);
   std::cout << variables.getFirst() << " " << variables.getSecond() << " " << variables.getThird() << std::endl;

   variables.sub(firstV, secondV);
   std::cout << variables.getFirst() << " " << variables.getSecond() << " " << variables.getThird() << std::endl;

  return 0;
}