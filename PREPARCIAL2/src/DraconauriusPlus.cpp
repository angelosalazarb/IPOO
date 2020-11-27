#include "../header/DraconauriusPlus.h"
#include <string>
using namespace std;

class Personajes;


DraconauriusPlus::DraconauriusPlus():Personajes(){}

DraconauriusPlus::DraconauriusPlus(string nName):Personajes(nName){

}

DraconauriusPlus::DraconauriusPlus(int nLife, int nDamage):Personajes(nLife, nDamage){

}

DraconauriusPlus::DraconauriusPlus(string nName, int nLife, int nDamage):Personajes(nName,nLife, nDamage){

}

DraconauriusPlus::~DraconauriusPlus(){}

void DraconauriusPlus::attack(Personajes& aPlayer){
  int attack = aPlayer.getLife() - getDamage();
  aPlayer.setLife(attack);
} 