#include "../header/ArquerosPlus.h"
#include <string>
using namespace std;

class Personajes;


ArquerosPlus::ArquerosPlus():Personajes(){}

ArquerosPlus::ArquerosPlus(string nName):Personajes(nName){

}

ArquerosPlus::ArquerosPlus(int nLife, int nDamage):Personajes(nLife, nDamage){

}

ArquerosPlus::ArquerosPlus(string nName, int nLife, int nDamage):Personajes(nName,nLife, nDamage){

}

ArquerosPlus::~ArquerosPlus(){}

void ArquerosPlus::attack(Personajes& aPlayer){
  int attack = aPlayer.getLife() - getDamage();
  aPlayer.setLife(attack);
} 