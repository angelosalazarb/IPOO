/**
 **/

#ifndef ARQUEROS_H_
#define ARQUEROS_H_

#include "../header/Personajes.h"
#include "../header/Draconaurius.h"

#include <string>
using namespace std;



class Arqueros : public Personajes{

  Arqueros();

  Arqueros(string);

  Arqueros(int, int);

  Arqueros(string, int, int);

  void attack(Personajes& aPlayer) override;


};

#endif