/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 00:00:54 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/06 00:08:46 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.class.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant") {
  std::cout << "Gaaah. Me want smash heads !" << std::endl;
}
SuperMutant::SuperMutant(SuperMutant const &cpy) : Enemy(cpy) {
  *this = cpy;
  std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::~SuperMutant(void) { std::cout << "Aaargh ..." << std::endl; }

void SuperMutant::takeDamage(int dmg) { return Enemy::takeDamage(dmg - 3); }