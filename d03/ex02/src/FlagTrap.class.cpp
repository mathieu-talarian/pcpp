/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 14:44:08 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/05 15:42:24 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h> /* time */

#include "ClapTrap.class.hpp"
#include "FlagTrap.class.hpp"

FlagTrap::FlagTrap(std::string name)
    : ClapTrap(name) {
  STD("Hello , i'm " << this->_name << " a CL4PTR4P unity");
  STD("FR4G-TP");
  STD(FTCQ);
  STD("Level " << this->getLVL());
}

FlagTrap::FlagTrap(FlagTrap const &cpy) : ClapTrap(cpy) {
  STD("10101010000010100100110100101011110101011101010101010101010101101010");
  *this = cpy;
}

FlagTrap &FlagTrap::operator=(FlagTrap const &cpy) {
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

FlagTrap::~FlagTrap(void) { STD(FTDQ); }

// Member functions
void FlagTrap::rangedAttack(std::string const &target) const {
  STD("FRAG-TP " << this->_name << " attacks " << target
                 << " with his tomahawk HAHA, causing "
                 << this->_ranged_attack_damage << " points of damage!");
}

void FlagTrap::meleeAttack(std::string const &target) const {
  STD("FRAG-TP " << this->_name << " attacks " << target
                 << " with his little robots fists, causing "
                 << this->_melee_attack_damage << " points of damage!");
}

void FlagTrap::takeDamage(uint amount) {
  if (amount < uint(this->_armor_damage_reduction))
    STD("AHAHAHAH !!" << std::endl
                      << " Can't you him me with something sool ?");
  if ((this->getHP() - amount + this->_armor_damage_reduction) > 0) {
    this->setHP(this->getHP() - amount + this->_armor_damage_reduction);
    STD("FRAG-TP " << this->_name << " is getting damaged, he losts " << amount
                   << "HP" << std::endl
                   << "ouuuch !!" << std::endl
                   << "FRAG-TP -> " << this->getHP() << "HP");
  } else {
    this->setHP(0);
    STD("FRAG-TP " << this->_name << " is dead 😵 " << std::endl);
  }
}

void FlagTrap::beRepaired(uint amount) {
  if ((this->getHP() + amount) > this->getMHP()) {
    this->setHP(this->getMHP());
    STD("Whoooaaaa , i'm like a new Cl4AP-TP unity, and i'm full HP"
        << std::endl
        << "Lets go take a new mission creep" << std::endl
        << "Creep ??" << std::endl
        << "Is there someone here??");
  } else {
    STD("I got repaired , and i now got " << this->getHP() << " HP"
                                          << std::endl);
    this->setHP(this->getHP() + amount);
  }
}

void FlagTrap::vaulthunter_dot_exe(std::string const &target) {
  int atk = rand() % 8;
  STD("Got " << this->_energy_points << " / " << this->_max_energy_points
             << " mana");
  if (this->_energy_points < 25) {
    STD("Don't have enough energy points");
    return;
  }
  this->_energy_points -= 25;

  STD(FlagTrap::_funny_attacks[atk] << " on " << target << std::endl);
}

std::string FlagTrap::_funny_attacks[] = {
    "🔪 Does this mean I can start dancing? Pleeeeeeaaaaase?",
    "🔪 One, two punch",
    "🔪 Can I shoot something now? Or climb some stairs? SOMETHING "
    "exciting?",
    "🔪 I fart rainbows!",
    "🔪 Punching time!",
    "🔪 Frost exhaust!",
    "🔪 Coolant, vented!"};