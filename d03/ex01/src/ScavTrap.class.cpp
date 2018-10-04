/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 17:05:25 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/04 18:07:12 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.class.hpp"

#include "ScavTrap.class.hpp"
#include <time.h> /* time */

#define STD(x) std::cout << x << std::endl << std::endl;
#define ENDL std::endl

ScavTrap::ScavTrap(std::string name)
    : _hit_points(100), _max_hit_points(100), _energy_points(50),
      _max_energy_points(50), _level(1), _name(name), _melee_attack_damage(20),
      _ranged_attack_damage(15), _armor_damage_reduction(3) {
  STD("Hello , i'm " << this->_name << " a CL4PTR4P unity");
  STD(ScavTrap::_construction_quote);
  STD("Level " << this->_level);
}

ScavTrap::ScavTrap(ScavTrap const &cpy) {
  STD(ScavTrap::_construction_quote);
  *this = cpy;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &cpy) {
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

ScavTrap::~ScavTrap(void) { STD(ScavTrap::_destruction_quote); }

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
                      << " Can't you him me with something sool ?");
  if ((this->_hit_points - amount + this->_armor_damage_reduction) > 0) {
    this->_hit_points += (-amount + this->_armor_damage_reduction);
    STD("SC4V-TP " << this->_name << " is getting damaged, he losts " << amount
                   << "HP" << std::endl
                   << "(unintelligible snarling)" << std::endl
                   << "SC4V-TP -> " << this->_hit_points << "HP");
  } else {
    this->_hit_points = 0;
    STD("FRAG-TP " << this->_name << " is dead 😵 " << std::endl);
  }
}

void ScavTrap::beRepaired(uint amount) {
  if ((this->_hit_points + amount) > this->_max_hit_points) {
    this->_hit_points = this->_max_hit_points;
    STD("Whoooaaaa , i'm like a new SC4V-TP unity, and i'm full HP"
        << std::endl
        << "Let's go open doors!!"
        << "Is there someone here??");
  } else {
    STD("I got repaired , and i now got " << this->_hit_points << " HP"
                                          << std::endl);
    this->_hit_points += amount;
  }
}
void ScavTrap::challengerNewcomer() const {
  int i = rand() % 8;
  STD(ScavTrap::_challenges[i]);
}

std::string ScavTrap::_construction_quote(
    "I am right behind you, Vault Hunting friend! \n"
    "... ... ... \n"
    "... ... ... \n"
    "... ... ... \n"
    "Annihilate them for breakfast, Willy! \n"
    "... ... ... \n"
    "... ... ... \n"
    "... ... ... \n"
    "I will prove to you my robotic superiority! \n"
    "... ... ... \n"
    "... ... ... \n"
    "... ... ... \n"
    "Staiiiiiiiiiiiiiiiiiiiiiirs 😭\n");

std::string ScavTrap::_destruction_quote("No fair! I wasn't ready.");

std::string ScavTrap::_challenges[] = {
    "🔫 Poop.",
    "🔫 One down, any other takers?",
    "🔫 Stop me before I kill again, except don't!",
    "🔫 Ammo reserves are spent!",
    " 🔫 Ratattattattatta! Powpowpowpow! Powpowpowpow! Pew-pew, pew -pew - "
    "pewpew !",
    "🔫 Sugar, this won't hurt a bit!",
    "🔫 Avada kedavra!"};