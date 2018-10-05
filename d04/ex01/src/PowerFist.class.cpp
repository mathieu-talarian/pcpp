/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 23:26:49 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/06 00:39:44 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.class.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {}
PowerFist::PowerFist(PowerFist const &cpy) : AWeapon(cpy) { *this = cpy; }
PowerFist &PowerFist::operator=(PowerFist const &cpy) {
  if (this != &cpy) {
    this->setName(cpy.getName());
    this->setApCost(cpy.getApCost());
    this->setDmg(cpy.getDmg());
  }
  return *this;
}

PowerFist::~PowerFist(void){};

void PowerFist::attack(void) const {
  std::cout << "* pschhh... SBAM! *" << std::endl;
}