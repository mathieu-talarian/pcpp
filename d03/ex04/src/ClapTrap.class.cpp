/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 18:10:23 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/05 18:14:35 by mmoullec         ###   ########.fr       */
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

ClapTrap::~ClapTrap() { STD("Bye creeeeeeeeeep..."); }

uint ClapTrap::getHP(void) const { return this->_hit_points; }
void ClapTrap::setHP(uint hp) { this->_hit_points = hp; }

uint ClapTrap::getMHP(void) const { return this->_max_hit_points; }
void ClapTrap::setMHP(uint mhp) { this->_max_hit_points = mhp; }

uint ClapTrap::getLVL(void) const { return this->_level; }
void ClapTrap::setLVL(uint lvl) { this->_level = lvl; }

std::string ClapTrap::getName(void) const { return this->_name; }

void ClapTrap::rangedAttack(std::string const &target) const {
  STD("FRAG-TP " << this->_name << " attacks " << target
                 << " with his tomahawk HAHA, causing "
                 << this->_ranged_attack_damage << " points of damage!");
}

void ClapTrap::meleeAttack(std::string const &target) const {
  STD("FRAG-TP " << this->_name << " attacks " << target
                 << " with his little robots fists, causing "
                 << this->_melee_attack_damage << " points of damage!");
}

void ClapTrap::takeDamage(uint amount) {
  if (amount < uint(this->_armor_damage_reduction))
    STD("AHAHAHAH !!" << std::endl
                      << " Can't you him me with something sool ?");
  if ((this->getHP() - amount + this->_armor_damage_reduction) > 0) {
    this->setHP(this->getHP() - amount + this->_armor_damage_reduction);
    STD(this->_name << " is getting damaged, he losts " << amount << "HP"
                    << std::endl
                    << "ouuuch !!" << std::endl
                    << "FRAG-TP -> " << this->getHP() << "HP");
  } else {
    this->setHP(0);
    STD(this->_name << " is dead 😵 " << std::endl);
  }
}

void ClapTrap::beRepaired(uint amount) {
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

void ClapTrap::showStats() const {
  std::cout << "name-> " << this->_name << std::endl;
  std::cout << "HP-> " << this->getHP() << std::endl;
  std::cout << "MHP-> " << this->getMHP() << std::endl;
  std::cout << "EP-> " << this->_energy_points << std::endl;
  std::cout << "MEP-> " << this->_max_energy_points << std::endl;
  std::cout << "LVL-> " << this->getLVL() << std::endl;
  std::cout << "AD-> " << this->_melee_attack_damage << std::endl;
  std::cout << "RAD-> " << this->_ranged_attack_damage << std::endl;
  std::cout << "AREED -> " << this->_armor_damage_reduction << std::endl;
}