/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 16:54:44 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/02 17:17:18 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.class.hpp"

ZombieHorde::ZombieHorde(int n) : _n(n) {
  this->_n = n;
  this->_zombies = new Zombie *[n];
  for (int i = 0; i < n; i++) {
    this->_zombies[i] = new Zombie(ZombieHorde::_randomName(), "smoker");
  }
}

ZombieHorde::~ZombieHorde() {
  for (int i = 0; i < this->_n; i++) {
    delete (this->_zombies[i]);
  }
  delete this->_zombies;
}

void ZombieHorde::announce() const {
  for (int i = 0; i < this->_n; i++) {
    this->_zombies[i]->announce();
  }
}

std::string ZombieHorde::_randomName() {
  return ZombieHorde::_namePool[(rand() % 20)];
}

std::string ZombieHorde::_namePool[20] = {
    "Franklin", "Clayton",   "Randall", "Waller", "Adriana",
    "Key",      "Mccormick", "Ingrid",  "Berg",   "Eliza",
    "Larsen",   "Berta",     "Agnes",   "Sharpe", "Hester",
    "Massey",   "Ada",       "Schultz", "Mckee",  "Louella"};