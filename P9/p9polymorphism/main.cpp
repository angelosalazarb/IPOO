#include "header/Animal.h"
#include "header/Dog.h"
#include "header/Bee.h"
#include "header/Cat.h"
#include "header/Donkey.h"
#include "header/Goose.h"
#include "header/Hen.h"
#include "header/Swan.h"
#include "header/Wolf.h"


#include <iostream>
#include <string>
using namespace std;

void buildVector(Animal **list, int size){
    int typea;
  
  for (int index = 0; index < size; index++){

    cin >> typea;

    if(typea == 1){
      list[index] = new Dog();
    }

    else if(typea == 2){
      list[index] = new Bee();
    }

    else if(typea == 3){
      list[index] = new Goose();
    }

    else if(typea == 4){
      list[index] = new Cat();
    }

    else if(typea == 5){
      list[index] = new Hen();
    }
    else if(typea == 6){
      list[index] = new Swan();
    }
    else if(typea == 7){
      list[index] = new Donkey();
    }
    else if(typea == 8){
      list[index] = new Wolf();
    }
    else{
      cout << "Digite un animal correcto." << "\n";
    }
    
  }

  for(int index = 0; index < size; index++){
    cout << list[index]->move() << endl;
    cout << list[index]->makeSound() << endl;
  }
  
}

void printVector(Animal **list, int size){

}

int main(){
  int size;
  cin >> size;
  Animal **p = new Animal*[size];
  buildVector(p, size);
  printVector(p, size);

  return 0;
}