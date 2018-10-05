/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 18:57:31 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/05 19:41:21 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.class.hpp"

Peon::Peon(std::string name) : Victim(name) {
  std::cout << "Zog Zog" << std::endl;
}

Peon::Peon(Peon const &p) : Victim(p) { std::cout << "Zog Zog" << std::endl; }

Peon &Peon::operator=(Peon const &cpy) {
  if (this != &cpy) {
    this->setName(cpy.getName());
  }
  return (*this);
}

Peon::~Peon(void) { std::cout << "Bleuark..." << std::endl; }

void Peon::getPolymorphed() const {
  std::cout << this->getName() << " has been turned into a pink pony !"
            << std::endl;
}