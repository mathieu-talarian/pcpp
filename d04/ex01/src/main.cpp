#include "PlasmaRifle.class.hpp"
#include "PowerFist.class.hpp"

#include "Character.class.hpp"
#include "RadScorpion.class.hpp"
#include "SuperMutant.class.hpp"

#include <iostream>

// int main() {
//   while (1) {
//     Character *zaz = new Character("zaz");
//     std::cout << *zaz;
//     Enemy *b = new RadScorpion();
//     AWeapon *pr = new PlasmaRifle();
//     AWeapon *pf = new PowerFist();
//     zaz->equip(pr);
//     // zaz->attack(b);
//     std::cout << *zaz;
//     zaz->equip(pf);
//     // zaz->attack(b);
//     std::cout << *zaz;
//     zaz->equip(pr);
//     std::cout << *zaz;
//     // zaz->attack(b);
//     // zaz->attack(b);
//     // zaz->attack(b);
//     // zaz->attack(b);
//     // zaz->attack(b);
//     std::cout << *zaz;
//     zaz->attack(b);
//     std::cout << *zaz;
//     delete pr;
//     delete pf;
//     delete zaz;
//     if (b->getHP() > 0) {
//       delete b;
//     }
//   }
//   return 0;
// }

int main() {
  Character *zaz = new Character("zaz");
  std::cout << *zaz;
  Enemy *b = new RadScorpion();
  Enemy *mutant = new SuperMutant();
  AWeapon *pr = new PlasmaRifle();
  AWeapon *pf = new PowerFist();

  // Change of two weapons,he must have equipped the last one
  zaz->equip(pr);
  zaz->equip(pf);
  //

  std::cout << std::endl;

  // Attack and change weapon then attack
  zaz->attack(b);
  std::cout << *zaz;
  zaz->equip(pr);
  std::cout << *zaz;
  zaz->attack(b);
  std::cout << *zaz;
  //

  std::cout << std::endl;

  // Succesive attacks on red scorpion
  zaz->equip(pf);
  zaz->attack(b);
  std::cout << *zaz;
  zaz->attack(b);
  std::cout << *zaz;
  zaz->attack(b);
  zaz->recoverAP();
  zaz->recoverAP();
  zaz->attack(b);
  zaz->recoverAP();
  zaz->recoverAP();
  zaz->attack(b);
  zaz->recoverAP();
  zaz->recoverAP();
  std::cout << b->getHP() << std::endl;
  std::cout << *zaz;
  //

  std::cout << std::endl;

  // Recovering a lot of AP (over max)
  zaz->recoverAP();
  std::cout << *zaz;
  zaz->recoverAP();
  std::cout << *zaz;
  zaz->recoverAP();
  std::cout << *zaz;

  // Succesive attacks on super mutant
  zaz->equip(pf);
  (void)mutant;
  zaz->attack(mutant);
  std::cout << *zaz;
  zaz->attack(mutant);
  std::cout << *zaz;
  zaz->attack(mutant);
  std::cout << *zaz;
  zaz->attack(mutant);
  std::cout << *zaz;
  //

  if (b->getHP())
    delete b;
  delete pr;
  delete pf;
  delete zaz;
  while (1)
    ;

  return 0;
}