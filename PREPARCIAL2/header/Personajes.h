/**
 **/

#ifndef PERSONAJES_H_
#define PERSONAJES_H_

#include <string>
using namespace std;

class Personajes{

  private:

  public:
  int life, damage;
  bool live;
  string name;

  Personajes();

  Personajes(string nName);

  Personajes(int nLife, int nDamage);

  Personajes(string nName, int nLife, int nDamage);

  ~Personajes();

  /**--** getters and setters **--**/

  string getName(void);

  void setName(string nName);

  int getLife(void);

  void setLife(int nLife);

  int getDamage(void);

  void setDamage(int nDamage);

  bool isAlive(void);

  virtual void attack(Personajes& aPlayer);

};

#endif