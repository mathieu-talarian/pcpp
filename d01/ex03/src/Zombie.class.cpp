/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 16:53:46 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/02 16:53:48 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type) {}

Zombie::~Zombie() {}

std::string Zombie::getName(void) const { return this->_name; }
std::string Zombie::getType(void) const { return this->_type; }

void Zombie::setName(std::string name) { this->_name = name; }
void Zombie::setType(std::string type) { this->_type = type; }

void Zombie::announce() const {
  std::cout << "<" << this->_name << " (" << this->_type
            << ")> Braiiiiiiiiiiiiiiiiiiiiiiiins..........." << std::endl;
}