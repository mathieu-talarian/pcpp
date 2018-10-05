/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 16:27:27 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/05 20:03:42 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.class.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name) {
  this->setHP(60);
  this->setMHP(60);
  this->_energy_points = 120;
  this->_melee_attack_damage = 60;
  this->_ranged_attack_damage = 5;
  this->_armor_damage_reduction = 0;
  STD("Hello , i'm " << this->_name << ", a NinjaTrap unity");
  STD(NTCQ);
  STD("Level " << this->getLVL());
}

NinjaTrap::NinjaTrap(NinjaTrap const &cpy) : ClapTrap(cpy) {
  STD(NTCQ);
  *this = cpy;
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &cpy) {
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

NinjaTrap::~NinjaTrap(void) { STD(NTDQ); }

void NinjaTrap::ninjaShoebox(ClapTrap const &target) {
  STD("Ahahah little claptrap " << target.getName());
}
void NinjaTrap::ninjaShoebox(FragTrap const &target) {
  STD("hehe you're so cute 📸  " << target.getName());
}
void NinjaTrap::ninjaShoebox(ScavTrap const &target) {
  STD("Hello nooob   " << target.getName());
}
void NinjaTrap::ninjaShoebox(NinjaTrap const &target) {
  STD("NIIIIIIIIIIN IIIJAAA \n\nS " << target.getName());
}