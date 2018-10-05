/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 18:57:16 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/05 19:43:16 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.class.hpp"

Victim::Victim(std::string name) : _name(name) {
  std::cout << "Some random victim called " << this->getName()
            << " just popped !" << std::endl;
}

Victim::Victim(Victim const &cpy) {
  std::cout << "Some random victim called " << this->getName()
            << " just popped !" << std::endl;
  *this = cpy;
}

Victim &Victim::operator=(Victim const &cpy) {
  if (this != &cpy) {
    this->setName(cpy.getName());
  }
  return (*this);
}

Victim::~Victim(void) {
  std::cout << "Victim " << this->getName()
            << " just died for no apparent reason !" << std::endl;
}

std::string Victim::getName(void) const { return this->_name; }

void Victim::setName(std::string name) { this->_name = name; }

void Victim::getPolymorphed() const {
  std::cout << this->getName() << " has been turned into a cute little sheep !" <<std::endl;
}

std::ostream &operator<<(std::ostream &o, Victim const &v) {
  o << "I'm " << v.getName() << " and I like otters !" << std::endl;
  return o;
}