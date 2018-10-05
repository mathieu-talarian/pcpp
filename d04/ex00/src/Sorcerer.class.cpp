/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 18:55:32 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/05 19:39:46 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.class.hpp"

Sorcerer::Sorcerer(std::string name, std::string title)
    : _name(name), _title(title) {
  std::cout << this->getName() << ", " << this->getTitle() << ", is born"
            << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &src) {
  std::cout << this->getName() << ", " << this->getTitle() << ", is born"
            << std::endl;
  *this = src;
}

Sorcerer &Sorcerer::operator=(Sorcerer const &cpy) {
  if (this != &cpy) {
    this->setName(cpy.getName());
    this->setTitle(cpy.getTitle());
  }
  return (*this);
}

Sorcerer::~Sorcerer(void) {
  std::cout << this->getName() << ", " << this->getTitle()
            << ", is dead. Consequences will never be the same !" << std::endl;
}

std::string Sorcerer::getName(void) const { return this->_name; }
std::string Sorcerer::getTitle(void) const { return this->_title; }

void Sorcerer::setName(std::string name) { this->_name = name; }
void Sorcerer::setTitle(std::string title) { this->_title = title; }

void Sorcerer::polymorph(Victim const &v) { v.getPolymorphed(); }

std::ostream &operator<<(std::ostream &o, Sorcerer const &s) {
  o << "I am " << s.getName() << ", " << s.getTitle()
    << ", and I like ponies !"<< std::endl;
  return o;
}