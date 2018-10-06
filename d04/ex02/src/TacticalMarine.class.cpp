/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.class.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 13:44:57 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/06 15:59:34 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.class.hpp"

TacticalMarine::TacticalMarine() {
  std::cout << " Tactical Marine ready for battle" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const &cpy) {
  *this = cpy;
  std::cout << " Tactical Marine ready for battle" << std::endl;
}

TacticalMarine &TacticalMarine::operator=(TacticalMarine const &cpy) {
  if (this != &cpy) {
  }
  return *this;
}

TacticalMarine::~TacticalMarine() { std::cout << "Aaargh ..." << std::endl; }

ISpaceMarine *TacticalMarine::clone() const {
  ISpaceMarine *ret = new TacticalMarine(*this);
  return ret;
}

void TacticalMarine::battleCry() const {
  std::cout << " For the holy PLOT !" << std::endl;
}

void TacticalMarine::rangedAttack() const {
  std::cout << "* attacks with bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const {
  std::cout << "* attacks with chainsword *" << std::endl;
}
