/**
 **/

#ifndef DRACONAURIUS_H_
#define DRACONAURIUS_H_

#include "../header/Personajes.h"

#include <string>
using namespace std;



class Draconaurius : public Personajes{

  Draconaurius();

  Draconaurius(string);

  Draconaurius(int, int);

  Draconaurius(string, int, int);

  void attack(Personajes& aPlayer) override;


};

#endif