#include "Pyramid.h"
#include <iostream>
using namespace std;


Pyramid::Pyramid(){
  alture = 0;
  draw = "";
}

Pyramid::Pyramid(int nAlture){
  alture = nAlture;
  draw = "";
}

Pyramid::~Pyramid(){}

int Pyramid::getAlture(){
  return alture;
}

void Pyramid::setAlture(int nAlture){
  alture = nAlture;
}

string Pyramid::getDraw(){
  int size = getAlture();
  int count = 0;
  int size2 = size;

   do
   {
      for(int spaces = count+1; spaces < size; spaces++)
      {
        cout << " ";
      }
      for(int j = 0; j < (2 * count + 2); j++)
      {
        cout << "*";
      }
      for(int spaces = count+1; spaces < size; spaces++)
      {
        cout << " ";
      }
      cout << "\n";
      count++;      
   }while(count < size);
   return "";
  
}
