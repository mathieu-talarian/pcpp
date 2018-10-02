/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 15:11:02 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/02 16:22:33 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.class.hpp"

// ZombieEvent::ZombieEvent() {}

// ZombieEvent::~ZombieEvent() {}

void ZombieEvent::setZombieType(std::string type) { this->_type = type; }

Zombie *ZombieEvent::newZombie(std::string name) {
  if (this->_type.length() > 0) {
    return new Zombie(name, this->_type);
  }
  std::cout << "Please give a type to zombies" << std::endl;
  return NULL;
}

Zombie *ZombieEvent::randomChump() {
  Zombie *a = this->newZombie(ZombieEvent::_randomName());
  if (a) {
    a->announce();
    return a;
  }
  return NULL;
}

std::string ZombieEvent::_randomName() {
  return ZombieEvent::_namePool[(rand() % 20)];
}

std::string ZombieEvent::_namePool[20] = {
    "Franklin", "Clayton",   "Randall", "Waller", "Adriana",
    "Key",      "Mccormick", "Ingrid",  "Berg",   "Eliza",
    "Larsen",   "Berta",     "Agnes",   "Sharpe", "Hester",
    "Massey",   "Ada",       "Schultz", "Mckee",  "Louella"};