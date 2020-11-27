/**
 **/

#ifndef ARQUEROSPLUS_H_
#define ARQUEROSPLUS_H_

#include "../header/Personajes.h"

#include <string>
using namespace std;



class ArquerosPlus : public Personajes{

  ArquerosPlus();

  ArquerosPlus(string);

  ArquerosPlus(int, int);

  ArquerosPlus(string, int, int);

  void attack(Personajes& aPlayer) override;


};

#endif