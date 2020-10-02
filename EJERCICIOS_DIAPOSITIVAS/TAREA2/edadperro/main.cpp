#include "Pet.h"
#include<iostream>
using namespace std;

void show(Pet pet){
  cout << "La edad del perro es: " <<pet.getHumanAge()<<" edad humana."<<endl;
}

int main(){
  Pet aYorkie;

  aYorkie.setName("Lulo");
  aYorkie.setBreed("Yorkie");
  aYorkie.setSize("Pequeña");
  aYorkie.setPetAge(5);

  Pet aPitbull;

  aPitbull.setName("Tyson");
  aPitbull.setBreed("Pitbull");
  aPitbull.setSize("Mediana");
  aPitbull.setPetAge(10);

  Pet aDoberman;

  aDoberman.setName("Juan");
  aDoberman.setBreed("Doberman");
  aDoberman.setSize("Grande");
  aDoberman.setPetAge(5);

  Pet aSanBernando;

  aSanBernando.setName("Pedro");
  aSanBernando.setBreed("San Bernando");
  aSanBernando.setSize("Gigante");
  aSanBernando.setPetAge(12);

  show(aYorkie);
  show(aPitbull);
  show(aDoberman);
  show(aSanBernando);

}