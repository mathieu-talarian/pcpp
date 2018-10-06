#include "PlasmaRifle.class.hpp"
#include "PowerFist.class.hpp"

#include "Character.class.hpp"
#include "RadScorpion.class.hpp"

#include <iostream>

int main() {
  while (1) {
    Character *zaz = new Character("zaz");
    std::cout << *zaz;
    Enemy *b = new RadScorpion();
    AWeapon *pr = new PlasmaRifle();
    AWeapon *pf = new PowerFist();
    zaz->equip(pr);
    // zaz->attack(b);
    std::cout << *zaz;
    zaz->equip(pf);
    // zaz->attack(b);
    std::cout << *zaz;
    zaz->equip(pr);
    std::cout << *zaz;
    // zaz->attack(b);
    // zaz->attack(b);
    // zaz->attack(b);
    // zaz->attack(b);
    // zaz->attack(b);
    std::cout << *zaz;
    zaz->attack(b);
    std::cout << *zaz;
    delete pr;
    delete pf;
    delete zaz;
    if (b->getHP() > 0) {
      delete b;
    }
  } 
  return 0;
}