/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 17:05:25 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/05 16:25:39 by mmoullec         ###   ########.fr       */
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