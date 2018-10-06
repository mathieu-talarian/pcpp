/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.class.cpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 17:00:57 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/06 17:07:17 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.class.hpp"

AssaultTerminator::AssaultTerminator() {
  std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &cpy) {
  std::cout << "* teleports from space *" << std::endl;
  *this = cpy;
}

AssaultTerminator &AssaultTerminator::operator=(AssaultTerminator const &cpy) {
  if (this != &cpy) {
  }
  return *this;
}
AssaultTerminator::~AssaultTerminator() {
  std::cout << "I’ll be back ..." << std::endl;
}

ISpaceMarine *AssaultTerminator::clone() const {
  ISpaceMarine *ret = new AssaultTerminator(*this);
  return ret;
}

void AssaultTerminator::battleCry() const {
  std::cout << "This code is unclean. PURIFY IT !" << std::endl;
}

void AssaultTerminator::rangedAttack() const {
  std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const {
  std::cout << "* attacks with chainfists *" << std::endl;
}