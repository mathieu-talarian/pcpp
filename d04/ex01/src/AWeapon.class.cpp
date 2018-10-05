/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 23:02:18 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/05 23:12:38 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.class.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage)
    : _name(name), _apcost(apcost), _dmg(damage) {}

AWeapon::AWeapon(AWeapon const &cpy) { *this = cpy; }

AWeapon &AWeapon::operator=(AWeapon const &cpy) {
  if (this != &cpy) {
    this->setName(cpy.getName());
    this->setApCost(cpy.getApCost());
    this->setDmg(cpy.getDmg());
  }
  return *this;
}

AWeapon::~AWeapon(void) {}

std::string AWeapon::getName() const { return this->_name; }
int AWeapon::getApCost() const { return this->_apcost; }
int AWeapon::getDmg() const { return this->_dmg; }

void AWeapon::setName(std::string name) { this->_name = name; }
void AWeapon::setApCost(int apcost) { this->_apcost = apcost; }
void AWeapon::setDmg(int dmg) { this->_dmg = dmg; }