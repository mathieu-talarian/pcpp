/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 23:20:28 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/06 10:39:57 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.class.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &cpy) : AWeapon(cpy) { *this = cpy; }

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &cpy) {
  if (this != &cpy) {
    this->setName(cpy.getName());
    this->setApCost(cpy.getApCost());
    this->setDmg(cpy.getDmg());
  }
  return *this;
}

PlasmaRifle::~PlasmaRifle(void){};

void PlasmaRifle::attack(void) const {
  std::cout << "* piouuu piouuu piouuu *" << std::endl;
}