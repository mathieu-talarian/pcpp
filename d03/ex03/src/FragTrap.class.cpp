/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 14:44:08 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/05 20:03:42 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h> /* time */

#include "ClapTrap.class.hpp"
#include "FragTrap.class.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
  STD("Hello , i'm " << this->_name << " a CL4PTR4P unity");
  STD("FR4G-TP");
  STD(FTCQ);
  STD("Level " << this->getLVL());
}

FragTrap::FragTrap(FragTrap const &cpy) : ClapTrap(cpy) {
  STD("10101010000010100100110100101011110101011101010101010101010101101010");
  *this = cpy;
}

FragTrap &FragTrap::operator=(FragTrap const &cpy) {
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

FragTrap::~FragTrap(void) { STD(FTDQ); }

// Member functions

void FragTrap::vaulthunter_dot_exe(std::string const &target) {
  int atk = rand() % 8;
  STD("Got " << this->_energy_points << " / " << this->_max_energy_points
             << " mana");
  if (this->_energy_points < 25) {
    STD("Don't have enough energy points");
    return;
  }
  this->_energy_points -= 25;

  STD(FragTrap::_funny_attacks[atk] << " on " << target << std::endl);
}

std::string FragTrap::_funny_attacks[] = {
    "🔪 Does this mean I can start dancing? Pleeeeeeaaaaase?",
    "🔪 One, two punch",
    "🔪 Can I shoot something now? Or climb some stairs? SOMETHING "
    "exciting?",
    "🔪 I fart rainbows!",
    "🔪 Punching time!",
    "🔪 Frost exhaust!",
    "🔪 Coolant, vented!"};