#include "Operators.h"
#include <iostream>
using namespace std;

void showSimple(Operators opS){
  cout<< opS.getResult();  
}

void showDouble(Operators opD){
  cout<< opD.getResultDouble();
}

void showTernario(Operators opT){
  cout<< opT.getResultTernario();
}

int main(int argc, char* argv[]){
  Operators ope1;    
    if (argc > 1){

        ope1.setA(atoi(argv[1]));
        ope1.setB(atoi(argv[2]));
        ope1.setC(atoi(argv[3]));
    }
      else{
        double nA;
        cin>>nA;
        ope1.setA(nA);

        double nB;
        cin>>nB;
        ope1.setB(nB);

        double nC;
        cin>>nC;
        ope1.setC(nC);
    }
/**
  Operators ope2(3,3,4);
  Operators ope3(7,4,2);
  showDouble(ope2);
  showSimple(ope3)
*/
  showTernario(ope1);
  

}