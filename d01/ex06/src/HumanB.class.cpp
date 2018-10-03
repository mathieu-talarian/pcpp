/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 18:15:57 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/03 11:10:36 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.class.hpp"

HumanB::HumanB(std::string name) : _name(name) {
}
HumanB::~HumanB() {}
void HumanB::attack() const {
  std::cout << this->_name << " attack with his " << this->_weapon->getType()
            << std::endl;
}

void HumanB::setWeapon(Weapon& w) { this->_weapon = &w; }
