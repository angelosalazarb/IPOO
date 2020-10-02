#include "Years.h"
#include <iostream>
using namespace std;

void show(Years year){
  cout << "Años bisiestos entre dichos años: ";
  year.getYears();
}

int main(int argc, char* argv[]){
  Years year;
  if(argc > 1){
    year.setYear1(atoi(argv[1]));
    year.setYear2(atoi(argv[2]));
  }
  else{
    int num1;
    cin >> num1;
    year.setYear1(num1);

    int num2;
    cin >> num2;
    year.setYear2(num2);
  }
  show(year);
}