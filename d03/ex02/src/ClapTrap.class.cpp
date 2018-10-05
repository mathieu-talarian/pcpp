/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 18:10:23 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/05 15:44:46 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.class.hpp"

ClapTrap::ClapTrap(std::string name)
    : _energy_points(100), _max_energy_points(100), _name(name),
      _melee_attack_damage(30), _ranged_attack_damage(20),
      _armor_damage_reduction(5), _hit_points(100), _max_hit_points(100),
      _level(1) {
  STD("Hello, i'm a standard CLAP_TP " << this->_name);
}

ClapTrap::ClapTrap(ClapTrap const &cpy) {
  STD("Hahhhh you made me from another me ... ");
  *this = cpy;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &cpy) {
  if (this != &cpy) {
    this->setHP(cpy.getHP());
    this->setMHP(cpy.getMHP());
    this->setLVL(cpy.getLVL());
    this->_name = cpy._name;
  }
  return *this;
}

ClapTrap::~ClapTrap() { STD("Bye creeeeeeeeeep..."); }

uint ClapTrap::getHP(void) const { return this->_hit_points; }
void ClapTrap::setHP(uint hp) { this->_hit_points = hp; }

uint ClapTrap::getMHP(void) const { return this->_max_hit_points; }
void ClapTrap::setMHP(uint mhp) { this->_max_hit_points = mhp; }

uint ClapTrap::getLVL(void) const { return this->_level; }
void ClapTrap::setLVL(uint lvl) { this->_level = lvl; }
