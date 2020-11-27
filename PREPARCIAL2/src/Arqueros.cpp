#include "../header/Arqueros.h"
#include <string>
using namespace std;

class Personajes;
class Draconaurius;


Arqueros::Arqueros():Personajes(){}

Arqueros::Arqueros(string nName):Personajes(nName){

}

Arqueros::Arqueros(int nLife, int nDamage):Personajes(nLife, nDamage){

}

Arqueros::Arqueros(string nName, int nLife, int nDamage):Personajes(nName,nLife, nDamage){

}

Arqueros::~Arqueros(){}

void Arqueros::attack(Personajes& aPlayer){
  int attack = aPlayer.getLife() - getDamage();
  aPlayer.setLife(attack);
} 