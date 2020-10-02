#include "Week.h"
#include <string>
#include <iostream>
using namespace std;

void showDay(Week week){
  cout << week.getDay();
}

int main(int argc, char* argv[]){

Week day1;

  if (argc > 1){
        day1.setNumber(atoi(argv[1]));
    }
      else{
        double num1;
        cin>>num1;
        day1.setNumber(num1);
    }
    showDay(day1);
}