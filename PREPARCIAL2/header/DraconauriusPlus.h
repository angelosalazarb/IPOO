/**
 **/

#ifndef DRACONAURIUSPLUS_H_
#define DRACONAURIUSPLUS_H_

#include "../header/Personajes.h"

#include <string>
using namespace std;



class DraconauriusPlus : public Personajes{

  DraconauriusPlus();

  DraconauriusPlus(string);

  DraconauriusPlus(int, int);

  DraconauriusPlus(string, int, int);

  void attack(Personajes& aPlayer) override;


};

#endif