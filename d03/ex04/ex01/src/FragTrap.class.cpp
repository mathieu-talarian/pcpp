/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 14:44:08 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/05 20:01:41 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.class.hpp"
#include <time.h> /* time */

#define STD(x) std::cout << x << std::endl << std::endl;
#define ENDL std::endl

FragTrap::FragTrap(std::string name)
    : _hit_points(100), _max_hit_points(100), _energy_points(100),
      _max_energy_points(100), _level(1), _name(name), _melee_attack_damage(30),
      _ranged_attack_damage(20), _armor_damage_reduction(5) {
  STD("Hello , i'm " << this->_name << " a CL4PTR4P unity");
  STD(FragTrap::_construction_quote);
  STD("Level " << this->_level);
}

FragTrap::FragTrap(FragTrap const &cpy) {
  STD(FragTrap::_construction_quote);
  *this = cpy;
}

FragTrap &FragTrap::operator=(FragTrap const &cpy) {
  if (this != &cpy) {
    this->_hit_points = cpy._hit_points;
    this->_max_hit_points = cpy._max_hit_points;
    this->_energy_points = cpy._energy_points;
    this->_max_energy_points = cpy._max_energy_points;
    this->_level = cpy._level;
    this->_name = cpy._name;
    this->_melee_attack_damage = cpy._melee_attack_damage;
    this->_ranged_attack_damage = cpy._ranged_attack_damage;
    this->_armor_damage_reduction = cpy._armor_damage_reduction;
  }
  return *this;
}

FragTrap::~FragTrap(void) { STD(FragTrap::_destruction_quote); }

// Member functions
void FragTrap::rangedAttack(std::string const &target) const {
  STD("FRAG-TP " << this->_name << " attacks " << target
                 << " with his tomahawk HAHA, causing "
                 << this->_ranged_attack_damage << " points of damage!");
}

void FragTrap::meleeAttack(std::string const &target) const {
  STD("FRAG-TP " << this->_name << " attacks " << target
                 << " with his little robots fists, causing "
                 << this->_melee_attack_damage << " points of damage!");
}

void FragTrap::takeDamage(uint amount) {
  if (amount < uint(this->_armor_damage_reduction))
    STD("AHAHAHAH !!" << std::endl
                      << " Can't you him me with something sool ?");
  if ((this->_hit_points - amount + this->_armor_damage_reduction) > 0) {
    this->_hit_points += (-amount + this->_armor_damage_reduction);
    STD("FRAG-TP " << this->_name << " is getting damaged, he losts " << amount
                   << "HP" << std::endl
                   << "ouuuch !!" << std::endl
                   << "FRAG-TP -> " << this->_hit_points << "HP");
  } else {
    this->_hit_points = 0;
    STD("FRAG-TP " << this->_name << " is dead 😵 " << std::endl);
  }
}

void FragTrap::beRepaired(uint amount) {
  if ((this->_hit_points + amount) > this->_max_hit_points) {
    this->_hit_points = this->_max_hit_points;
    STD("Whoooaaaa , i'm like a new Cl4AP-TP unity, and i'm full HP"
        << std::endl
        << "Lets go take a new mission creep" << std::endl
        << "Creep ??" << std::endl
        << "Is there someone here??");
  } else {
    STD("I got repaired , and i now got " << this->_hit_points << " HP"
                                          << std::endl);
    this->_hit_points += amount;
  }
}

void FragTrap::vaulthunter_dot_exe(std::string const &target) {
  int atk = rand() % 8;
  STD(atk);
  STD("Got " << this->_energy_points << " / " << this->_max_energy_points
             << " mana");
  if (this->_energy_points < 25) {
    STD("Don't have enough energy points");
    return;
  }
  this->_energy_points -= 25;

  STD(FragTrap::_funny_attacks[atk] << " on " << target << std::endl);
}

std::string FragTrap::_construction_quote(
    "Let's get this party started! \n"
    "... ... ... \n"
    "... ... ... \n"
    "... ... ... \n"
    "I once started a revolution myself. There were lots of guns and a lot of "
    "dying. \n"
    "... ... ... \n"
    "... ... ... \n"
    "... ... ... \n"
    "You'd think I would have gotten some better benefits out of the whole "
    "thing but no, demoted back to door-opening servitude!\n"
    "... ... ... \n"
    "... ... ... \n"
    "... ... ... \n"
    "Creep ?\n");

std::string FragTrap::_destruction_quote("I'll die the way I lived: annoying!");

std::string FragTrap::_funny_attacks[] = {
    "🔪 Does this mean I can start dancing? Pleeeeeeaaaaase?",
    "🔪 One, two punch",
    "🔪 Can I shoot something now? Or climb some stairs? SOMETHING exciting?",
    "🔪 I fart rainbows!",
    "🔪 Punching time!",
    "🔪 Frost exhaust!",
    "🔪 Coolant, vented!"};