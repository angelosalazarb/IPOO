#include "../header/Draconaurius.h"
#include <string>
using namespace std;

class Personajes;


Draconaurius::Draconaurius():Personajes(){}

Draconaurius::Draconaurius(string nName):Personajes(nName){

}

Draconaurius::Draconaurius(int nLife, int nDamage):Personajes(nLife, nDamage){

}

Draconaurius::Draconaurius(string nName, int nLife, int nDamage):Personajes(nName,nLife, nDamage){

}

Draconaurius::~Draconaurius(){}

void Draconaurius::attack(Personajes& aPlayer){
  int attack = aPlayer.getLife() - getDamage();
  aPlayer.setLife(attack);
} 