#include "Coin.h"
#include <iostream>
using namespace std;

void show(Coin coin){
  cout<< coin.getAnswer() << endl;
}

int main(){
  Coin shoot1;
  shoot1.setNumber(2);

  Coin shoot2;
  shoot2.setNumber(5);

  Coin shoot3;
  shoot3.setNumber(7);

  Coin shoot4;
  shoot4.setNumber(3);


  show(shoot1);
  show(shoot2);
  show(shoot3);
  show(shoot4);
  

}