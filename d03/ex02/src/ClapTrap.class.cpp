/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 18:10:23 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/05 15:07:12 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.class.hpp"

ClapTrap::ClapTrap(std::string name)
    : _hit_points(100), _max_hit_points(100), _level(1), _name(name) {
  STD("Hello, i'm a standard CLAP_TP " << this->_name);
}

ClapTrap::ClapTrap(ClapTrap const &cpy) {
  STD("Hahhhh you made me from another me ... ");
  *this = cpy;
}

ClapTrap::~ClapTrap() { STD("Bye creeeeeeeeeep..."); }

uint ClapTrap::getHP(void) const { return this->_hit_points; }
void ClapTrap::setHP(uint hp) { this->_hit_points = hp; }

uint ClapTrap::getMHP(void) const { return this->_max_hit_points; }
void ClapTrap::setMHP(uint mhp) { this->_max_hit_points = mhp; }

uint ClapTrap::getLVL(void) const { return this->_level; }
void ClapTrap::setLVL(uint lvl) { this->_level = lvl; }
