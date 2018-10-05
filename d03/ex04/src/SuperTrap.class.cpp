/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 17:34:10 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/05 18:15:45 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.class.hpp"

SuperTrap::SuperTrap(std::string name)
    : ClapTrap(name), NinjaTrap(name), FlagTrap(name) {
  std::cout << "Supertrap constructed " << std::endl;
  this->_max_energy_points = 120;
  this->_ranged_attack_damage = 20;
}

SuperTrap::SuperTrap(SuperTrap const &cpy)
    : ClapTrap(cpy), NinjaTrap(cpy), FlagTrap(cpy) {
  std::cout << "Supertrap constructed from a copy" << std::endl;
  *this = cpy;
}

SuperTrap &SuperTrap::operator=(SuperTrap const &cpy) {
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

SuperTrap::~SuperTrap(void) {
  std::cout << "SuperTrap destructed" << std::endl;
}