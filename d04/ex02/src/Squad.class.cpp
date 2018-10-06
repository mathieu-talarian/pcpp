/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 13:33:38 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/07 00:24:15 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.class.hpp"

Squad::Squad() { this->_squads = new List(); }
Squad::Squad(Squad const &cpy) { *this = cpy; }
Squad &Squad::operator=(Squad const &cpy) {
  if (this != &cpy) {
    *this->_squads = *cpy._squads;
  }
  return *this;
}
Squad::~Squad() { delete this->_squads; }

int Squad::getCount() const { return this->_squads->count(); }

ISpaceMarine *Squad::getUnit(int i) const {
  return (ISpaceMarine *)(this->_squads->getPos(i));
}

int Squad::push(ISpaceMarine *sp) {
  if (sp) {
    if (!this->_squads->checkIfAlreadyIn(sp)) {
      this->_squads->createNode(sp);
      return this->_squads->count();
    } else
      std::cout << "Already in the list" << std::endl;
  }
  return this->_squads->count();
}