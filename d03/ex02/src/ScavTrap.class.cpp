/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 17:05:25 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/05 15:43:30 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h> /* time */

#include "ClapTrap.class.hpp"
#include "ScavTrap.class.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
  this->_energy_points = 50;
  this->_max_energy_points = 50;
  this->_melee_attack_damage = 20;
  this->_ranged_attack_damage = 15;
  this->_armor_damage_reduction = 3;
  STD("Hello , i'm " << this->_name << " a CL4PTR4P unity");
  STD(STCQ);
  STD("Level " << this->getLVL());
}

ScavTrap::ScavTrap(ScavTrap const &cpy) : ClapTrap(cpy) {
  STD(STCQ);
  *this = cpy;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &cpy) {
  if (this != &cpy) {
    this->setHP(cpy.getHP());
    this->setMHP(cpy.getMHP());
    this->_energy_points = cpy._energy_points;
    this->_max_energy_points = cpy._max_energy_points;
    this->setLVL(cpy.getLVL());
    this->_name = cpy._name;
    this->_melee_attack_damage = cpy._melee_attack_damage;
    this->_ranged_attack_damage = cpy._ranged_attack_damage;
    this->_armor_damage_reduction = cpy._armor_damage_reduction;
  }
  return *this;
}

ScavTrap::~ScavTrap(void) { STD(STDQ); }

// Member functions
void ScavTrap::rangedAttack(std::string const &target) const {
  STD("FRAG-TP " << this->_name << " attacks " << target
                 << " ...Defragmenting!... " << this->_ranged_attack_damage
                 << " points of damage!");
}

void ScavTrap::meleeAttack(std::string const &target) const {
  STD("FRAG-TP " << this->_name << " attacks " << target
                 << "...Loading combat packages!..."
                 << this->_melee_attack_damage << " points of damage!");
}

void ScavTrap::takeDamage(uint amount) {
  if (amount < uint(this->_armor_damage_reduction))
    STD("AHAHAHAH !!" << std::endl
                      << " Can't you hit me with something cool ?");
  if ((this->getHP() - amount + this->_armor_damage_reduction) > 0) {
    this->setHP(this->getHP() - amount + this->_armor_damage_reduction);
    STD("SC4V-TP " << this->_name << " is getting damaged, he losts " << amount
                   << "HP" << std::endl
                   << "(unintelligible snarling)" << std::endl
                   << "SC4V-TP -> " << this->getHP() << "HP");
  } else {
    this->setHP(0);
    STD("FRAG-TP " << this->_name << " is dead 😵 " << std::endl);
  }
}

void ScavTrap::beRepaired(uint amount) {
  if ((this->getHP() + amount) > this->getMHP()) {
    this->setHP(this->getMHP());
    STD("Whoooaaaa , i'm like a new SC4V-TP unity, and i'm full HP"
        << std::endl
        << "Let's go open doors!!"
        << "Is there someone here??");
  } else {
    STD("I got repaired , and i now got " << this->getHP() << " HP"
                                          << std::endl);
    this->setHP(this->getHP() + amount);
  }
}
void ScavTrap::challengerNewcomer() const {
  int i = rand() % 8;
  STD(ScavTrap::_challenges[i]);
}

std::string ScavTrap::_challenges[] = {
    "🔫 Poop.",
    "🔫 One down, any other takers?",
    "🔫 Stop me before I kill again, except don't!",
    "🔫 Ammo reserves are spent!",
    " 🔫 Ratattattattatta! Powpowpowpow! Powpowpowpow! Pew-pew, pew -pew - "
    "pewpew !",
    "🔫 Sugar, this won't hurt a bit!",
    "🔫 Avada kedavra!"};