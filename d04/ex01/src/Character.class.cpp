/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 00:15:37 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/06 13:23:09 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.class.hpp"

Character::Character(std::string const &name)
    : _name(name), _weapon(NULL), _ap(40) {}

Character::Character(Character const &src) { *this = src; }

Character::~Character() {}

Character &Character::operator=(Character const &src) {
  if (this != &src) {
    this->_ap = src._ap;
    this->_weapon = src._weapon;
  }
  return *this;
}

void Character::recoverAP() {
  if (this->_ap + 10 > 40)
    this->_ap = 40;
  else
    this->_ap += 10;
}

void Character::equip(AWeapon *weapon) { this->_weapon = weapon; }

void Character::attack(Enemy *enemy) {
  if (enemy->getHP() > 0) {
    if (this->_ap >= this->_weapon->getApCost()) {
      this->_ap -= _weapon->getApCost();
      enemy->takeDamage(_weapon->getDmg());
      std::cout << this->_name << " attacks " << enemy->getType() << " with a "
                << this->_weapon->getName() << std::endl;
      this->_weapon->attack();
      if (enemy->getHP() == 0)
        delete enemy;
    } else {
      std::cout << "don't have enough ap" << std::endl;
    }
  } else {
    std::cout << "this enemy " << enemy->getType() << " is already dead"
              << std::endl;
  }
}

std::string Character::getName() const { return this->_name; }

int Character::getAP() const { return this->_ap; }

AWeapon *Character::getWeapon() const { return this->_weapon; }

std::ostream &operator<<(std::ostream &o, Character const &src) {
  if (src.getWeapon())
    o << src.getName() << " has " << src.getAP() << " AP and wields a "
      << src.getWeapon()->getName() << std::endl;
  else
    o << src.getName() << " has " << src.getAP() << " AP and is unarmed"
      << std::endl;
  return o;
}